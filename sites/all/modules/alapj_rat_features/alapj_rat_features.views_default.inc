<?php
/**
 * @file
 * alapj_rat_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function alapj_rat_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'category_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'category page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikált';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Published date';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-d-m';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['timezone'] = 'Europe/Budapest';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => '',
  );
  /* Field: Content: Subtitled */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  /* Field: Content: Title (70) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Contextual filter: Content: Tags (field_tags) */
  $handler->display->display_options['arguments']['field_tags_tid_1']['id'] = 'field_tags_tid_1';
  $handler->display->display_options['arguments']['field_tags_tid_1']['table'] = 'field_data_field_tags';
  $handler->display->display_options['arguments']['field_tags_tid_1']['field'] = 'field_tags_tid';
  $handler->display->display_options['arguments']['field_tags_tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tags_tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tags_tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tags_tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_tags_tid_1']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Publikált */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title (70) */
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
  /* Field: Content: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'Kategória';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['created']['date_format'] = 'my';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => '',
  );
  /* Field: Content: Subtitled */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'field_tags_tid_1' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Tags (field_tags)',
    ),
  );

  /* Display: published pane */
  $handler = $view->new_display('panel_pane', 'published pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title (70) */
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
  /* Field: Content: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'Kategória';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['created']['date_format'] = 'my';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => '',
  );
  /* Field: Content: Subtitled */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Published (field_published) */
  $handler->display->display_options['arguments']['field_published_tid']['id'] = 'field_published_tid';
  $handler->display->display_options['arguments']['field_published_tid']['table'] = 'field_data_field_published';
  $handler->display->display_options['arguments']['field_published_tid']['field'] = 'field_published_tid';
  $handler->display->display_options['arguments']['field_published_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_published_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_published_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_published_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_published_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'field_published_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Published (field_published)',
    ),
  );

  /* Display: tags pane */
  $handler = $view->new_display('panel_pane', 'tags pane', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title (70) */
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
  /* Field: Content: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'Kategória';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['created']['date_format'] = 'my';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => '',
  );
  /* Field: Content: Subtitled */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Tags (field_tagsa) */
  $handler->display->display_options['arguments']['field_tagsa_tid']['id'] = 'field_tagsa_tid';
  $handler->display->display_options['arguments']['field_tagsa_tid']['table'] = 'field_data_field_tagsa';
  $handler->display->display_options['arguments']['field_tagsa_tid']['field'] = 'field_tagsa_tid';
  $handler->display->display_options['arguments']['field_tagsa_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tagsa_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tagsa_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tagsa_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'field_tagsa_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Tags (field_tagsa)',
    ),
  );

  /* Display: Menu pane */
  $handler = $view->new_display('panel_pane', 'Menu pane', 'panel_pane_4');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title (70) */
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
  /* Field: Content: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'Kategória';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['created']['date_format'] = 'my';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => '',
  );
  /* Field: Content: Subtitled */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Primary Menu (field_menu) */
  $handler->display->display_options['arguments']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['arguments']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['arguments']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['arguments']['field_menu_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_menu_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_menu_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_menu_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_menu_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Secondary Menu (field_secondary_menu) */
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['id'] = 'field_secondary_menu_tid';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['table'] = 'field_data_field_secondary_menu';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['field'] = 'field_secondary_menu_tid';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'field_menu_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Menu (field_menu)',
    ),
    'field_secondary_menu_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Secondary Menu (field_secondary_menu)',
    ),
  );
  $translatables['category_page'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Publikált'),
    t('Tags'),
    t('Published date'),
    t('All'),
    t('Content pane'),
    t('<a href="[path]">[field_title2]</a>'),
    t('Publikálta'),
    t('Kategória'),
    t('Közzétéve'),
    t('View panes'),
    t('published pane'),
    t('tags pane'),
    t('Menu pane'),
  );
  $export['category_page'] = $view;

  return $export;
}
