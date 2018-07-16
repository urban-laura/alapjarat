<?php
/**
 * @file
 * Views select translation filter handler.
 */

// @ignore sniffer_namingconventions_validclassname_startwithcaptial:file
// @ignore style_class_names:file

// @ignore comment_comment_docblock_missing
class select_translation_filter_handler extends views_handler_filter {
  // @ignore sniffer_namingconventions_validfunctionname_notlowercamel:class

  // Don't display empty space where the operator would be.
  // @ignore sniffer_namingconventions_validvariablename_lowercamelname
  var $no_operator = TRUE;

  /**
   * Returns admin summary of the filter options.
   */
  function admin_summary() {
    $options = array(
      'original' => t('Original language fallback'),
      'default' => t('Default site language fallback'),
      'list' => t('Custom fallback priority'),
    );
    return $options[$this->value];
  }

  /**
   * Returns an array of filter option defaults.
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['value']['default'] = 'default';
    $options['priorities']['default'] = '';
    $options['default_language_only']['default'] = 0;
    $options['include_content_without_translation']['default'] = 1;
    $options['include_content_with_unpublished_translation']['default'] = 0;
    return $options;
  }

  /**
   * Returns the operator form.
   */
  function operator_form(&$form, &$form_state) {
    $form['operator'] = array();
  }

  /**
   * Returns a form with configurable options.
   */
  function value_form(&$form, &$form_state) {
    $form['value'] = array(
      '#type' => 'radios',
      '#title' => t('Select translation selection mode'),
      '#options' => array(
        'original' => t('Use current language ; if not available use original language'),
        'default'  => t('Use current language ; if not available use default language ; if not available use original language'),
        'list'     => t('Choose language priorities'),
      ),
      '#default_value' => $this->value,
    );
    $form['priorities'] = array(
      '#type' => 'textfield',
      '#title' => t('Language priorities'),
      '#description' => t('If selection mode is set to "Choose language priorities",
                           you can enter here a comma separated list of language codes.
                           The filter will then return the node in the first available langauge
                           in that list ; and the original version if no match were found.<br/><br/>
                           The special value "current" will be replaced with the current language,
                           "default" will be replaced with the default language,
                           and "original" with the original language of each node.
                           <br/><br/>
                           Example:<br/><em>en,fr,current,default,original</em><br/>
                           This will return the version in english if available, if not in french,
                           if not in the current language, if not in the default language.
                           If none are available it will return the original version.'),
      '#default_value' => !empty($this->options['priorities']) ? $this->options['priorities'] : '',
      '#dependency' => array('radio:options[value]' => array('list')),
    );

    $form['default_language_only'] = array(
      '#type' => 'checkbox',
      '#title' => t('Display default language content *only*, if the currently selected user language is the default site language.'),
      '#description' => t("When you check this option, the order chosen above will be ignored when current language = site default language,
        instead it will only show translations for the default language. "),
      '#default_value' => !empty($this->options['default_language_only']) ? $this->options['default_language_only'] : 0,
    );

    $form['include_content_without_translation'] = array(
      '#type' => 'checkbox',
      '#title' => t('Include content that does not have translations, aka it does not belong to a translation set (tnid = 0)'),
      '#description' => t('Sometimes you have content that is created originally in another language than English (e.g., Chinese)
        and it does not have translations, hence it does not belong to a translation set. With this option checked,
        the Chinese content will appear regardless of current language.'),
      '#default_value' => !empty($this->options['include_content_without_translation']) ? $this->options['include_content_without_translation'] : 0,
    );

    $form['include_content_with_unpublished_translation'] = array(
      '#type' => 'checkbox',
      '#title' => t('Return content in the site default language when a translation for the current language *does* exist, but it is unpublished.'),
      '#description' => t('When you check this option, in addition to the order chosen above, content will be shown in the default site language in the event that the translation in the current language is unpublished.'),
      '#default_value' => !empty($this->options['include_content_with_unpublished_translation']) ? $this->options['include_content_with_unpublished_translation'] : 0,
    );
  }

  /**
   * A query that doesn't use correlated sub-queries.
   *
   * Thus executing faster for larger data sets.
   */
  function better_query() {
    global $language_content;
    $default_language = language_default('language');
    $current_language = $language_content->language;

    // Limit the language list to default only, if the option was selected and
    // default_language == current_language.
    if ($this->options['default_language_only'] && $default_language == $current_language) {
      $list = array('default');
    }
    // Otherwise prepare the language order list.
    else {
      $list = array();
      if ($this->value == 'original') {
        $list = array('current');
      }
      elseif ($this->value == 'default') {
        $list = array('current', 'default');
      }
      elseif (!empty($this->options['priorities'])) {
        $list = explode(',', $this->options['priorities']);
        foreach ($list as $i => $v) {
          $list[$i] = strtolower(trim($v));
        }
      }
      $list[] = 'original';
    }

    foreach ($list as $i => $v) {
      if ($list[$i] == 'current') {
        $list[$i] = $current_language;
      }
      elseif ($list[$i] == 'default') {
        $list[$i] = $default_language;
      }
    }
    $list = array_unique($list);

    // Now build the query.
    $query = $this->query;
    /* @var $query views_plugin_query_default */
    $alias = $query->ensure_table('node');
    $condition_holder = db_or();

    // First include nodes that don't have translations, if option was checked.
    if ($this->options['include_content_without_translation']) {
      $condition_holder->condition("$alias.tnid", 0);
    }

    $i = 0;
    $exclude = array();
    // Now go through each language.
    foreach ($list as $language) {
      $add_new_join = FALSE;
      if ($language != 'original') {
        // Create a views join on the node table, and add it as a relationship.
        // This is used to find if there are translations of a certain language.
        $join = new views_join();
        $add_new_join = TRUE;
        $sub_query_alias = 'nt' . $i;

        // Because domain module uses node_access, and rewrites the query to add
        // exists clauses for each left joined node table (maybe specific to all
        // node access modules), thus breaking the listing, we wrap the table in
        // a sub-query, avoiding the exists clause.
        $this->node_access_join($join, $language, $alias, $sub_query_alias);

        // Add the join as a relationship.
        $query->add_relationship($sub_query_alias, $join, 'node');
      }

      if ($language == 'original') {
        // Include nodes that are the base of a translation (aka original).
        $and = db_and()->where("$alias.nid = $alias.tnid");
      }
      else {
        // Include nodes of specified language.
        $and = db_and()->condition("$alias.language", $language);
      }

      // Add the currently processed language only if previous languages were
      // not found.
      foreach ($exclude as $e) {
        $and->where($e);
      }
      $condition_holder->condition($and);

      // Add to excludes the currently processed translation language.
      if (isset($sub_query_alias) && $add_new_join) {
        $exclude[] = $sub_query_alias . '.nid IS NULL';
        ++$i;
      }
    }

    // Include site default nodes in place of unpublished translations.
    if ($this->options['include_content_with_unpublished_translation']) {
      $sub_query_alias = 'nt' . $i;
      $join = new views_join();

      // Join with the currently selected language.
      $this->node_access_join($join, $current_language, 'node', $sub_query_alias);

      // Add the join as a relationship.
      $query->add_relationship($sub_query_alias, $join, 'node');

      // The default language node will be selected, if the current language
      // (translated) node is unpublished.
      $condition_holder->condition(db_and()
        ->condition("$alias.language", $default_language)
        ->condition("$sub_query_alias.status", NODE_NOT_PUBLISHED)
      );
    }

    // Add in the conditions.
    $query->add_where($this->options['group'], $condition_holder);
  }

  /**
   * Join to the node table where the nodes have the given language.
   *
   * @param views_join $join
   *   The views join object.
   * @param string $language
   *   The language of the nodes that should be retrieved.
   * @param string $alias
   *   The alias of the main node table.
   * @param string $sub_query_alias
   *   The alias of the sub query node table.
   * @param string $extra
   *   A string with extra join conditions.
   */
  function node_access_join(&$join, $language, $alias, $sub_query_alias, $extra = NULL) {
    $sub_query = db_select('node', $sub_query_alias);
    $sub_query->addField($sub_query_alias, 'nid');
    $sub_query->addField($sub_query_alias, 'tnid');
    $sub_query->addfield($sub_query_alias, 'status');
    $sub_query->addField($sub_query_alias, 'language');
    $sub_query->where("$sub_query_alias.language = '$language'");

    // If not extra argument was sent, use the default one.
    if ($extra === NULL) {
      // Nodes have translations when translation id is different from 0.
      $extra = "$alias.tnid != 0";
    }

    $join->construct($sub_query, $alias, 'tnid', 'tnid', array($extra));
  }

  /**
   * The default join is currently not used.
   */
  function default_join(&$join, $language, $alias, $sub_query_alias) {
    $extra = "$sub_query_alias.language = '$language' AND $alias.tnid != 0";
    /* @var $join views_join */
    $join->construct('node', $alias, 'tnid', 'tnid', $extra);
  }

  /**
   * Executes the query.
   */
  public function query() {
    $this->better_query();
  }

  /**
   * This was the original correlated query, which is currently not used.
   */
  function original_query() {
    // Prepare input.
    $list = array();
    if ($this->value == 'original') {
      $list = array('current');
    }
    elseif ($this->value == 'default') {
      $list = array('current', 'default');
    }
    elseif (!empty($this->options['priorities'])) {
      $list = explode(',', $this->options['priorities']);
      foreach ($list as $i => $v) {
        $list[$i] = strtolower(trim($v));
      }
    }
    $list[] = 'original';
    foreach ($list as $i => $v) {
      if ($list[$i] == 'current') {
        $list[$i] = '***CURRENT_LANGUAGE***';
      }
      elseif ($list[$i] == 'default') {
        $list[$i] = language_default('language');
      }
    }
    $list = array_unique($list);

    $views_query = $this->query;
    /* @var $views_query views_plugin_query_default */

    // Now build the query. For every option, we need to exclude
    // the previous ones to ensure only one node gets selected in the end.
    $alias = $views_query->ensure_table('node');
    // First include nodes that don't have translations.
    $query = "node.tnid = 0";
    $exclude = array();
    foreach ($list as $v) {
      if ($v == 'original') {
        // Include nodes that are the base of a translation (aka original).
        $add = "$alias.nid = $alias.tnid";
        $exc = "lmfh_node.tnid = lmfh_node.nid";
      }
      else {
        // Include nodes of specified language.
        $add = "$alias.language = '$v'";
        $exc = "lmfh_node.language = '$v'";
      }

      if (count($exclude)) {
        $add = $add . " AND
          0 = (SELECT count(lmfh_node.nid)
                 FROM {node} AS lmfh_node
                WHERE lmfh_node.tnid = node.tnid AND
                      ((" . implode(') OR (', $exclude) . ")))";
      }
      $exclude[] = $exc;

      $query = $query . "\n OR ($add)";
    }

    $views_query->add_where_expression($this->options['group'], $query);
  }
}
