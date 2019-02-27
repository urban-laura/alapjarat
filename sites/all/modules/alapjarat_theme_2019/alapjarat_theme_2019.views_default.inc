<?php
/**
 * @file
 * alapjarat_theme_2019.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function alapjarat_theme_2019_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'articles_2019';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Articles 2019';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmaz';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Relationship: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['relationships']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['relationships']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['relationships']['field_menu_tid']['field'] = 'field_menu_tid';
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'alapjarat_admin',
    'image_link' => '',
  );
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M d, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );

  /* Display: First 5 */
  $handler = $view->new_display('panel_pane', 'First 5', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Legfrissebb';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'helpful_small',
    'image_link' => 'content',
  );
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M d, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'my';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: helpful_info_A */
  $handler = $view->new_display('panel_pane', 'helpful_info_A', 'panel_pane_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<ul>
<li><a href=\'/hasznos-infok\'><h3>Hasznos infók</h3></a></li>
<li class=\'text\'><a href=\'/hasznos-infok\'>> Összes</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['relationships']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['relationships']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['relationships']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'big_2019',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '97',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['expose']['operator_id'] = 'field_menu_tid_op';
  $handler->display->display_options['filters']['field_menu_tid']['expose']['label'] = 'Primary Menu (field_menu)';
  $handler->display->display_options['filters']['field_menu_tid']['expose']['operator'] = 'field_menu_tid_op';
  $handler->display->display_options['filters']['field_menu_tid']['expose']['identifier'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: actual_A */
  $handler = $view->new_display('panel_pane', 'actual_A', 'panel_pane_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<ul>
<li><a href=\'/aktualis\'><h3>Aktuális</h3></a></li>
<li class=\'text\'><a href=\'/aktualis\'>> Összes</a></li>
</ul>
';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'big_2019',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '106',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: actual_B */
  $handler = $view->new_display('panel_pane', 'actual_B', 'panel_pane_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'small_2019',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['field_title2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '106',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: tech_A */
  $handler = $view->new_display('panel_pane', 'tech_A', 'panel_pane_7');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<ul>
<li><a href=\'/tech\'><h3>Tech</h3></a></li>
<li class=\'text\'><a href=\'/tech\'>> Összes</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'big_2019',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_title2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '102',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: test */
  $handler = $view->new_display('panel_pane', 'test', 'panel_pane_8');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<ul>
<li><a href=\'/autoteszt\'><h3>Autóteszt</h3></a></li>
<li class=\'text\'><a href=\'/autoteszt\'>> Összes</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'big_2019',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_title2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '103',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: right */
  $handler = $view->new_display('panel_pane', 'right', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span class="pane-title">Ajánlott cikkek</span>';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'small_2019',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['field_title2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: One */
  $handler = $view->new_display('panel_pane', 'One', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '1_big',
    'image_link' => 'content',
  );
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M d, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: Four */
  $handler = $view->new_display('panel_pane', 'Four', 'panel_pane_10');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '4_small',
    'image_link' => 'content',
  );
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M d, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: tuning_A */
  $handler = $view->new_display('panel_pane', 'tuning_A', 'panel_pane_11');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<ul>
<li><a href=\'/tuning\'><h3>Tuning</h3></a></li>
<li class=\'text\'><a href=\'/tuning\'>> Összes</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'big_2019',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_title2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '105',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: rajtracs_A */
  $handler = $view->new_display('panel_pane', 'rajtracs_A', 'panel_pane_12');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<ul>
<li><a href=\'/rajtracs\'><h3>Rajtrács</h3></a></li>
<li class=\'text\'><a href=\'/rajtracs\'>> Összes</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'big_2019',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_title2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '108',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: el_mondo */
  $handler = $view->new_display('panel_pane', 'el_mondo', 'panel_pane_13');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<ul>
<li><a href=\'/el-mondo\'><h3>El Mondó</h3></a></li>
<li class=\'text\'><a href=\'/el-mondo\'>> Összes</a></li>
</ul>';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'big_2019',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_title2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '110',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: Right First 5 Article */
  $handler = $view->new_display('panel_pane', 'Right First 5 Article', 'panel_pane_16');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Legfrissebb Híreink';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'first_5_article',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: tech_B */
  $handler = $view->new_display('panel_pane', 'tech_B', 'panel_pane_17');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'fullhtml';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'small_2019',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_title2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '102',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: rajtracs_B */
  $handler = $view->new_display('panel_pane', 'rajtracs_B', 'panel_pane_18');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'small_2019',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_title2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '108',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: tuning_B */
  $handler = $view->new_display('panel_pane', 'tuning_B', 'panel_pane_19');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'fullhtml';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'small_2019',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['field_title2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '105',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: helpful_info_B */
  $handler = $view->new_display('panel_pane', 'helpful_info_B', 'panel_pane_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['relationships']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['relationships']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['relationships']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'small_2019',
    'image_link' => 'content',
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '97',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['expose']['operator_id'] = 'field_menu_tid_op';
  $handler->display->display_options['filters']['field_menu_tid']['expose']['label'] = 'Primary Menu (field_menu)';
  $handler->display->display_options['filters']['field_menu_tid']['expose']['operator'] = 'field_menu_tid_op';
  $handler->display->display_options['filters']['field_menu_tid']['expose']['identifier'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
  $translatables['articles_2019'] = array(
    t('Master'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('term from field_menu'),
    t('<a href="[path]">[field_title2]</a>'),
    t('First 5'),
    t('Legfrissebb'),
    t('Közzétéve'),
    t('Nézettáblák'),
    t('helpful_info_A'),
    t('<ul>
<li><a href=\'/hasznos-infok\'><h3>Hasznos infók</h3></a></li>
<li class=\'text\'><a href=\'/hasznos-infok\'>> Összes</a></li>
</ul>'),
    t('Primary Menu (field_menu)'),
    t('actual_A'),
    t('<ul>
<li><a href=\'/aktualis\'><h3>Aktuális</h3></a></li>
<li class=\'text\'><a href=\'/aktualis\'>> Összes</a></li>
</ul>
'),
    t('actual_B'),
    t('tech_A'),
    t('<ul>
<li><a href=\'/tech\'><h3>Tech</h3></a></li>
<li class=\'text\'><a href=\'/tech\'>> Összes</a></li>
</ul>'),
    t('test'),
    t('<ul>
<li><a href=\'/autoteszt\'><h3>Autóteszt</h3></a></li>
<li class=\'text\'><a href=\'/autoteszt\'>> Összes</a></li>
</ul>'),
    t('right'),
    t('<span class="pane-title">Ajánlott cikkek</span>'),
    t('One'),
    t('Four'),
    t('tuning_A'),
    t('<ul>
<li><a href=\'/tuning\'><h3>Tuning</h3></a></li>
<li class=\'text\'><a href=\'/tuning\'>> Összes</a></li>
</ul>'),
    t('rajtracs_A'),
    t('<ul>
<li><a href=\'/rajtracs\'><h3>Rajtrács</h3></a></li>
<li class=\'text\'><a href=\'/rajtracs\'>> Összes</a></li>
</ul>'),
    t('el_mondo'),
    t('<ul>
<li><a href=\'/el-mondo\'><h3>El Mondó</h3></a></li>
<li class=\'text\'><a href=\'/el-mondo\'>> Összes</a></li>
</ul>'),
    t('Right First 5 Article'),
    t('Legfrissebb Híreink'),
    t('tech_B'),
    t('rajtracs_B'),
    t('tuning_B'),
    t('helpful_info_B'),
  );
  $export['articles_2019'] = $view;

  return $export;
}
