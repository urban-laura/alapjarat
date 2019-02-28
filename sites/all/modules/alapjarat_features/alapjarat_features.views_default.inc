<?php
/**
 * @file
 * alapjarat_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function alapjarat_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmaz';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'path' => 'path',
    'field_title2' => 'field_title2',
    'field_hiden_select' => 'field_hiden_select',
    'created' => 'created',
    'field_published' => 'field_published',
    'field_menu' => 'field_menu',
    'field_tags' => 'field_tags',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_hiden_select';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_title2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hiden_select' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_published' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_menu' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Tartalom';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location0_tid']['expose']['operator_id'] = 'field_location0_tid_op';
  $handler->display->display_options['filters']['field_location0_tid']['expose']['label'] = 'Location (field_location0)';
  $handler->display->display_options['filters']['field_location0_tid']['expose']['operator'] = 'field_location0_tid_op';
  $handler->display->display_options['filters']['field_location0_tid']['expose']['identifier'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';

  /* Display: Impress (1) */
  $handler = $view->new_display('page', 'Impress (1)', 'page_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Név';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
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
    'impress' => 'impress',
  );
  /* Filter criterion: Tartalom: Colleague status (field_colleague_status) */
  $handler->display->display_options['filters']['field_colleague_status_tid']['id'] = 'field_colleague_status_tid';
  $handler->display->display_options['filters']['field_colleague_status_tid']['table'] = 'field_data_field_colleague_status';
  $handler->display->display_options['filters']['field_colleague_status_tid']['field'] = 'field_colleague_status_tid';
  $handler->display->display_options['filters']['field_colleague_status_tid']['value'] = array(
    0 => '6236',
  );
  $handler->display->display_options['filters']['field_colleague_status_tid']['vocabulary'] = 'collegue_status';
  $handler->display->display_options['path'] = 'admin/impress/1';

  /* Display: Partners (1) */
  $handler = $view->new_display('page', 'Partners (1)', 'page_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Cím';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
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
    'partners' => 'partners',
  );
  /* Filter criterion: Tartalom: Premium car partner? (field_premium_car_partner_1) */
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['id'] = 'field_premium_car_partner_1_tid';
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['table'] = 'field_data_field_premium_car_partner_1';
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['field'] = 'field_premium_car_partner_1_tid';
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['value'] = array(
    0 => '52',
  );
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['vocabulary'] = 'yes_no';
  $handler->display->display_options['path'] = 'admin/partners/1';

  /* Display: Impress (2) */
  $handler = $view->new_display('page', 'Impress (2)', 'page_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Név';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'impress' => 'impress',
  );
  /* Filter criterion: Tartalom: Colleague status (field_colleague_status) */
  $handler->display->display_options['filters']['field_colleague_status_tid']['id'] = 'field_colleague_status_tid';
  $handler->display->display_options['filters']['field_colleague_status_tid']['table'] = 'field_data_field_colleague_status';
  $handler->display->display_options['filters']['field_colleague_status_tid']['field'] = 'field_colleague_status_tid';
  $handler->display->display_options['filters']['field_colleague_status_tid']['value'] = array(
    0 => '6237',
  );
  $handler->display->display_options['filters']['field_colleague_status_tid']['vocabulary'] = 'collegue_status';
  $handler->display->display_options['path'] = 'admin/impress/2';

  /* Display: Partners (2) */
  $handler = $view->new_display('page', 'Partners (2)', 'page_5');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Cím';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_5';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'partners' => 'partners',
  );
  /* Filter criterion: Tartalom: Premium car partner? (field_premium_car_partner_1) */
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['id'] = 'field_premium_car_partner_1_tid';
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['table'] = 'field_data_field_premium_car_partner_1';
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['field'] = 'field_premium_car_partner_1_tid';
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['value'] = array(
    0 => '53',
  );
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['vocabulary'] = 'yes_no';
  $handler->display->display_options['path'] = 'admin/partners/2';

  /* Display: Pages */
  $handler = $view->new_display('page', 'Pages', 'page_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Tartalom';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Cím';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Státusz';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pages' => 'pages',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Nyilvános';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'admin/pages';

  /* Display: Banner (random) */
  $handler = $view->new_display('page', 'Banner (random)', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_location0' => 'field_location0',
    'status' => 'status',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location0' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Tartalom';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Cím';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Tartalom: Location */
  $handler->display->display_options['fields']['field_location0']['id'] = 'field_location0';
  $handler->display->display_options['fields']['field_location0']['table'] = 'field_data_field_location0';
  $handler->display->display_options['fields']['field_location0']['field'] = 'field_location0';
  $handler->display->display_options['fields']['field_location0']['label'] = 'Elhelyezkedés';
  $handler->display->display_options['fields']['field_location0']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Státusz';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location0_tid']['expose']['operator_id'] = 'field_location0_tid_op';
  $handler->display->display_options['filters']['field_location0_tid']['expose']['label'] = 'Helyszín';
  $handler->display->display_options['filters']['field_location0_tid']['expose']['operator'] = 'field_location0_tid_op';
  $handler->display->display_options['filters']['field_location0_tid']['expose']['identifier'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_location0_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '95',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Nyilvános';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['path'] = 'admin/banner/random';

  /* Display: Article */
  $handler = $view->new_display('page', 'Article', 'page_7');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 50, 100, 500';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'path' => 'path',
    'field_title2' => 'field_title2',
    'field_hiden_select' => 'field_hiden_select',
    'created' => 'created',
    'published_at' => 'published_at',
    'field_published' => 'field_published',
    'field_menu' => 'field_menu',
    'field_secondary_menu' => 'field_secondary_menu',
    'field_tags' => 'field_tags',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_hiden_select';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_title2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_hiden_select' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'published_at' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_published' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_menu' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_secondary_menu' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Tartalom';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Útvonal';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = 'Cím';
  $handler->display->display_options['fields']['field_title2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['text'] = '<a href=\'[path]\'>[field_title2]</a>';
  /* Field: Tartalom: Hiden select */
  $handler->display->display_options['fields']['field_hiden_select']['id'] = 'field_hiden_select';
  $handler->display->display_options['fields']['field_hiden_select']['table'] = 'field_data_field_hiden_select';
  $handler->display->display_options['fields']['field_hiden_select']['field'] = 'field_hiden_select';
  $handler->display->display_options['fields']['field_hiden_select']['label'] = 'Státusz';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Létrehozva';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d H:i';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['published_at']['date_format'] = 'custom';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = 'Y-m-d H:i';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Szerző';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Tartalom: Primary Heading 	 */
  $handler->display->display_options['fields']['field_menu']['id'] = 'field_menu';
  $handler->display->display_options['fields']['field_menu']['table'] = 'field_data_field_menu';
  $handler->display->display_options['fields']['field_menu']['field'] = 'field_menu';
  $handler->display->display_options['fields']['field_menu']['label'] = 'Elsődleges Rovat';
  $handler->display->display_options['fields']['field_menu']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Tartalom: Secondary Heading 	 */
  $handler->display->display_options['fields']['field_secondary_menu']['id'] = 'field_secondary_menu';
  $handler->display->display_options['fields']['field_secondary_menu']['table'] = 'field_data_field_secondary_menu';
  $handler->display->display_options['fields']['field_secondary_menu']['field'] = 'field_secondary_menu';
  $handler->display->display_options['fields']['field_secondary_menu']['label'] = 'Másodlagos rovat';
  $handler->display->display_options['fields']['field_secondary_menu']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'Kategória';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'a_article' => 'a_article',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Hiden select (field_hiden_select) */
  $handler->display->display_options['filters']['field_hiden_select_value']['id'] = 'field_hiden_select_value';
  $handler->display->display_options['filters']['field_hiden_select_value']['table'] = 'field_data_field_hiden_select';
  $handler->display->display_options['filters']['field_hiden_select_value']['field'] = 'field_hiden_select_value';
  $handler->display->display_options['filters']['field_hiden_select_value']['group'] = 1;
  $handler->display->display_options['filters']['field_hiden_select_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_hiden_select_value']['expose']['operator_id'] = 'field_hiden_select_value_op';
  $handler->display->display_options['filters']['field_hiden_select_value']['expose']['label'] = 'Státusz';
  $handler->display->display_options['filters']['field_hiden_select_value']['expose']['operator'] = 'field_hiden_select_value_op';
  $handler->display->display_options['filters']['field_hiden_select_value']['expose']['identifier'] = 'field_hiden_select_value';
  $handler->display->display_options['filters']['field_hiden_select_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Közzétéve';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'month';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:-10';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  $handler->display->display_options['filters']['date_filter']['date_method'] = 'AND';
  /* Filter criterion: Tartalom: Published (field_published) */
  $handler->display->display_options['filters']['field_published_tid']['id'] = 'field_published_tid';
  $handler->display->display_options['filters']['field_published_tid']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_tid']['field'] = 'field_published_tid';
  $handler->display->display_options['filters']['field_published_tid']['value'] = '';
  $handler->display->display_options['filters']['field_published_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_published_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_published_tid']['expose']['operator_id'] = 'field_published_tid_op';
  $handler->display->display_options['filters']['field_published_tid']['expose']['label'] = 'Szerző';
  $handler->display->display_options['filters']['field_published_tid']['expose']['operator'] = 'field_published_tid_op';
  $handler->display->display_options['filters']['field_published_tid']['expose']['identifier'] = 'field_published_tid';
  $handler->display->display_options['filters']['field_published_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_published_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_published_tid']['vocabulary'] = 'published';
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_menu_tid']['expose']['operator_id'] = 'field_menu_tid_op';
  $handler->display->display_options['filters']['field_menu_tid']['expose']['label'] = 'Elsődleges rovat';
  $handler->display->display_options['filters']['field_menu_tid']['expose']['operator'] = 'field_menu_tid_op';
  $handler->display->display_options['filters']['field_menu_tid']['expose']['identifier'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_menu_tid']['group_info']['label'] = 'Menu (field_menu)';
  $handler->display->display_options['filters']['field_menu_tid']['group_info']['identifier'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
  );
  $handler->display->display_options['filters']['field_menu_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  /* Filter criterion: Tartalom: Secondary Heading 	 (field_secondary_menu) */
  $handler->display->display_options['filters']['field_secondary_menu_tid']['id'] = 'field_secondary_menu_tid';
  $handler->display->display_options['filters']['field_secondary_menu_tid']['table'] = 'field_data_field_secondary_menu';
  $handler->display->display_options['filters']['field_secondary_menu_tid']['field'] = 'field_secondary_menu_tid';
  $handler->display->display_options['filters']['field_secondary_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_secondary_menu_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_secondary_menu_tid']['expose']['operator_id'] = 'field_secondary_menu_tid_op';
  $handler->display->display_options['filters']['field_secondary_menu_tid']['expose']['label'] = 'Másodlagos rovat';
  $handler->display->display_options['filters']['field_secondary_menu_tid']['expose']['operator'] = 'field_secondary_menu_tid_op';
  $handler->display->display_options['filters']['field_secondary_menu_tid']['expose']['identifier'] = 'field_secondary_menu_tid';
  $handler->display->display_options['filters']['field_secondary_menu_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_secondary_menu_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_secondary_menu_tid']['vocabulary'] = 'menu';
  /* Filter criterion: Tartalom: Category (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Kategória';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'admin/article';

  /* Display: Event */
  $handler = $view->new_display('page', 'Event', 'page_8');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_published_date' => 'field_published_date',
    'field_remove_date' => 'field_remove_date',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_published_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_remove_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Tartalom';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Cím';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Tartalom: Published date */
  $handler->display->display_options['fields']['field_published_date']['id'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['fields']['field_published_date']['field'] = 'field_published_date';
  $handler->display->display_options['fields']['field_published_date']['label'] = 'Publikálás dátuma';
  $handler->display->display_options['fields']['field_published_date']['settings'] = array(
    'format_type' => 'my',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Tartalom: Remove date */
  $handler->display->display_options['fields']['field_remove_date']['id'] = 'field_remove_date';
  $handler->display->display_options['fields']['field_remove_date']['table'] = 'field_data_field_remove_date';
  $handler->display->display_options['fields']['field_remove_date']['field'] = 'field_remove_date';
  $handler->display->display_options['fields']['field_remove_date']['label'] = 'Eltávolítás dátuma';
  $handler->display->display_options['fields']['field_remove_date']['settings'] = array(
    'format_type' => 'my',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Létrehozva';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d H:i';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['path'] = 'admin/events';

  /* Display: Banner1(fix) */
  $handler = $view->new_display('page', 'Banner1(fix)', 'page_9');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_location0' => 'field_location0',
    'status' => 'status',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location0' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Tartalom';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Cím';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Státusz';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_9';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '94',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Nyilvános';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '88',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  $handler->display->display_options['path'] = 'admin/banner/fix/1';

  /* Display: Banner2(fix) */
  $handler = $view->new_display('page', 'Banner2(fix)', 'page_10');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_location0' => 'field_location0',
    'status' => 'status',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location0' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Tartalom';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Cím';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Státusz';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_9';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '94',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Nyilvános';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '89',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  $handler->display->display_options['path'] = 'admin/banner/fix/2';

  /* Display: Banner3(fix) */
  $handler = $view->new_display('page', 'Banner3(fix)', 'page_11');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_location0' => 'field_location0',
    'status' => 'status',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location0' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Tartalom';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Cím';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Státusz';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_9';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '94',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Nyilvános';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '90',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  $handler->display->display_options['path'] = 'admin/banner/fix/3';

  /* Display: Banner4(fix) */
  $handler = $view->new_display('page', 'Banner4(fix)', 'page_12');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_location0' => 'field_location0',
    'status' => 'status',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location0' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Tartalom';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Cím';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Státusz';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_9';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '94',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Nyilvános';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '91',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  $handler->display->display_options['path'] = 'admin/banner/fix/4';

  /* Display: Banner5(fix) */
  $handler = $view->new_display('page', 'Banner5(fix)', 'page_13');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'field_location0' => 'field_location0',
    'status' => 'status',
    'nid' => 'nid',
    'nid_1' => 'nid_1',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location0' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Tartalom';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'log' => 0,
      ),
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Cím';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Státusz';
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_9';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '94',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Nyilvános';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '92',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  $handler->display->display_options['path'] = 'admin/banner/fix/5';

  /* Display: Impress (3) */
  $handler = $view->new_display('page', 'Impress (3)', 'page_14');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Név';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href=\'/node/[nid]/edit\'>edit</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['text'] = '<a href=\'/node/[nid_1]/delete\'>delete</a>';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'impress' => 'impress',
  );
  /* Filter criterion: Tartalom: Colleague status (field_colleague_status) */
  $handler->display->display_options['filters']['field_colleague_status_tid']['id'] = 'field_colleague_status_tid';
  $handler->display->display_options['filters']['field_colleague_status_tid']['table'] = 'field_data_field_colleague_status';
  $handler->display->display_options['filters']['field_colleague_status_tid']['field'] = 'field_colleague_status_tid';
  $handler->display->display_options['filters']['field_colleague_status_tid']['value'] = array(
    0 => '6238',
  );
  $handler->display->display_options['filters']['field_colleague_status_tid']['vocabulary'] = 'collegue_status';
  $handler->display->display_options['path'] = 'admin/impress/3';
  $translatables['admin'] = array(
    t('Master'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Elemek száma oldalanként'),
    t('- Mind -'),
    t('Eltolás'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('Tartalom'),
    t('- Choose an operation -'),
    t('Location (field_location0)'),
    t('Impress (1)'),
    t('more'),
    t('Név'),
    t('<a href=\'/node/[nid]/edit\'>edit</a>'),
    t('<a href=\'/node/[nid_1]/delete\'>delete</a>'),
    t('Partners (1)'),
    t('Cím'),
    t('Impress (2)'),
    t('Partners (2)'),
    t('Pages'),
    t('Státusz'),
    t('Nyilvános'),
    t('Banner (random)'),
    t('Elhelyezkedés'),
    t('Helyszín'),
    t('Article'),
    t('Útvonal'),
    t('<a href=\'[path]\'>[field_title2]</a>'),
    t('Létrehozva'),
    t('Közzétéve'),
    t('Szerző'),
    t('Elsődleges Rovat'),
    t('Másodlagos rovat'),
    t('Kategória'),
    t('Elsődleges rovat'),
    t('Menu (field_menu)'),
    t('Event'),
    t('Publikálás dátuma'),
    t('Eltávolítás dátuma'),
    t('Banner1(fix)'),
    t('Banner2(fix)'),
    t('Banner3(fix)'),
    t('Banner4(fix)'),
    t('Banner5(fix)'),
    t('Impress (3)'),
    t('- Művelet kiválasztása -'),
  );
  $export['admin'] = $view;

  $view = new view();
  $view->name = 'archive_1';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'archive';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '«';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>[created_1]</h1>';
  $handler->display->display_options['header']['area']['format'] = 'fullhtml';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'Y. F';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'long';
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
  /* Field: Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'Kategória';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'my';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['published_at']['date_format'] = 'my';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => 'content',
  );
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
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
  /* Contextual filter: Content: Created year + month */
  $handler->display->display_options['arguments']['created_year_month']['id'] = 'created_year_month';
  $handler->display->display_options['arguments']['created_year_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_year_month']['field'] = 'created_year_month';
  $handler->display->display_options['arguments']['created_year_month']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['created_year_month']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_year_month']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_year_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_year_month']['summary_options']['items_per_page'] = '25';
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
  $handler->display->display_options['argument_input'] = array(
    'created_year_month' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Created year + month',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';
  $translatables['archive_1'] = array(
    t('Master'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Elemek száma oldalanként'),
    t('- Mind -'),
    t('Eltolás'),
    t('«'),
    t('‹'),
    t('›'),
    t('»'),
    t('<h1>[created_1]</h1>'),
    t('<a href="[path]">[field_title2]</a>'),
    t('Publikálta'),
    t('Kategória'),
    t('Közzétéve'),
    t('Mind'),
    t('Content pane'),
    t('more'),
    t('Nézettáblák'),
  );
  $export['archive_1'] = $view;

  $view = new view();
  $view->name = 'article3';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'article3';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['group_by'] = TRUE;
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h4>Kapcsolódó írások</h4>';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'article3',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['field_title2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title2']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_title2']['settings'] = array(
    'trim_length' => '50',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Sort criterion: COUNT(Content: Nid) */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['group_type'] = 'count';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['similar_nid']['vocabularies'] = array(
    'tags' => 'tags',
    'category' => 0,
    'published' => 0,
    'yes_no' => 0,
    'banner_0' => 0,
    'fix_random' => 0,
    'menu' => 0,
  );
  $handler->display->display_options['arguments']['similar_nid']['include_args'] = 0;
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
  $handler->display->display_options['argument_input'] = array(
    'similar_nid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Similar By Terms: Nid',
    ),
  );

  /* Display: Content pane4 (alapjarat_theme_2019) */
  $handler = $view->new_display('panel_pane', 'Content pane4 (alapjarat_theme_2019)', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'article4',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['group_column'] = 'entity_id';
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
  $handler->display->display_options['fields']['field_title2']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['field_title2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title2']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_title2']['settings'] = array(
    'trim_length' => '50',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitled']['type'] = 'text_plain';
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
  $handler->display->display_options['argument_input'] = array(
    'similar_nid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Similar By Terms: Nid',
    ),
  );
  $translatables['article3'] = array(
    t('Master'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('<h4>Kapcsolódó írások</h4>'),
    t('<a href="[path]">[field_title2]</a>'),
    t('Mind'),
    t('Content pane'),
    t('Nézettáblák'),
    t('Content pane4 (alapjarat_theme_2019)'),
  );
  $export['article3'] = $view;

  $view = new view();
  $view->name = 'banner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'banner';
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Sérült / hiányzó kezelő */
  $handler->display->display_options['fields']['field_textb']['id'] = 'field_textb';
  $handler->display->display_options['fields']['field_textb']['table'] = 'field_data_field_textb';
  $handler->display->display_options['fields']['field_textb']['field'] = 'field_textb';
  $handler->display->display_options['fields']['field_textb']['label'] = '';
  $handler->display->display_options['fields']['field_textb']['element_label_colon'] = FALSE;
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
    'banner0' => 'banner0',
  );
  /* Filter criterion: Sérült / hiányzó kezelő */
  $handler->display->display_options['filters']['field_location_tid']['id'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_tid']['field'] = 'field_location_tid';
  $handler->display->display_options['filters']['field_location_tid']['operator'] = 'or';
  $handler->display->display_options['filters']['field_location_tid']['value'] = array(
    0 => '21',
  );

  /* Display: banner1 (random) */
  $handler = $view->new_display('panel_pane', 'banner1 (random)', 'panel_pane_5');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '88',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '95',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: banner1 (fix) */
  $handler = $view->new_display('panel_pane', 'banner1 (fix)', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_9';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '88',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '94',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: banner2 (random) */
  $handler = $view->new_display('panel_pane', 'banner2 (random)', 'panel_pane_6');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '89',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '95',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: banner2 (fix) */
  $handler = $view->new_display('panel_pane', 'banner2 (fix)', 'panel_pane_7');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_10';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '89',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '94',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: banner3 (random) */
  $handler = $view->new_display('panel_pane', 'banner3 (random)', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '90',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '95',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: banner3 (fix) */
  $handler = $view->new_display('panel_pane', 'banner3 (fix)', 'panel_pane_8');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_11';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '90',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '94',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: banner4 (random) */
  $handler = $view->new_display('panel_pane', 'banner4 (random)', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '91',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '95',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: banner4 (fix) */
  $handler = $view->new_display('panel_pane', 'banner4 (fix)', 'panel_pane_9');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_12';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '91',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '94',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: banner5 (random) */
  $handler = $view->new_display('panel_pane', 'banner5 (random)', 'panel_pane_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '92',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '95',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: banner5 (fix) */
  $handler = $view->new_display('panel_pane', 'banner5 (fix)', 'panel_pane_10');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Title */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_13';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '92',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  /* Filter criterion: Tartalom: Fix or Random? (field_fix_or_random_) */
  $handler->display->display_options['filters']['field_fix_or_random__tid']['id'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['table'] = 'field_data_field_fix_or_random_';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['field'] = 'field_fix_or_random__tid';
  $handler->display->display_options['filters']['field_fix_or_random__tid']['value'] = array(
    0 => '94',
  );
  $handler->display->display_options['filters']['field_fix_or_random__tid']['vocabulary'] = 'fix_random';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: Banner article header */
  $handler = $view->new_display('panel_pane', 'Banner article header', 'panel_pane_11');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
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
    'banner0' => 'banner0',
  );
  /* Filter criterion: Tartalom: Location (field_location0) */
  $handler->display->display_options['filters']['field_location0_tid']['id'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['table'] = 'field_data_field_location0';
  $handler->display->display_options['filters']['field_location0_tid']['field'] = 'field_location0_tid';
  $handler->display->display_options['filters']['field_location0_tid']['value'] = array(
    0 => '5572',
  );
  $handler->display->display_options['filters']['field_location0_tid']['vocabulary'] = 'banner_0';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
  $translatables['banner'] = array(
    t('Master'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('banner1 (random)'),
    t('more'),
    t('Nézettáblák'),
    t('banner1 (fix)'),
    t('banner2 (random)'),
    t('banner2 (fix)'),
    t('banner3 (random)'),
    t('banner3 (fix)'),
    t('banner4 (random)'),
    t('banner4 (fix)'),
    t('banner5 (random)'),
    t('banner5 (fix)'),
    t('Banner article header'),
  );
  $export['banner'] = $view;

  $view = new view();
  $view->name = 'category_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'category list';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Kategóriák
';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'category' => 'category',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
  $translatables['category_list'] = array(
    t('Master'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Kategóriák
'),
    t('Content pane'),
    t('more'),
    t('Nézettáblák'),
  );
  $export['category_list'] = $view;

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
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmaz';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Nyilvános';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'Kategória';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Közzétételi dátum';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-d-m';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['timezone'] = 'Europe/Budapest';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['published_at']['date_format'] = 'my';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Main image */
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
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
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
  /* Contextual filter: Tartalom: Category (field_tags) */
  $handler->display->display_options['arguments']['field_tags_tid_1']['id'] = 'field_tags_tid_1';
  $handler->display->display_options['arguments']['field_tags_tid_1']['table'] = 'field_data_field_tags';
  $handler->display->display_options['arguments']['field_tags_tid_1']['field'] = 'field_tags_tid';
  $handler->display->display_options['arguments']['field_tags_tid_1']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['field_tags_tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tags_tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tags_tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tags_tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_tags_tid_1']['break_phrase'] = TRUE;
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Nyilvános';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'Kategória';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ' ';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Közzétételi dátum';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-d-m';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['timezone'] = 'Europe/Budapest';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['published_at']['date_format'] = 'my';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Main image */
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
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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
  /* Field: Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Tartalom: Category */
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
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'my';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['published_at']['date_format'] = 'my';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => 'content',
  );
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Tartalom: Published (field_published) */
  $handler->display->display_options['arguments']['field_published_tid']['id'] = 'field_published_tid';
  $handler->display->display_options['arguments']['field_published_tid']['table'] = 'field_data_field_published';
  $handler->display->display_options['arguments']['field_published_tid']['field'] = 'field_published_tid';
  $handler->display->display_options['arguments']['field_published_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_published_tid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['field_published_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_published_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_published_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_published_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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
  /* Field: Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Tartalom: Category */
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
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'my';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['published_at']['date_format'] = 'my';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => 'content',
  );
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Tartalom: Tags (field_tagsa) */
  $handler->display->display_options['arguments']['field_tagsa_tid']['id'] = 'field_tagsa_tid';
  $handler->display->display_options['arguments']['field_tagsa_tid']['table'] = 'field_data_field_tagsa';
  $handler->display->display_options['arguments']['field_tagsa_tid']['field'] = 'field_tagsa_tid';
  $handler->display->display_options['arguments']['field_tagsa_tid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['field_tagsa_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tagsa_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tagsa_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tagsa_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Tartalom: Category */
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
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'my';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['published_at']['date_format'] = 'my';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => 'content',
  );
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['arguments']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['arguments']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['arguments']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['arguments']['field_menu_tid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['field_menu_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_menu_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_menu_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_menu_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_menu_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Tartalom: Secondary Heading 	 (field_secondary_menu) */
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['id'] = 'field_secondary_menu_tid';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['table'] = 'field_data_field_secondary_menu';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['field'] = 'field_secondary_menu_tid';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Elemek száma oldalanként'),
    t('- Mind -'),
    t('Eltolás'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('Nyilvános'),
    t('Kategória'),
    t('Közzétételi dátum'),
    t('Közzétéve'),
    t('Mind'),
    t('Content pane'),
    t('more'),
    t('<a href="[path]">[field_title2]</a>'),
    t('Nézettáblák'),
    t('published pane'),
    t('Publikálta'),
    t('tags pane'),
    t('Menu pane'),
  );
  $export['category_page'] = $view;

  $view = new view();
  $view->name = 'change_author_bulk';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'change author bulk';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'change author bulk';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d H:i:s';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '100';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'a_article::field_published' => 'a_article::field_published',
        ),
      ),
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Tartalom: Published (field_published) */
  $handler->display->display_options['filters']['field_published_tid']['id'] = 'field_published_tid';
  $handler->display->display_options['filters']['field_published_tid']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_tid']['field'] = 'field_published_tid';
  $handler->display->display_options['filters']['field_published_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_published_tid']['expose']['operator_id'] = 'field_published_tid_op';
  $handler->display->display_options['filters']['field_published_tid']['expose']['label'] = 'Szerző';
  $handler->display->display_options['filters']['field_published_tid']['expose']['operator'] = 'field_published_tid_op';
  $handler->display->display_options['filters']['field_published_tid']['expose']['identifier'] = 'field_published_tid';
  $handler->display->display_options['filters']['field_published_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_published_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_published_tid']['vocabulary'] = 'published';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'change-author-bulk';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Szerző átírása';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-admin-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['change_author_bulk'] = array(
    t('Master'),
    t('change author bulk'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Elemek száma oldalanként'),
    t('- Mind -'),
    t('Eltolás'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('- Choose an operation -'),
    t('Szerző'),
    t('Page'),
    t('more'),
    t('- Művelet kiválasztása -'),
  );
  $export['change_author_bulk'] = $view;

  $view = new view();
  $view->name = 'event';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'event';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span class="pane-title">Események</span>';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  /* Field: Tartalom: Stressed event? 	 */
  $handler->display->display_options['fields']['field_stressed_event']['id'] = 'field_stressed_event';
  $handler->display->display_options['fields']['field_stressed_event']['table'] = 'field_data_field_stressed_event';
  $handler->display->display_options['fields']['field_stressed_event']['field'] = 'field_stressed_event';
  $handler->display->display_options['fields']['field_stressed_event']['label'] = '';
  $handler->display->display_options['fields']['field_stressed_event']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stressed_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stressed_event']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<p class="[field_stressed_event]">[title]</p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Tartalom: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y. F d.',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_date']['separator'] = ' - ';
  /* Field: Tartalom: Event */
  $handler->display->display_options['fields']['field_facebook_event']['id'] = 'field_facebook_event';
  $handler->display->display_options['fields']['field_facebook_event']['table'] = 'field_data_field_facebook_event';
  $handler->display->display_options['fields']['field_facebook_event']['field'] = 'field_facebook_event';
  $handler->display->display_options['fields']['field_facebook_event']['label'] = '';
  $handler->display->display_options['fields']['field_facebook_event']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_event']['alter']['text'] = '<a href="[field_facebook_event-value]" target="_blank">Esemény >></a>';
  $handler->display->display_options['fields']['field_facebook_event']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_facebook_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook_event']['settings'] = array(
    'trim_length' => '14',
    'nofollow' => 1,
  );
  /* Sort criterion: Tartalom: Event date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
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
    'event' => 'event',
  );
  /* Filter criterion: Tartalom: Published date (field_published_date) */
  $handler->display->display_options['filters']['field_published_date_value']['id'] = 'field_published_date_value';
  $handler->display->display_options['filters']['field_published_date_value']['table'] = 'field_data_field_published_date';
  $handler->display->display_options['filters']['field_published_date_value']['field'] = 'field_published_date_value';
  $handler->display->display_options['filters']['field_published_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_published_date_value']['default_date'] = 'now';
  /* Filter criterion: Tartalom: Remove date (field_remove_date) */
  $handler->display->display_options['filters']['field_remove_date_value']['id'] = 'field_remove_date_value';
  $handler->display->display_options['filters']['field_remove_date_value']['table'] = 'field_data_field_remove_date';
  $handler->display->display_options['filters']['field_remove_date_value']['field'] = 'field_remove_date_value';
  $handler->display->display_options['filters']['field_remove_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_remove_date_value']['default_date'] = 'now';
  /* Filter criterion: Tartalom: Event date (field_event_date:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';

  /* Display: Event */
  $handler = $view->new_display('panel_pane', 'Event', 'panel_pane_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Események</h3>';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: Event (alapjarat_theme_2019) */
  $handler = $view->new_display('panel_pane', 'Event (alapjarat_theme_2019)', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Stressed event? 	 */
  $handler->display->display_options['fields']['field_stressed_event']['id'] = 'field_stressed_event';
  $handler->display->display_options['fields']['field_stressed_event']['table'] = 'field_data_field_stressed_event';
  $handler->display->display_options['fields']['field_stressed_event']['field'] = 'field_stressed_event';
  $handler->display->display_options['fields']['field_stressed_event']['label'] = '';
  $handler->display->display_options['fields']['field_stressed_event']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_stressed_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stressed_event']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Tartalom: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y. F d.',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_date']['separator'] = ' - ';
  /* Field: Tartalom: Event */
  $handler->display->display_options['fields']['field_facebook_event']['id'] = 'field_facebook_event';
  $handler->display->display_options['fields']['field_facebook_event']['table'] = 'field_data_field_facebook_event';
  $handler->display->display_options['fields']['field_facebook_event']['field'] = 'field_facebook_event';
  $handler->display->display_options['fields']['field_facebook_event']['label'] = '';
  $handler->display->display_options['fields']['field_facebook_event']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook_event']['alter']['text'] = '<ul class="[field_stressed_event]">
<li class="time">[field_event_date]</li>
<li><a href="[field_facebook_event-value]">[title]</a></li>
</ul>';
  $handler->display->display_options['fields']['field_facebook_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_facebook_event']['settings'] = array(
    'trim_length' => '',
    'nofollow' => 0,
  );
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
  $translatables['event'] = array(
    t('Master'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Elemek száma oldalanként'),
    t('- Mind -'),
    t('Eltolás'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('<span class="pane-title">Események</span>'),
    t('<p class="[field_stressed_event]">[title]</p>'),
    t('<a href="[field_facebook_event-value]" target="_blank">Esemény >></a>'),
    t('Event'),
    t('<h3>Események</h3>'),
    t('Nézettáblák'),
    t('Event (alapjarat_theme_2019)'),
    t('<ul class="[field_stressed_event]">
<li class="time">[field_event_date]</li>
<li><a href="[field_facebook_event-value]">[title]</a></li>
</ul>'),
  );
  $export['event'] = $view;

  $view = new view();
  $view->name = 'first';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'first';
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
    'image_style' => 'big',
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
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/hasznos-infok">Hasznos infók</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'fullhtml';
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
    'image_style' => 'big',
    'image_link' => 'content',
  );
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
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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

  /* Display: helpful_info_B */
  $handler = $view->new_display('panel_pane', 'helpful_info_B', 'panel_pane_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['header'] = FALSE;
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
  $handler->display->display_options['fields']['path']['alter']['max_length'] = '75';
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
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: actual_A */
  $handler = $view->new_display('panel_pane', 'actual_A', 'panel_pane_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/aktualis">Aktuális</a></h3>';
  $handler->display->display_options['header']['area']['format'] = 'fullhtml';
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
    'image_style' => 'big',
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'world_small',
    'image_link' => 'content',
  );
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

  /* Display: tech */
  $handler = $view->new_display('panel_pane', 'tech', 'panel_pane_7');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/tech">Tech</a></h3>';
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
    'image_style' => 'big',
    'image_link' => 'content',
  );
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
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/autoteszt">Autóteszt</a></h3>';
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
    'image_style' => 'big',
    'image_link' => 'content',
  );
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
  $handler->display->display_options['header']['area']['content'] = '<h3>Ajánlott cikkek</h3>';
  $handler->display->display_options['header']['area']['format'] = 'fullhtml';
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
    'image_style' => 'right',
    'image_link' => 'content',
  );
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
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y. F d.';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'front_page';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
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

  /* Display: tuning */
  $handler = $view->new_display('panel_pane', 'tuning', 'panel_pane_11');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/tuning">Tuning</a></h3>';
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
    'image_style' => 'big',
    'image_link' => 'content',
  );
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

  /* Display: rajtracs */
  $handler = $view->new_display('panel_pane', 'rajtracs', 'panel_pane_12');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/rajtracs">Rajtrács</a></h3>';
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
    'image_style' => 'big',
    'image_link' => 'content',
  );
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
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/el-mondo">El Mondó</a></h3>';
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
    'image_style' => 'big',
    'image_link' => 'content',
  );
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

  /* Display: csapatas */
  $handler = $view->new_display('panel_pane', 'csapatas', 'panel_pane_14');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/kozos-csapatas">Közös csapatás</a></h3>';
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
    'image_style' => 'big',
    'image_link' => 'content',
  );
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
    0 => '109',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: media */
  $handler = $view->new_display('panel_pane', 'media', 'panel_pane_15');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3><a href="/media">Média</a></h3>';
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
    'image_style' => 'big',
    'image_link' => 'content',
  );
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
    0 => '5173',
  );
  $handler->display->display_options['filters']['field_menu_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: First 5 Article (alapjarat_theme_2019) */
  $handler = $view->new_display('panel_pane', 'First 5 Article (alapjarat_theme_2019)', 'panel_pane_16');
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
  $translatables['first'] = array(
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
    t('<h3><a href="/hasznos-infok">Hasznos infók</a></h3>'),
    t('Primary Menu (field_menu)'),
    t('helpful_info_B'),
    t('actual_A'),
    t('<h3><a href="/aktualis">Aktuális</a></h3>'),
    t('actual_B'),
    t('tech'),
    t('<h3><a href="/tech">Tech</a></h3>'),
    t('test'),
    t('<h3><a href="/autoteszt">Autóteszt</a></h3>'),
    t('right'),
    t('<h3>Ajánlott cikkek</h3>'),
    t('One'),
    t('Four'),
    t('tuning'),
    t('<h3><a href="/tuning">Tuning</a></h3>'),
    t('rajtracs'),
    t('<h3><a href="/rajtracs">Rajtrács</a></h3>'),
    t('el_mondo'),
    t('<h3><a href="/el-mondo">El Mondó</a></h3>'),
    t('csapatas'),
    t('<h3><a href="/kozos-csapatas">Közös csapatás</a></h3>'),
    t('media'),
    t('<h3><a href="/media">Média</a></h3>'),
    t('First 5 Article (alapjarat_theme_2019)'),
    t('Legfrissebb Híreink'),
  );
  $export['first'] = $view;

  $view = new view();
  $view->name = 'glossary_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Glossary list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Autós kifejezések';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Autós kifejezések';
  $handler->display->display_options['header']['area']['format'] = 'fullhtml';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'glossary' => 'glossary',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'autos-kifejezesek';
  $translatables['glossary_list'] = array(
    t('Master'),
    t('Autós kifejezések'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Elemek száma oldalanként'),
    t('- Mind -'),
    t('Eltolás'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('Page'),
    t('more'),
  );
  $export['glossary_list'] = $view;

  $view = new view();
  $view->name = 'helpful_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'helpful_info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Helpful info';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Category (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'category';

  /* Display: helpful_info */
  $handler = $view->new_display('page', 'helpful_info', 'page');
  $handler->display->display_options['path'] = 'helpful-info';

  /* Display: test */
  $handler = $view->new_display('page', 'test', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Teszt';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Category (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '2',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'test';

  /* Display: tech */
  $handler = $view->new_display('page', 'tech', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tech';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Category (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '3',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'tech';

  /* Display: big_world */
  $handler = $view->new_display('page', 'big_world', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Big World';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Category (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '4',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'big-world';

  /* Display: race */
  $handler = $view->new_display('page', 'race', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Race';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Category (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '9',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'race';

  /* Display: media */
  $handler = $view->new_display('page', 'media', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Média';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Category (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '10',
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'media';

  /* Display: communal */
  $handler = $view->new_display('page', 'communal', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Communal';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Category (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '11',
  );
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'communal';

  /* Display: premium */
  $handler = $view->new_display('page', 'premium', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Premium';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Tartalom: Category (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_tags_tid']['value'] = array(
    0 => '12',
  );
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags (field_tags)';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'category';
  $handler->display->display_options['path'] = 'premium';
  $translatables['helpful_info'] = array(
    t('Master'),
    t('Helpful info'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Elemek száma oldalanként'),
    t('- Mind -'),
    t('Eltolás'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('Tags (field_tags)'),
    t('helpful_info'),
    t('more'),
    t('test'),
    t('Teszt'),
    t('tech'),
    t('Tech'),
    t('big_world'),
    t('Big World'),
    t('race'),
    t('Race'),
    t('media'),
    t('Média'),
    t('communal'),
    t('Communal'),
    t('premium'),
    t('Premium'),
  );
  $export['helpful_info'] = $view;

  $view = new view();
  $view->name = 'media';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'media';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Kategória';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['value']['value'] = '30';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'media';
  $translatables['media'] = array(
    t('Master'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Elemek száma oldalanként'),
    t('- Mind -'),
    t('Eltolás'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('Kategória'),
    t('Page'),
    t('more'),
  );
  $export['media'] = $view;

  $view = new view();
  $view->name = 'media0';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Media';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Gallery */
  $handler->display->display_options['fields']['field_gallery']['id'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['fields']['field_gallery']['field'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery']['type'] = 'juicebox_formatter';
  $handler->display->display_options['fields']['field_gallery']['settings'] = array(
    'image_style' => 'juicebox_square_thumbnail',
    'thumb_style' => 'juicebox_square_thumbnail',
    'caption_source' => '',
    'title_source' => '',
    'jlib_galleryWidth' => '100%',
    'jlib_galleryHeight' => '100%',
    'jlib_backgroundColor' => '#222222',
    'jlib_textColor' => 'rgba(255,255,255,1)',
    'jlib_thumbFrameColor' => 'rgba(255,255,255,.5)',
    'jlib_showOpenButton' => 1,
    'jlib_showExpandButton' => 1,
    'jlib_useFullscreenExpand' => 0,
    'jlib_showThumbsButton' => 1,
    'jlib_useThumbDots' => 0,
    'manual_config' => '',
    'incompatible_file_action' => 'show_icon_and_link',
    'linkurl_source' => '',
    'linkurl_target' => '_blank',
    'custom_parent_classes' => '',
  );
  $handler->display->display_options['fields']['field_gallery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery']['separator'] = ' ';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Tartalom: Gallery (field_gallery:alt) */
  $handler->display->display_options['filters']['field_gallery_alt']['id'] = 'field_gallery_alt';
  $handler->display->display_options['filters']['field_gallery_alt']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['filters']['field_gallery_alt']['field'] = 'field_gallery_alt';
  $handler->display->display_options['filters']['field_gallery_alt']['operator'] = 'not empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
  $translatables['media0'] = array(
    t('Master'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Elemek száma oldalanként'),
    t('- Mind -'),
    t('Eltolás'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('Content pane'),
    t('more'),
    t('Nézettáblák'),
  );
  $export['media0'] = $view;

  $view = new view();
  $view->name = 'menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Impress';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'The editorial of Alapjárat';
  $handler->display->display_options['header']['area']['format'] = 'fullhtml';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: Tartalom: E-mail */
  $handler->display->display_options['fields']['field_e_mail']['id'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['table'] = 'field_data_field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['field'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['label'] = '';
  $handler->display->display_options['fields']['field_e_mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_e_mail']['alter']['text'] = '<a href="mailto:[field_e_mail-email]"><img src="https://alapjarat.hu/sites/default/files/email.png" alt="[field_e_mail-email]"></a>';
  $handler->display->display_options['fields']['field_e_mail']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['field_e_mail']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Tartalom: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Field: Field: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'impresszum',
    'image_link' => '',
  );
  /* Field: Tartalom: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_5';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'impress' => 'impress',
  );

  /* Display: Impress (Aktív) */
  $handler = $view->new_display('panel_pane', 'Impress (Aktív)', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Impresszum</h1> <h2>Az Alapjárat szerkesztősége</h2>';
  $handler->display->display_options['header']['area']['format'] = 'fullhtml';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Link */
  $handler->display->display_options['fields']['field_name_link']['id'] = 'field_name_link';
  $handler->display->display_options['fields']['field_name_link']['table'] = 'field_data_field_name_link';
  $handler->display->display_options['fields']['field_name_link']['field'] = 'field_name_link';
  $handler->display->display_options['fields']['field_name_link']['label'] = '';
  $handler->display->display_options['fields']['field_name_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_link']['element_label_colon'] = FALSE;
  /* Field: Tartalom: E-mail */
  $handler->display->display_options['fields']['field_e_mail']['id'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['table'] = 'field_data_field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['field'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['label'] = '';
  $handler->display->display_options['fields']['field_e_mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_e_mail']['alter']['text'] = '<a href="mailto:[field_e_mail-email]"><img src="https://alapjarat.hu/sites/default/files/email.png" alt="[field_e_mail-email]"></a>';
  $handler->display->display_options['fields']['field_e_mail']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['field_e_mail']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_e_mail']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_name_link]">[title]</a>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Tartalom: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = '';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Field: Field: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'impresszum',
    'image_link' => '',
  );
  /* Field: Tartalom: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'impress' => 'impress',
  );
  /* Filter criterion: Tartalom: Colleague status (field_colleague_status) */
  $handler->display->display_options['filters']['field_colleague_status_tid']['id'] = 'field_colleague_status_tid';
  $handler->display->display_options['filters']['field_colleague_status_tid']['table'] = 'field_data_field_colleague_status';
  $handler->display->display_options['filters']['field_colleague_status_tid']['field'] = 'field_colleague_status_tid';
  $handler->display->display_options['filters']['field_colleague_status_tid']['value'] = array(
    0 => '6236',
  );
  $handler->display->display_options['filters']['field_colleague_status_tid']['expose']['operator_id'] = 'field_colleague_status_tid_op';
  $handler->display->display_options['filters']['field_colleague_status_tid']['expose']['label'] = 'Colleague status (field_colleague_status)';
  $handler->display->display_options['filters']['field_colleague_status_tid']['expose']['operator'] = 'field_colleague_status_tid_op';
  $handler->display->display_options['filters']['field_colleague_status_tid']['expose']['identifier'] = 'field_colleague_status_tid';
  $handler->display->display_options['filters']['field_colleague_status_tid']['vocabulary'] = 'collegue_status';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: Impress (Külsős) */
  $handler = $view->new_display('panel_pane', 'Impress (Külsős)', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Külsős munkatársaink</h3>';
  $handler->display->display_options['header']['area']['format'] = 'fullhtml';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Link */
  $handler->display->display_options['fields']['field_name_link']['id'] = 'field_name_link';
  $handler->display->display_options['fields']['field_name_link']['table'] = 'field_data_field_name_link';
  $handler->display->display_options['fields']['field_name_link']['field'] = 'field_name_link';
  $handler->display->display_options['fields']['field_name_link']['label'] = '';
  $handler->display->display_options['fields']['field_name_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_link']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_name_link]">[title]</a>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'impress' => 'impress',
  );
  /* Filter criterion: Tartalom: Colleague status (field_colleague_status) */
  $handler->display->display_options['filters']['field_colleague_status_tid']['id'] = 'field_colleague_status_tid';
  $handler->display->display_options['filters']['field_colleague_status_tid']['table'] = 'field_data_field_colleague_status';
  $handler->display->display_options['filters']['field_colleague_status_tid']['field'] = 'field_colleague_status_tid';
  $handler->display->display_options['filters']['field_colleague_status_tid']['value'] = array(
    0 => '6237',
  );
  $handler->display->display_options['filters']['field_colleague_status_tid']['vocabulary'] = 'collegue_status';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: Partners (premium) */
  $handler = $view->new_display('panel_pane', 'Partners (premium)', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_picturep' => 'field_picturep',
    'field_descriptionp' => 'field_descriptionp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_picturep' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_descriptionp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Partnereink</h1> <h3>Prémium autós partnerek</h3> ';
  $handler->display->display_options['header']['area']['format'] = 'fullhtml';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Picture */
  $handler->display->display_options['fields']['field_picturep']['id'] = 'field_picturep';
  $handler->display->display_options['fields']['field_picturep']['table'] = 'field_data_field_picturep';
  $handler->display->display_options['fields']['field_picturep']['field'] = 'field_picturep';
  $handler->display->display_options['fields']['field_picturep']['label'] = '';
  $handler->display->display_options['fields']['field_picturep']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picturep']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picturep']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Tartalom: Description */
  $handler->display->display_options['fields']['field_descriptionp']['id'] = 'field_descriptionp';
  $handler->display->display_options['fields']['field_descriptionp']['table'] = 'field_data_field_descriptionp';
  $handler->display->display_options['fields']['field_descriptionp']['field'] = 'field_descriptionp';
  $handler->display->display_options['fields']['field_descriptionp']['label'] = '';
  $handler->display->display_options['fields']['field_descriptionp']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_3';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'partners' => 'partners',
  );
  /* Filter criterion: Tartalom: Premium car partner? (field_premium_car_partner_1) */
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['id'] = 'field_premium_car_partner_1_tid';
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['table'] = 'field_data_field_premium_car_partner_1';
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['field'] = 'field_premium_car_partner_1_tid';
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['value'] = array(
    0 => '52',
  );
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['vocabulary'] = 'yes_no';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: Partners (recreation) */
  $handler = $view->new_display('panel_pane', 'Partners (recreation)', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_picturep' => 'field_picturep',
    'field_descriptionp' => 'field_descriptionp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_picturep' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_descriptionp' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Prémium szabadidős partnerek</h3>';
  $handler->display->display_options['header']['area']['format'] = 'fullhtml';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Picture */
  $handler->display->display_options['fields']['field_picturep']['id'] = 'field_picturep';
  $handler->display->display_options['fields']['field_picturep']['table'] = 'field_data_field_picturep';
  $handler->display->display_options['fields']['field_picturep']['field'] = 'field_picturep';
  $handler->display->display_options['fields']['field_picturep']['label'] = '';
  $handler->display->display_options['fields']['field_picturep']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picturep']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picturep']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Tartalom: Description */
  $handler->display->display_options['fields']['field_descriptionp']['id'] = 'field_descriptionp';
  $handler->display->display_options['fields']['field_descriptionp']['table'] = 'field_data_field_descriptionp';
  $handler->display->display_options['fields']['field_descriptionp']['field'] = 'field_descriptionp';
  $handler->display->display_options['fields']['field_descriptionp']['label'] = '';
  $handler->display->display_options['fields']['field_descriptionp']['element_label_colon'] = FALSE;
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
    'partners' => 'partners',
  );
  /* Filter criterion: Tartalom: Premium car partner? (field_premium_car_partner_1) */
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['id'] = 'field_premium_car_partner_1_tid';
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['table'] = 'field_data_field_premium_car_partner_1';
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['field'] = 'field_premium_car_partner_1_tid';
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['value'] = array(
    0 => '53',
  );
  $handler->display->display_options['filters']['field_premium_car_partner_1_tid']['vocabulary'] = 'yes_no';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: Impress (Volt) */
  $handler = $view->new_display('panel_pane', 'Impress (Volt)', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Korábbi munkatársaink</h3>';
  $handler->display->display_options['header']['area']['format'] = 'fullhtml';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Link */
  $handler->display->display_options['fields']['field_name_link']['id'] = 'field_name_link';
  $handler->display->display_options['fields']['field_name_link']['table'] = 'field_data_field_name_link';
  $handler->display->display_options['fields']['field_name_link']['field'] = 'field_name_link';
  $handler->display->display_options['fields']['field_name_link']['label'] = '';
  $handler->display->display_options['fields']['field_name_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_name_link']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_name_link]">[title]</a>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'impress' => 'impress',
  );
  /* Filter criterion: Tartalom: Colleague status (field_colleague_status) */
  $handler->display->display_options['filters']['field_colleague_status_tid']['id'] = 'field_colleague_status_tid';
  $handler->display->display_options['filters']['field_colleague_status_tid']['table'] = 'field_data_field_colleague_status';
  $handler->display->display_options['filters']['field_colleague_status_tid']['field'] = 'field_colleague_status_tid';
  $handler->display->display_options['filters']['field_colleague_status_tid']['value'] = array(
    0 => '6238',
  );
  $handler->display->display_options['filters']['field_colleague_status_tid']['vocabulary'] = 'collegue_status';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: Partners in footer */
  $handler = $view->new_display('panel_pane', 'Partners in footer', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<span class="pane-title">Autós partnereink</span>';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Tartalom: Picture */
  $handler->display->display_options['fields']['field_picturep']['id'] = 'field_picturep';
  $handler->display->display_options['fields']['field_picturep']['table'] = 'field_data_field_picturep';
  $handler->display->display_options['fields']['field_picturep']['field'] = 'field_picturep';
  $handler->display->display_options['fields']['field_picturep']['label'] = '';
  $handler->display->display_options['fields']['field_picturep']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_picturep']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picturep']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picturep']['settings'] = array(
    'image_style' => 'partners_in_footer',
    'image_link' => '',
  );
  /* Field: Tartalom: Link */
  $handler->display->display_options['fields']['field_name_link']['id'] = 'field_name_link';
  $handler->display->display_options['fields']['field_name_link']['table'] = 'field_data_field_name_link';
  $handler->display->display_options['fields']['field_name_link']['field'] = 'field_name_link';
  $handler->display->display_options['fields']['field_name_link']['label'] = '';
  $handler->display->display_options['fields']['field_name_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_name_link']['alter']['text'] = '<a href=\'[field_name_link]\'>[field_picturep]</a>';
  $handler->display->display_options['fields']['field_name_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_3';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'partners' => 'partners',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Tartalom: Link (field_name_link) */
  $handler->display->display_options['filters']['field_name_link_value']['id'] = 'field_name_link_value';
  $handler->display->display_options['filters']['field_name_link_value']['table'] = 'field_data_field_name_link';
  $handler->display->display_options['filters']['field_name_link_value']['field'] = 'field_name_link_value';
  $handler->display->display_options['filters']['field_name_link_value']['operator'] = 'not empty';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';

  /* Display: Social Media Menu */
  $handler = $view->new_display('panel_pane', 'Social Media Menu', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'admin_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'social_media',
    'image_link' => '',
  );
  /* Field: Tartalom: Link */
  $handler->display->display_options['fields']['field_name_link']['id'] = 'field_name_link';
  $handler->display->display_options['fields']['field_name_link']['table'] = 'field_data_field_name_link';
  $handler->display->display_options['fields']['field_name_link']['field'] = 'field_name_link';
  $handler->display->display_options['fields']['field_name_link']['label'] = '';
  $handler->display->display_options['fields']['field_name_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_name_link']['alter']['text'] = '<a href=\'[field_name_link]\'>[field_picture]</a>';
  $handler->display->display_options['fields']['field_name_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'admin:page_3';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'social_media_menu' => 'social_media_menu',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
  $translatables['menu'] = array(
    t('Master'),
    t('Impress'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Elemek száma oldalanként'),
    t('- Mind -'),
    t('Eltolás'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('The editorial of Alapjárat'),
    t('<a href="mailto:[field_e_mail-email]"><img src="https://alapjarat.hu/sites/default/files/email.png" alt="[field_e_mail-email]"></a>'),
    t('Impress (Aktív)'),
    t('<h1>Impresszum</h1> <h2>Az Alapjárat szerkesztősége</h2>'),
    t('<a href="[field_name_link]">[title]</a>'),
    t('Colleague status (field_colleague_status)'),
    t('Nézettáblák'),
    t('Impress (Külsős)'),
    t('<h3>Külsős munkatársaink</h3>'),
    t('Partners (premium)'),
    t('<h1>Partnereink</h1> <h3>Prémium autós partnerek</h3> '),
    t('Partners (recreation)'),
    t('<h3>Prémium szabadidős partnerek</h3>'),
    t('Impress (Volt)'),
    t('<h3>Korábbi munkatársaink</h3>'),
    t('Partners in footer'),
    t('<span class="pane-title">Autós partnereink</span>'),
    t('<a href=\'[field_name_link]\'>[field_picturep]</a>'),
    t('Social Media Menu'),
    t('<a href=\'[field_name_link]\'>[field_picture]</a>'),
  );
  $export['menu'] = $view;

  $view = new view();
  $view->name = 'rss';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Rss';
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
  $handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmaz';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Nyilvános';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'Kategória';
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['separator'] = ',';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Közzétételi dátum';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y-m-d H:i:s';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['timezone'] = 'Europe/Budapest';
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'enclosure';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
  );
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitled']['type'] = 'text_plain';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title2']['type'] = 'text_plain';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Contextual filter: Tartalom: Category (field_tags) */
  $handler->display->display_options['arguments']['field_tags_tid_1']['id'] = 'field_tags_tid_1';
  $handler->display->display_options['arguments']['field_tags_tid_1']['table'] = 'field_data_field_tags';
  $handler->display->display_options['arguments']['field_tags_tid_1']['field'] = 'field_tags_tid';
  $handler->display->display_options['arguments']['field_tags_tid_1']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['field_tags_tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tags_tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tags_tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tags_tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_tags_tid_1']['break_phrase'] = TRUE;
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

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Tartalom: Category */
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
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => 'content',
  );
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Tartalom: Category */
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
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => 'content',
  );
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Tartalom: Published (field_published) */
  $handler->display->display_options['arguments']['field_published_tid']['id'] = 'field_published_tid';
  $handler->display->display_options['arguments']['field_published_tid']['table'] = 'field_data_field_published';
  $handler->display->display_options['arguments']['field_published_tid']['field'] = 'field_published_tid';
  $handler->display->display_options['arguments']['field_published_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_published_tid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['field_published_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_published_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_published_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_published_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Tartalom: Category */
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
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => 'content',
  );
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Tartalom: Tags (field_tagsa) */
  $handler->display->display_options['arguments']['field_tagsa_tid']['id'] = 'field_tagsa_tid';
  $handler->display->display_options['arguments']['field_tagsa_tid']['table'] = 'field_data_field_tagsa';
  $handler->display->display_options['arguments']['field_tagsa_tid']['field'] = 'field_tagsa_tid';
  $handler->display->display_options['arguments']['field_tagsa_tid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['field_tagsa_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_tagsa_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_tagsa_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_tagsa_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta';
  $handler->display->display_options['fields']['field_published']['type'] = 'taxonomy_term_reference_link';
  /* Field: Tartalom: Category */
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
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => 'content',
  );
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['arguments']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['arguments']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['arguments']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['arguments']['field_menu_tid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['field_menu_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_menu_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_menu_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_menu_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_menu_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Tartalom: Secondary Heading 	 (field_secondary_menu) */
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['id'] = 'field_secondary_menu_tid';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['table'] = 'field_data_field_secondary_menu';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['field'] = 'field_secondary_menu_tid';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['exception']['title'] = 'Mind';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_secondary_menu_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_category']['name'] = 'Nézettáblák';
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

  /* Display: Hírcsatorna */
  $handler = $view->new_display('feed', 'Hírcsatorna', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alapjárat - Magyar Autós Közösség';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Alapjárat - Magyar Autós Közösség',
        'language' => '',
        'category' => 'Autós hírek, videótesztek, hasznos infók a mindennapi autózáshoz.',
        'image' => 'https://alapjarat.hu/sites/default/files/alapjarat_logo.png',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'field_subtitled',
        'author' => 'field_published',
        'category' => 'field_tags',
        'comments' => '',
        'enclosure' => 'field_image',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'feed';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Hírcsatorna Aktuális */
  $handler = $view->new_display('feed', 'Hírcsatorna Aktuális', 'feed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alapjárat - Magyar Autós Közösség';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Alapjárat - Magyar Autós Közösség',
        'language' => '',
        'category' => 'Autós hírek, videótesztek, hasznos infók a mindennapi autózáshoz.',
        'image' => 'https://alapjarat.hu/sites/default/files/alapjarat_logo.png',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'field_subtitled',
        'author' => 'field_published',
        'category' => 'field_tags',
        'comments' => '',
        'enclosure' => 'field_image',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
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
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '106',
  );
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['path'] = 'aktualis/feed';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Hírcsatorna Autóteszt */
  $handler = $view->new_display('feed', 'Hírcsatorna Autóteszt', 'feed_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alapjárat - Magyar Autós Közösség';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Alapjárat - Magyar Autós Közösség',
        'language' => '',
        'category' => 'Autós hírek, videótesztek, hasznos infók a mindennapi autózáshoz.',
        'image' => 'https://alapjarat.hu/sites/default/files/alapjarat_logo.png',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'field_subtitled',
        'author' => 'field_published',
        'category' => 'field_tags',
        'comments' => '',
        'enclosure' => 'field_image',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
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
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '103',
  );
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['path'] = 'autoteszt/feed';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Hírcsatorna El mondó */
  $handler = $view->new_display('feed', 'Hírcsatorna El mondó', 'feed_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alapjárat - Magyar Autós Közösség';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Alapjárat - Magyar Autós Közösség',
        'language' => '',
        'category' => 'Autós hírek, videótesztek, hasznos infók a mindennapi autózáshoz.',
        'image' => 'https://alapjarat.hu/sites/default/files/alapjarat_logo.png',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'field_subtitled',
        'author' => 'field_published',
        'category' => 'field_tags',
        'comments' => '',
        'enclosure' => 'field_image',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
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
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '110',
  );
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['path'] = 'el-mondo/feed';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Hírcsatorna Hasznos infók */
  $handler = $view->new_display('feed', 'Hírcsatorna Hasznos infók', 'feed_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alapjárat - Magyar Autós Közösség';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Alapjárat - Magyar Autós Közösség',
        'language' => '',
        'category' => 'Autós hírek, videótesztek, hasznos infók a mindennapi autózáshoz.',
        'image' => 'https://alapjarat.hu/sites/default/files/alapjarat_logo.png',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'field_subtitled',
        'author' => 'field_published',
        'category' => 'field_tags',
        'comments' => '',
        'enclosure' => 'field_image',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
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
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '97',
  );
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['path'] = 'hasznos-infok/feed';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Hírcsatorna Közös csapatás */
  $handler = $view->new_display('feed', 'Hírcsatorna Közös csapatás', 'feed_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alapjárat - Magyar Autós Közösség';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Alapjárat - Magyar Autós Közösség',
        'language' => '',
        'category' => 'Autós hírek, videótesztek, hasznos infók a mindennapi autózáshoz.',
        'image' => 'https://alapjarat.hu/sites/default/files/alapjarat_logo.png',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'field_subtitled',
        'author' => 'field_published',
        'category' => 'field_tags',
        'comments' => '',
        'enclosure' => 'field_image',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
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
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '109',
  );
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['path'] = 'kozos-csapatas/feed';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Hírcsatorna Rajtrács */
  $handler = $view->new_display('feed', 'Hírcsatorna Rajtrács', 'feed_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alapjárat - Magyar Autós Közösség';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Alapjárat - Magyar Autós Közösség',
        'language' => '',
        'category' => 'Autós hírek, videótesztek, hasznos infók a mindennapi autózáshoz.',
        'image' => 'https://alapjarat.hu/sites/default/files/alapjarat_logo.png',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'field_subtitled',
        'author' => 'field_published',
        'category' => 'field_tags',
        'comments' => '',
        'enclosure' => 'field_image',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
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
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '108',
  );
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['path'] = 'rajtracs/feed';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Hírcsatorna Tech */
  $handler = $view->new_display('feed', 'Hírcsatorna Tech', 'feed_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alapjárat - Magyar Autós Közösség';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Alapjárat - Magyar Autós Közösség',
        'language' => '',
        'category' => 'Autós hírek, videótesztek, hasznos infók a mindennapi autózáshoz.',
        'image' => 'https://alapjarat.hu/sites/default/files/alapjarat_logo.png',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'field_subtitled',
        'author' => 'field_published',
        'category' => 'field_tags',
        'comments' => '',
        'enclosure' => 'field_image',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
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
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '102',
  );
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['path'] = 'tech/feed';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Hírcsatorna Tuning */
  $handler = $view->new_display('feed', 'Hírcsatorna Tuning', 'feed_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alapjárat - Magyar Autós Közösség';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Alapjárat - Magyar Autós Közösség',
        'language' => '',
        'category' => 'Autós hírek, videótesztek, hasznos infók a mindennapi autózáshoz.',
        'image' => 'https://alapjarat.hu/sites/default/files/alapjarat_logo.png',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'field_subtitled',
        'author' => 'field_published',
        'category' => 'field_tags',
        'comments' => '',
        'enclosure' => 'field_image',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
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
  /* Filter criterion: Tartalom: Primary Heading 	 (field_menu) */
  $handler->display->display_options['filters']['field_menu_tid']['id'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['table'] = 'field_data_field_menu';
  $handler->display->display_options['filters']['field_menu_tid']['field'] = 'field_menu_tid';
  $handler->display->display_options['filters']['field_menu_tid']['value'] = array(
    0 => '105',
  );
  $handler->display->display_options['filters']['field_menu_tid']['vocabulary'] = 'menu';
  $handler->display->display_options['path'] = 'tuning/feed';
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['rss'] = array(
    t('Master'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Elemek száma oldalanként'),
    t('- Mind -'),
    t('Eltolás'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('Nyilvános'),
    t('Kategória'),
    t('Közzétételi dátum'),
    t('Mind'),
    t('Content pane'),
    t('more'),
    t('<a href="[path]">[field_title2]</a>'),
    t('Publikálta'),
    t('Közzétéve'),
    t('Nézettáblák'),
    t('published pane'),
    t('tags pane'),
    t('Menu pane'),
    t('Hírcsatorna'),
    t('Alapjárat - Magyar Autós Közösség'),
    t('Hírcsatorna Aktuális'),
    t('Hírcsatorna Autóteszt'),
    t('Hírcsatorna El mondó'),
    t('Hírcsatorna Hasznos infók'),
    t('Hírcsatorna Közös csapatás'),
    t('Hírcsatorna Rajtrács'),
    t('Hírcsatorna Tech'),
    t('Hírcsatorna Tuning'),
  );
  $export['rss'] = $view;

  $view = new view();
  $view->name = 'search_api_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_article_index';
  $view->human_name = 'Search Api search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Keresés';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'tovább';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Alkalmaz';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Alaphelyzet';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Rendezés';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Növekvő';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Csökkenő';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Keresési találatok';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  /* Field: Indexed Tartalom: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_article_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'search_api_index_article_index';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['label'] = '';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_title2']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['field_title2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title2']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Indexed Tartalom: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_article_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="[url]">[field_title2]</a>';
  $handler->display->display_options['fields']['nid']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'search_api_index_article_index';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta:';
  $handler->display->display_options['fields']['field_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_published']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_published']['bypass_access'] = 0;
  /* Field: Indexed Tartalom: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'search_api_index_article_index';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'Kategória';
  $handler->display->display_options['fields']['field_tags']['list']['separator'] = ' ';
  $handler->display->display_options['fields']['field_tags']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_tags']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_tags']['bypass_access'] = 0;
  /* Field: Indexed Tartalom: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_article_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Közzétéve:';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'my';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Tartalom: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'search_api_index_article_index';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['published_at']['date_format'] = 'my';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['published_at']['link_to_entity'] = 0;
  /* Field: Indexed Tartalom: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'search_api_index_article_index';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => 'content',
  );
  /* Field: Subtitled (H2): Text (indexed) */
  $handler->display->display_options['fields']['field_subtitled_value']['id'] = 'field_subtitled_value';
  $handler->display->display_options['fields']['field_subtitled_value']['table'] = 'search_api_index_article_index';
  $handler->display->display_options['fields']['field_subtitled_value']['field'] = 'field_subtitled_value';
  $handler->display->display_options['fields']['field_subtitled_value']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitled_value']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Tartalom: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_article_index';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_article_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  /* Filter criterion: Indexed Tartalom: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_article_index';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_article_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'field_subtitled:value' => 'field_subtitled:value',
    'field_text:value' => 'field_text:value',
    'field_title' => 'field_title',
    'search_api_viewed' => 'search_api_viewed',
    'title' => 'title',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'kereses';
  $translatables['search_api_search'] = array(
    t('Master'),
    t('Keresés'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Elemek száma oldalanként'),
    t('- Mind -'),
    t('Eltolás'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('Keresési találatok'),
    t('<a href="[url]">[field_title2]</a>'),
    t('.'),
    t('Publikálta:'),
    t('Kategória'),
    t('Közzétéve:'),
    t('Közzétéve'),
    t('Page'),
    t('more'),
  );
  $export['search_api_search'] = $view;

  $view = new view();
  $view->name = 'search_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Search page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search page';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemek száma oldalanként';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Mind -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Eltolás';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« első';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ előző';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'következő ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'utolsó »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Keresési találatok';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  /* Field: Tartalom: Article Title (H1) */
  $handler->display->display_options['fields']['field_title2']['id'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['table'] = 'field_data_field_title2';
  $handler->display->display_options['fields']['field_title2']['field'] = 'field_title2';
  $handler->display->display_options['fields']['field_title2']['exclude'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">[field_title2]</a>';
  $handler->display->display_options['fields']['path']['element_type'] = 'h3';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Tartalom: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Publikálta';
  /* Field: Tartalom: Category */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = 'Kategória';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Közzétéve';
  $handler->display->display_options['fields']['created']['date_format'] = 'my';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Tartalom: Main image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'category',
    'image_link' => 'content',
  );
  /* Field: Tartalom: Subtitled (H2) */
  $handler->display->display_options['fields']['field_subtitled']['id'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['table'] = 'field_data_field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['field'] = 'field_subtitled';
  $handler->display->display_options['fields']['field_subtitled']['label'] = '';
  $handler->display->display_options['fields']['field_subtitled']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'search-page';
  $translatables['search_page'] = array(
    t('Master'),
    t('Search page'),
    t('tovább'),
    t('Alkalmaz'),
    t('Alaphelyzet'),
    t('Rendezés'),
    t('Növekvő'),
    t('Csökkenő'),
    t('Elemek száma oldalanként'),
    t('- Mind -'),
    t('Eltolás'),
    t('« első'),
    t('‹ előző'),
    t('következő ›'),
    t('utolsó »'),
    t('Keresési találatok'),
    t('Article Title (H1)'),
    t('<a href="[path]">[field_title2]</a>'),
    t('Publikálta'),
    t('Kategória'),
    t('Közzétéve'),
    t('Page'),
    t('more'),
  );
  $export['search_page'] = $view;

  return $export;
}
