<?php

/**
 * Implements hook_theme().
 */
function amptheme_theme($existing, $type, $theme, $path) {
  $theme = array();
  $theme['amp_skip_link'] = array(
    'variables' => array(
      'skiptext' => NULL
    ),
    'template' => 'templates/amp-skip-link'
  );
  return $theme;
}

/**
 * Preprocess all templates.
 */
function amptheme_preprocess(&$vars, $hook) {
  $vars['amptheme_path_file'] = DRUPAL_ROOT . '/' . drupal_get_path('theme', 'amptheme');
}

/**
 * Implements hook_page_alter().
 */
function amptheme_page_alter(&$page) {
  // Remove the toolbar from page_top
  if(isset($page['page_top']['toolbar'])) {
    unset($page['page_top']['toolbar']);
  }

  // Remove all script tags on elements directly within a region.
  foreach ($page as $region_key => $region) {
    if (is_array($region)) {
      foreach ($region as $item_key => $item) {
        if (is_array($item) && isset($item['#tag']) && $item['#tag'] == 'script') {
          unset($page[$region_key][$item_key]);
        }
      }
    }
  }
}

/**
 * Implements hook_html_head_alter().
 */
function amptheme_html_head_alter(&$head_elements) {
  // Remove all script tags from $head except amp scripts.
  foreach ($head_elements as $key => $element) {
    if (isset($element['#tag']) && $element['#tag'] == 'script') {
      if (isset($element['#attributes']['src'])) {
        if (strpos($element['#attributes']['src'], 'cdn.ampproject.org') !== FALSE) {
          continue;
        }
        else {
          unset($head_elements[$key]);
        }
      }
      // Remove script elements without a src attribute with the exceptio of the
      // AMP metadata JSON script element.
      elseif ($key !== 'amp_metadata') {
        unset($head_elements[$key]);
      }
    }

    if (isset($element['#prefix']) && strpos($element['#prefix'], 'script')) {
      unset($head_elements[$key]);
    }

    if (isset($element['#suffix']) && strpos($element['#suffix'], 'script')) {
      unset($head_elements[$key]);
    }
  }

  // We will manually set this in the template to control source order.
  if (isset($head_elements['system_meta_content_type'])) {
    unset($head_elements['system_meta_content_type']);
  }
}

/**
 * Implements hook_js_alter().
 *
 */
function amptheme_js_alter(&$javascript) {
  // Remove all JS: only amp component JS added to html head is allowed.
  foreach (array_keys($javascript) as $key) {
    unset($javascript[$key]);
  }
}

/**
* Implements hook_preprocess_html() for HTML document templates.
*/
function amptheme_preprocess_html(&$variables) {

  $viewport = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' => 'width=device-width,minimum-scale=1,initial-scale=1',
    ),
  );

  drupal_add_html_head($viewport, 'viewport');
  // Add skip link render array.
  $variables['amp_skip_link'] = array(
    '#theme' => 'amp_skip_link',
    '#skiptext' => t('Skip to main content')
  );
}

/**
* Implements hook_preprocess_page() for page templates.
*/
function amptheme_preprocess_page(&$variables) {
  if (!empty($variables['logo'])) {
    // Create logo path relative to files directory.
    $logo_url = parse_url($variables['logo']);
    $logo_path = $logo_url['path'];
    if (substr($logo_path, 0, strlen(base_path())) == base_path()) {
      $logo_path = substr($logo_path, strlen(base_path()));
    }
    $files_dir = variable_get('file_public_path', conf_path() . '/files');
    if (substr($logo_path, 0, strlen($files_dir)) == $files_dir) {
      $logo_path = substr($logo_path, strlen($files_dir));
    }

    // Create normalized logo URI.
    $logo_uri = file_stream_wrapper_uri_normalize(file_build_uri($logo_path));

    // Get height and width of logo.
    $logo_info = image_get_info($logo_uri);
    $variables['logo_height'] = $logo_info['height'];
    $variables['logo_width'] = $logo_info['width'];
  }
}

/**
 * Implements hook_preprocess_node() for node templates.
 */
function amptheme_preprocess_node(&$variables) {
  // Remove RDF properties incompatible with AMP specification.
  if (isset($variables['attributes_array']['about'])) {
    unset($variables['attributes_array']['about']);
  }
  if (isset($variables['attributes_array']['typeof'])) {
    unset($variables['attributes_array']['typeof']);
  }
  if (isset($variables['title_suffix']['rdf_meta_title'])) {
    unset($variables['title_suffix']['rdf_meta_title']);
  }
  if (isset($variables['title_suffix']['rdf_meta_comment_count'])) {
    unset($variables['title_suffix']['rdf_meta_comment_count']);
  }
  if (isset($variables['rdf_mapping'])) {
    unset($variables['rdf_mapping']);
  }
  if (isset($variables['rdf_template_variable_attributes_array'])) {
    unset($variables['rdf_template_variable_attributes_array']);
  }
}

/**
 * Implements hook_preprocess_field() for field templates.
 */
function amptheme_preprocess_field(&$variables) {
  // Remove RDF properties incompatible with AMP specification.
  $element = $variables['element'];
  foreach ($element['#items'] as $delta => $item) {
    if (isset($variables['item_attributes_array'][$delta]['rel'])) {
      unset($variables['item_attributes_array'][$delta]['rel']);
    }
    if (isset($variables['item_attributes_array'][$delta]['rev'])) {
      unset($variables['item_attributes_array'][$delta]['rev']);
    }
    if (isset($variables['item_attributes_array'][$delta]['property'])) {
      unset($variables['item_attributes_array'][$delta]['property']);
    }
    if (isset($variables['item_attributes_array'][$delta]['content'])) {
      unset($variables['item_attributes_array'][$delta]['content']);
    }
    if (isset($variables['item_attributes_array'][$delta]['datatype'])) {
      unset($variables['item_attributes_array'][$delta]['datatype']);
    }
    if (isset($variables['item_attributes_array'][$delta]['resource'])) {
      unset($variables['item_attributes_array'][$delta]['resource']);
    }
    if (isset($variables['items'][$delta]['#options']['attributes']['typeof'])) {
      unset($variables['items'][$delta]['#options']['attributes']['typeof']);
    }
    if (isset($variables['items'][$delta]['#options']['attributes']['property'])) {
      unset($variables['items'][$delta]['#options']['attributes']['property']);
    }
    if (isset($variables['items'][$delta]['#options']['attributes']['datatype'])) {
      unset($variables['items'][$delta]['#options']['attributes']['datatype']);
    }
  }
}

/**
 * Implements hook_preprocess_user_profile() for user profile templates.
 */
function amptheme_preprocess_user_profile(&$variables) {
  // Remove RDF properties incompatible with AMP specification.
  if (isset($variables['attributes_array']['about'])) {
    unset($variables['attributes_array']['about']);
  }
  if (isset($variables['attributes_array']['typeof'])) {
    unset($variables['attributes_array']['typeof']);
  }
}

/**
 * Implements hook_preprocess_username() for username templates.
 */
function amptheme_preprocess_username(&$variables) {
  // Remove RDF properties incompatible with AMP specification.
  if (isset($variables['attributes_array']['xml:lang'])) {
    unset($variables['attributes_array']['xml:lang']);
  }
  if (isset($variables['attributes_array']['about'])) {
    unset($variables['attributes_array']['about']);
  }
  if (isset($variables['attributes_array']['typeof'])) {
    unset($variables['attributes_array']['typeof']);
  }
  if (isset($variables['attributes_array']['property'])) {
    unset($variables['attributes_array']['property']);
  }
  if (isset($variables['attributes_array']['datatype'])) {
    unset($variables['attributes_array']['datatype']);
  }
  if (isset($variables['attributes_array']['rel'])) {
    unset($variables['attributes_array']['rel']);
  }
}

/**
 * Implements hook_preprocess_comment() for comment templates.
 */
function amptheme_preprocess_comment(&$variables) {
  // Remove RDF properties incompatible with AMP specification.
  if (isset($variables['attributes_array']['about'])) {
    unset($variables['attributes_array']['about']);
  }
  if (isset($variables['attributes_array']['typeof'])) {
    unset($variables['attributes_array']['typeof']);
  }
  if (isset($variables['rdf_template_variable_attributes_array'])) {
    unset($variables['rdf_template_variable_attributes_array']);
  }
  if (isset($variables['title_attributes_array']['property'])) {
    unset($variables['title_attributes_array']['property']);
  }
  if (isset($variables['title_attributes_array']['datatype'])) {
    unset($variables['title_attributes_array']['datatype']);
  }
  if (isset($variables['rdf_metadata_attributes_array'])) {
    unset($variables['rdf_metadata_attributes_array']);
  }
}


/**
 * Returns AMP HTML for an image.
 *
 * Overrides theme_image in order to return the amp-img element.
 *
 * @param $variables
 *   An associative array containing:
 *   - path: Either the path of the image file (relative to base_path()) or a
 *     full URL.
 *   - width: The width of the image (if known).
 *   - height: The height of the image (if known).
 *   - alt: The alternative text for text-based browsers. HTML 4 and XHTML 1.0
 *     always require an alt attribute. The HTML 5 draft allows the alt
 *     attribute to be omitted in some cases. Therefore, this variable defaults
 *     to an empty string, but can be set to NULL for the attribute to be
 *     omitted. Usually, neither omission nor an empty string satisfies
 *     accessibility requirements, so it is strongly encouraged for code
 *     calling theme('image') to pass a meaningful value for this variable.
 *     - http://www.w3.org/TR/REC-html40/struct/objects.html#h-13.8
 *     - http://www.w3.org/TR/xhtml1/dtds.html
 *     - http://dev.w3.org/html5/spec/Overview.html#alt
 *   - title: The title text is displayed when the image is hovered in some
 *     popular browsers.
 *   - attributes: Associative array of attributes to be placed in the img tag.
 */
function amptheme_image($variables) {
  // Remove RDF properties incompatible with AMP specification.
  if (isset($variables['attributes']['typeof'])) {
    unset($variables['attributes']['typeof']);
  }

  $attributes = $variables['attributes'];
  $attributes['src'] = file_create_url($variables['path']);

  foreach (array('width', 'height', 'alt', 'title') as $key) {

    if (isset($variables[$key])) {
      if (empty($attributes[$key])) {
        $attributes[$key] = $variables[$key];
      }
    }
  }

  return '<amp-img' . drupal_attributes($attributes) . '></amp-img>';
}

/**
 * Implements hook_preprocess_rdf_template_variable_wrapper().
 */
function amptheme_preprocess_rdf_template_variable_wrapper(&$variables) {
  // Remove RDF properties incompatible with AMP specification.
  $output = $variables['content'];
  return $output;
}

/**
 * Implements hook_preprocess_rdf_metadata() for rdf metadata templates.
 */
function amptheme_preprocess_rdf_metadata(&$variables) {
  // Remove RDF properties incompatible with AMP specification.
  $output = '';
  foreach ($variables['metadata'] as $key => $attributes) {
    $output .= '';
  }
  return $output;
}

/**
 * Implements hook_html_tag() for HTML tags.
 *
 * Overriding in order to provide empty attributes.
 */
function amptheme_html_tag(&$variables) {
  $element = $variables['element'];
  $attributes = isset($element['#attributes']) ? _amp_drupal_attributes($element['#attributes']) : '';
  if ($element['#tag'] == 'script' && !isset($element['#value'])) {
    return '<' . $element['#tag'] . $attributes . " ></" . $element['#tag'] . ">\n";
  }
  else if (!isset($element['#value'])) {
    return '<' . $element['#tag'] . $attributes . " />\n";
  }
  else {
    $output = '<' . $element['#tag'] . $attributes . '>';
    if (isset($element['#value_prefix'])) {
      $output .= $element['#value_prefix'];
    }
    $output .= $element['#value'];
    if (isset($element['#value_suffix'])) {
      $output .= $element['#value_suffix'];
    }
    $output .= '</' . $element['#tag'] . ">\n";
    return $output;
  }
}

/**
 * Converts an associative array to an XML/HTML tag attribute string.
 *
 * Each array key and its value will be formatted into an attribute string.
 * If a value is itself an array, then its elements are concatenated to a single
 * space-delimited string (for example, a class attribute with multiple values).
 *
 * If a value is set to true, then the key will be added as an empty
 * attribute, as allowed by HTML5.
 *
 * Attribute values are sanitized by running them through check_plain().
 * Attribute names are not automatically sanitized. When using user-supplied
 * attribute names, it is strongly recommended to allow only white-listed names,
 * since certain attributes carry security risks and can be abused.
 *
 * Examples of security aspects when using drupal_attributes:
 * @code
 *   // By running the value in the following statement through check_plain,
 *   // the malicious script is neutralized.
 *   drupal_attributes(array('title' => t('<script>steal_cookie();</script>')));
 *
 *   // The statement below demonstrates dangerous use of drupal_attributes, and
 *   // will return an onmouseout attribute with JavaScript code that, when used
 *   // as attribute in a tag, will cause users to be redirected to another site.
 *   //
 *   // In this case, the 'onmouseout' attribute should not be whitelisted --
 *   // you don't want users to have the ability to add this attribute or others
 *   // that take JavaScript commands.
 *   drupal_attributes(array('onmouseout' => 'window.location="http://malicious.com/";')));
 * @endcode
 *
 * @param $attributes
 *   An associative array of key-value pairs to be converted to attributes.
 *
 * @return
 *   A string ready for insertion in a tag (starts with a space).
 *
 * @ingroup sanitization
 */
function _amp_drupal_attributes(array $attributes = array()) {
  foreach ($attributes as $attribute => &$data) {
    $data = implode(' ', (array) $data);

    if ($data === TRUE || $data === '1' || $data === '') {
      $data = $attribute;
    }
    else {
      $data = $attribute . '="' . check_plain($data) . '"';
    }
  }
  return $attributes ? ' ' . implode(' ', $attributes) : '';
}
