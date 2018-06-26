<?php
/**
 * @file
 * alapjarat.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function alapjarat_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_2c3793f9-2690-4d2a-9f62-7972906cf6c0';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'a_article' => 'a_article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'node_pane',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd01002e5-a6cd-4b74-9c05-c5f1542121bd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_2c3793f9-2690-4d2a-9f62-7972906cf6c0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-56616a46-daf6-43c7-834c-2d4691dc387d';
  $pane->panel = 'center';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'header',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '56616a46-daf6-43c7-834c-2d4691dc387d';
  $display->content['new-56616a46-daf6-43c7-834c-2d4691dc387d'] = $pane;
  $display->panels['center'][0] = 'new-56616a46-daf6-43c7-834c-2d4691dc387d';
  $pane = new stdClass();
  $pane->pid = 'new-fead48ef-1d12-41ce-976b-42d1543a1f11';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_published';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fead48ef-1d12-41ce-976b-42d1543a1f11';
  $display->content['new-fead48ef-1d12-41ce-976b-42d1543a1f11'] = $pane;
  $display->panels['center'][1] = 'new-fead48ef-1d12-41ce-976b-42d1543a1f11';
  $pane = new stdClass();
  $pane->pid = 'new-f9b8d36d-6b73-478d-86c1-efec89da0ec5';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f9b8d36d-6b73-478d-86c1-efec89da0ec5';
  $display->content['new-f9b8d36d-6b73-478d-86c1-efec89da0ec5'] = $pane;
  $display->panels['center'][2] = 'new-f9b8d36d-6b73-478d-86c1-efec89da0ec5';
  $pane = new stdClass();
  $pane->pid = 'new-a14cc2d5-a1a5-47a3-91a0-b95805a2875d';
  $pane->panel = 'center';
  $pane->type = 'node_created';
  $pane->subtype = 'node_created';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'format' => 'my',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Published date:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a14cc2d5-a1a5-47a3-91a0-b95805a2875d';
  $display->content['new-a14cc2d5-a1a5-47a3-91a0-b95805a2875d'] = $pane;
  $display->panels['center'][3] = 'new-a14cc2d5-a1a5-47a3-91a0-b95805a2875d';
  $pane = new stdClass();
  $pane->pid = 'new-02db2c16-7fdb-420d-91d9-67de62bc9e24';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_subtitled';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '02db2c16-7fdb-420d-91d9-67de62bc9e24';
  $display->content['new-02db2c16-7fdb-420d-91d9-67de62bc9e24'] = $pane;
  $display->panels['center'][4] = 'new-02db2c16-7fdb-420d-91d9-67de62bc9e24';
  $pane = new stdClass();
  $pane->pid = 'new-b831b875-bba3-4ce1-ac46-114bbc1082ed';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_text';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'b831b875-bba3-4ce1-ac46-114bbc1082ed';
  $display->content['new-b831b875-bba3-4ce1-ac46-114bbc1082ed'] = $pane;
  $display->panels['center'][5] = 'new-b831b875-bba3-4ce1-ac46-114bbc1082ed';
  $pane = new stdClass();
  $pane->pid = 'new-ad8fb0e9-318c-4b64-89f1-6ead3a24f52f';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'social_media_links-social-media-links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'ad8fb0e9-318c-4b64-89f1-6ead3a24f52f';
  $display->content['new-ad8fb0e9-318c-4b64-89f1-6ead3a24f52f'] = $pane;
  $display->panels['center'][6] = 'new-ad8fb0e9-318c-4b64-89f1-6ead3a24f52f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_2c3793f9-2690-4d2a-9f62-7972906cf6c0'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_d3b53892-900b-480a-b3e8-992a3d69013b';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 6,
          1 => 3,
          2 => 2,
          3 => 1,
          4 => 4,
          5 => 5,
          6 => 7,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_menu',
          1 => 'search',
        ),
        'parent' => 'main',
        'class' => 'main_menu',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'logo',
          1 => 'banner',
        ),
        'parent' => 'main',
        'class' => 'letterhead',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'second_menu',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'logo' => array(
        'type' => 'region',
        'title' => 'logo',
        'width' => '40',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'banner' => array(
        'type' => 'region',
        'title' => 'banner',
        'width' => '60',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'letterhead_banner',
        'hide_empty' => 0,
      ),
      'second_menu' => array(
        'type' => 'region',
        'title' => 'second menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'second_menu',
        'hide_empty' => 0,
      ),
      'main_menu' => array(
        'type' => 'region',
        'title' => 'main menu',
        'width' => '79.99999450748106',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'search' => array(
        'type' => 'region',
        'title' => 'search',
        'width' => '20.000005492518945',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'search',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_content',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'main_content' => array(
        'type' => 'region',
        'title' => 'first',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'first',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_text',
          1 => 'banner_',
        ),
        'parent' => 'main',
        'class' => 'maincontent',
        'hide_empty' => 0,
      ),
      'footer_text' => array(
        'type' => 'region',
        'title' => 'main content',
        'width' => 50,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'main_content',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'time',
          1 => 'so',
        ),
        'parent' => 'main',
        'class' => 'top',
        'hide_empty' => 0,
      ),
      'so' => array(
        'type' => 'region',
        'title' => 'social menu',
        'width' => 50,
        'width_type' => '%',
        'parent' => '6',
        'class' => 'social_menu',
        'hide_empty' => 0,
      ),
      'time' => array(
        'type' => 'region',
        'title' => 'time',
        'width' => 50,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer_',
          1 => 'footer_text_',
        ),
        'parent' => 'main',
        'class' => 'my_footer',
        'hide_empty' => 0,
      ),
      'footer_' => array(
        'type' => 'region',
        'title' => 'footer',
        'width' => 50,
        'width_type' => '%',
        'parent' => '7',
        'class' => 'second_menu_footer',
        'hide_empty' => 0,
      ),
      'footer_text_' => array(
        'type' => 'region',
        'title' => 'footer text',
        'width' => 50,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      'banner_' => array(
        'type' => 'region',
        'title' => 'right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '5',
        'class' => 'right',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'banner' => NULL,
      'logo' => NULL,
      'second_menu' => NULL,
      'main_menu' => NULL,
      'search' => NULL,
      'main_content' => NULL,
      'footer' => NULL,
      'footer_text' => NULL,
      'so' => NULL,
      'time' => NULL,
      'footer_' => NULL,
      'footer_text_' => NULL,
      'banner_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd742165c-f337-4e3b-955d-af0e6c0a3a21';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__panel_context_d3b53892-900b-480a-b3e8-992a3d69013b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-190a53dc-2617-4b01-b1d8-afa8df05f755';
  $pane->panel = 'banner';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<iframe style="overflow:hidden; border: none; height: 120px; width:620px !important;" id="frame" src="https://www.alapjarat.hu/wp-content/uploads/reklam/mahbanner_600x100/" width="200" height="100" border="0" allowtransparency="true" scrolling="no" frameborder="0"></iframe>',
    'format' => 'fullhtml',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '190a53dc-2617-4b01-b1d8-afa8df05f755';
  $display->content['new-190a53dc-2617-4b01-b1d8-afa8df05f755'] = $pane;
  $display->panels['banner'][0] = 'new-190a53dc-2617-4b01-b1d8-afa8df05f755';
  $pane = new stdClass();
  $pane->pid = 'new-84e958b3-04f1-48af-b2c1-1218094d8726';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '84e958b3-04f1-48af-b2c1-1218094d8726';
  $display->content['new-84e958b3-04f1-48af-b2c1-1218094d8726'] = $pane;
  $display->panels['banner_'][0] = 'new-84e958b3-04f1-48af-b2c1-1218094d8726';
  $pane = new stdClass();
  $pane->pid = 'new-ac4aeefe-d4a1-483f-984b-741f4a2014f7';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ac4aeefe-d4a1-483f-984b-741f4a2014f7';
  $display->content['new-ac4aeefe-d4a1-483f-984b-741f4a2014f7'] = $pane;
  $display->panels['banner_'][1] = 'new-ac4aeefe-d4a1-483f-984b-741f4a2014f7';
  $pane = new stdClass();
  $pane->pid = 'new-9ded4e28-117d-47d8-9765-7e91a175953b';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'event-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'event',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9ded4e28-117d-47d8-9765-7e91a175953b';
  $display->content['new-9ded4e28-117d-47d8-9765-7e91a175953b'] = $pane;
  $display->panels['banner_'][2] = 'new-9ded4e28-117d-47d8-9765-7e91a175953b';
  $pane = new stdClass();
  $pane->pid = 'new-0ef68896-d486-4fea-b889-1404e2edf8ce';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0ef68896-d486-4fea-b889-1404e2edf8ce';
  $display->content['new-0ef68896-d486-4fea-b889-1404e2edf8ce'] = $pane;
  $display->panels['banner_'][3] = 'new-0ef68896-d486-4fea-b889-1404e2edf8ce';
  $pane = new stdClass();
  $pane->pid = 'new-c8812251-416b-419c-b50b-5e823a41e6cf';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'random_article',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c8812251-416b-419c-b50b-5e823a41e6cf';
  $display->content['new-c8812251-416b-419c-b50b-5e823a41e6cf'] = $pane;
  $display->panels['banner_'][4] = 'new-c8812251-416b-419c-b50b-5e823a41e6cf';
  $pane = new stdClass();
  $pane->pid = 'new-8fff074c-14ca-4caf-93df-dd8291f81609';
  $pane->panel = 'banner_';
  $pane->type = 'views_panes';
  $pane->subtype = 'banner-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'banner4',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '8fff074c-14ca-4caf-93df-dd8291f81609';
  $display->content['new-8fff074c-14ca-4caf-93df-dd8291f81609'] = $pane;
  $display->panels['banner_'][5] = 'new-8fff074c-14ca-4caf-93df-dd8291f81609';
  $pane = new stdClass();
  $pane->pid = 'new-76900dcc-6cdf-4260-a00a-3ca5a66737ff';
  $pane->panel = 'banner_';
  $pane->type = 'articles_archive';
  $pane->subtype = 'articles_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'date_format' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'archive',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '76900dcc-6cdf-4260-a00a-3ca5a66737ff';
  $display->content['new-76900dcc-6cdf-4260-a00a-3ca5a66737ff'] = $pane;
  $display->panels['banner_'][6] = 'new-76900dcc-6cdf-4260-a00a-3ca5a66737ff';
  $pane = new stdClass();
  $pane->pid = 'new-3a7c7032-c145-4da4-92fb-07d76d6d7557';
  $pane->panel = 'footer_';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-second-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3a7c7032-c145-4da4-92fb-07d76d6d7557';
  $display->content['new-3a7c7032-c145-4da4-92fb-07d76d6d7557'] = $pane;
  $display->panels['footer_'][0] = 'new-3a7c7032-c145-4da4-92fb-07d76d6d7557';
  $pane = new stdClass();
  $pane->pid = 'new-adeb6074-bbf7-4668-863f-d1d56eaccfb9';
  $pane->panel = 'footer_text';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'adeb6074-bbf7-4668-863f-d1d56eaccfb9';
  $display->content['new-adeb6074-bbf7-4668-863f-d1d56eaccfb9'] = $pane;
  $display->panels['footer_text'][0] = 'new-adeb6074-bbf7-4668-863f-d1d56eaccfb9';
  $pane = new stdClass();
  $pane->pid = 'new-7f94bf9a-9041-4f26-9992-7065122d13e2';
  $pane->panel = 'footer_text_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>© Copyright 2018, alapjarat.hu &amp; <a href="https://www.ecdh.hu" target="_blank">ecdh.hu</a>Minden jog fenntartva.</p>
',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'footer_text',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7f94bf9a-9041-4f26-9992-7065122d13e2';
  $display->content['new-7f94bf9a-9041-4f26-9992-7065122d13e2'] = $pane;
  $display->panels['footer_text_'][0] = 'new-7f94bf9a-9041-4f26-9992-7065122d13e2';
  $pane = new stdClass();
  $pane->pid = 'new-8cdf61b2-331e-4559-aa53-586ba40ff595';
  $pane->panel = 'logo';
  $pane->type = 'page_logo';
  $pane->subtype = 'page_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'logo',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8cdf61b2-331e-4559-aa53-586ba40ff595';
  $display->content['new-8cdf61b2-331e-4559-aa53-586ba40ff595'] = $pane;
  $display->panels['logo'][0] = 'new-8cdf61b2-331e-4559-aa53-586ba40ff595';
  $pane = new stdClass();
  $pane->pid = 'new-29cb6d64-6be0-4a39-a1d6-91a8014ac0b1';
  $pane->panel = 'main_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'one',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '29cb6d64-6be0-4a39-a1d6-91a8014ac0b1';
  $display->content['new-29cb6d64-6be0-4a39-a1d6-91a8014ac0b1'] = $pane;
  $display->panels['main_content'][0] = 'new-29cb6d64-6be0-4a39-a1d6-91a8014ac0b1';
  $pane = new stdClass();
  $pane->pid = 'new-d421c55b-df73-45c3-93ae-d60987629f02';
  $pane->panel = 'main_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'four',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd421c55b-df73-45c3-93ae-d60987629f02';
  $display->content['new-d421c55b-df73-45c3-93ae-d60987629f02'] = $pane;
  $display->panels['main_content'][1] = 'new-d421c55b-df73-45c3-93ae-d60987629f02';
  $pane = new stdClass();
  $pane->pid = 'new-41b7e39e-88ed-4d21-9ddc-1f26d61fa3fb';
  $pane->panel = 'main_menu';
  $pane->type = 'block';
  $pane->subtype = 'system-main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'main_menu',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '41b7e39e-88ed-4d21-9ddc-1f26d61fa3fb';
  $display->content['new-41b7e39e-88ed-4d21-9ddc-1f26d61fa3fb'] = $pane;
  $display->panels['main_menu'][0] = 'new-41b7e39e-88ed-4d21-9ddc-1f26d61fa3fb';
  $pane = new stdClass();
  $pane->pid = 'new-456592ea-530c-4ff7-b852-ee4beb21bd9c';
  $pane->panel = 'search';
  $pane->type = 'block';
  $pane->subtype = 'search-form';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
            1 => 2,
            2 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'search',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '456592ea-530c-4ff7-b852-ee4beb21bd9c';
  $display->content['new-456592ea-530c-4ff7-b852-ee4beb21bd9c'] = $pane;
  $display->panels['search'][0] = 'new-456592ea-530c-4ff7-b852-ee4beb21bd9c';
  $pane = new stdClass();
  $pane->pid = 'new-ae65dd0a-44cc-4a48-9889-283725898c83';
  $pane->panel = 'second_menu';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-second-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'second_menu',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ae65dd0a-44cc-4a48-9889-283725898c83';
  $display->content['new-ae65dd0a-44cc-4a48-9889-283725898c83'] = $pane;
  $display->panels['second_menu'][0] = 'new-ae65dd0a-44cc-4a48-9889-283725898c83';
  $pane = new stdClass();
  $pane->pid = 'new-7483c71b-aab0-406c-b932-91688659bf75';
  $pane->panel = 'so';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-social-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'social_menu',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7483c71b-aab0-406c-b932-91688659bf75';
  $display->content['new-7483c71b-aab0-406c-b932-91688659bf75'] = $pane;
  $display->panels['so'][0] = 'new-7483c71b-aab0-406c-b932-91688659bf75';
  $pane = new stdClass();
  $pane->pid = 'new-b5cc256f-0f65-4bb4-a954-00c4f06893ad';
  $pane->panel = 'time';
  $pane->type = 'header_date';
  $pane->subtype = 'header_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'date_format' => '<b>Y-m-d</b>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'time',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b5cc256f-0f65-4bb4-a954-00c4f06893ad';
  $display->content['new-b5cc256f-0f65-4bb4-a954-00c4f06893ad'] = $pane;
  $display->panels['time'][0] = 'new-b5cc256f-0f65-4bb4-a954-00c4f06893ad';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_d3b53892-900b-480a-b3e8-992a3d69013b'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_b7de97a1-6e49-4500-81c1-315983bc3fa9';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '72840d86-7f74-4530-b98a-36e88a7b29ea';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_b7de97a1-6e49-4500-81c1-315983bc3fa9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8651ec95-5920-46f6-bbf7-91f9e8432442';
  $pane->panel = 'center';
  $pane->type = 'term_name';
  $pane->subtype = 'term_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => 'Category:&nbsp;',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'header',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8651ec95-5920-46f6-bbf7-91f9e8432442';
  $display->content['new-8651ec95-5920-46f6-bbf7-91f9e8432442'] = $pane;
  $display->panels['center'][0] = 'new-8651ec95-5920-46f6-bbf7-91f9e8432442';
  $pane = new stdClass();
  $pane->pid = 'new-d52d7466-4a43-4f7f-aab8-73b6669ba73e';
  $pane->panel = 'center';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'category',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd52d7466-4a43-4f7f-aab8-73b6669ba73e';
  $display->content['new-d52d7466-4a43-4f7f-aab8-73b6669ba73e'] = $pane;
  $display->panels['center'][1] = 'new-d52d7466-4a43-4f7f-aab8-73b6669ba73e';
  $pane = new stdClass();
  $pane->pid = 'new-54e1e621-c91f-4469-9327-826c60abc2f0';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'category_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'category',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '54e1e621-c91f-4469-9327-826c60abc2f0';
  $display->content['new-54e1e621-c91f-4469-9327-826c60abc2f0'] = $pane;
  $display->panels['center'][2] = 'new-54e1e621-c91f-4469-9327-826c60abc2f0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_b7de97a1-6e49-4500-81c1-315983bc3fa9'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function alapjarat_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'archive';
  $page->task = 'page';
  $page->admin_title = 'Archive';
  $page->admin_description = '';
  $page->path = 'archive';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_archive__panel';
  $handler->task = 'page';
  $handler->subtask = 'archive';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '142be34e-3991-42fd-b229-043696a7271d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_archive__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1354caae-372b-44e1-82a9-d9328087fb71';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'archive_1-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'archive_list',
    'css_class' => 'header',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1354caae-372b-44e1-82a9-d9328087fb71';
  $display->content['new-1354caae-372b-44e1-82a9-d9328087fb71'] = $pane;
  $display->panels['center'][0] = 'new-1354caae-372b-44e1-82a9-d9328087fb71';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1354caae-372b-44e1-82a9-d9328087fb71';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['archive'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = '';
  $page->path = 'front-page';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
        ),
        'parent' => 'canvas',
        'class' => 'front_page',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'helpfu__info_a',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'helpfu__info_a' => array(
        'type' => 'region',
        'title' => 'front_page_post',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'front_page_post',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one' => NULL,
      'four' => NULL,
      'helpfu__info_a' => NULL,
      'helpfu__info_b' => NULL,
      'our_partners' => NULL,
      'big_world' => NULL,
      'tech' => NULL,
    ),
    'one' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dffecd62-0e61-470b-afd9-4b94533760c6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_front_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2e7510cf-a8b5-4b37-9192-d842f4007334';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'helpful info',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3><a href="/helpful-info">Helpful info</a></h3>
',
    'format' => 'fullhtml',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'helpful_info_h3',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2e7510cf-a8b5-4b37-9192-d842f4007334';
  $display->content['new-2e7510cf-a8b5-4b37-9192-d842f4007334'] = $pane;
  $display->panels['helpfu__info_a'][0] = 'new-2e7510cf-a8b5-4b37-9192-d842f4007334';
  $pane = new stdClass();
  $pane->pid = 'new-adb5c561-2bcd-4f27-b3c4-190021c89a78';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'helpful_info_a',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'adb5c561-2bcd-4f27-b3c4-190021c89a78';
  $display->content['new-adb5c561-2bcd-4f27-b3c4-190021c89a78'] = $pane;
  $display->panels['helpfu__info_a'][1] = 'new-adb5c561-2bcd-4f27-b3c4-190021c89a78';
  $pane = new stdClass();
  $pane->pid = 'new-e071e0df-eddf-4cbb-a4d4-b345b0874258';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'helpful_info_b',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e071e0df-eddf-4cbb-a4d4-b345b0874258';
  $display->content['new-e071e0df-eddf-4cbb-a4d4-b345b0874258'] = $pane;
  $display->panels['helpfu__info_a'][2] = 'new-e071e0df-eddf-4cbb-a4d4-b345b0874258';
  $pane = new stdClass();
  $pane->pid = 'new-30fcda44-1a17-45d0-b48b-e263a3477f4f';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'big world',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3><a href="/big-world">Big world</a></h3>
',
    'format' => 'fullhtml',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'big_world_h3',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '30fcda44-1a17-45d0-b48b-e263a3477f4f';
  $display->content['new-30fcda44-1a17-45d0-b48b-e263a3477f4f'] = $pane;
  $display->panels['helpfu__info_a'][3] = 'new-30fcda44-1a17-45d0-b48b-e263a3477f4f';
  $pane = new stdClass();
  $pane->pid = 'new-f7c10d36-03ee-4a87-95a9-302db162185c';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'big_world_A',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f7c10d36-03ee-4a87-95a9-302db162185c';
  $display->content['new-f7c10d36-03ee-4a87-95a9-302db162185c'] = $pane;
  $display->panels['helpfu__info_a'][4] = 'new-f7c10d36-03ee-4a87-95a9-302db162185c';
  $pane = new stdClass();
  $pane->pid = 'new-d9e78d34-58c5-4ec5-82e6-18bd0ac7860d';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'big_world_B',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'd9e78d34-58c5-4ec5-82e6-18bd0ac7860d';
  $display->content['new-d9e78d34-58c5-4ec5-82e6-18bd0ac7860d'] = $pane;
  $display->panels['helpfu__info_a'][5] = 'new-d9e78d34-58c5-4ec5-82e6-18bd0ac7860d';
  $pane = new stdClass();
  $pane->pid = 'new-205230b0-d113-460d-8a55-fa6c361b5f22';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'tech',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3><a href="/tech">Tech</a></h3>
',
    'format' => 'fullhtml',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'tech_h3',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '205230b0-d113-460d-8a55-fa6c361b5f22';
  $display->content['new-205230b0-d113-460d-8a55-fa6c361b5f22'] = $pane;
  $display->panels['helpfu__info_a'][6] = 'new-205230b0-d113-460d-8a55-fa6c361b5f22';
  $pane = new stdClass();
  $pane->pid = 'new-19304669-0460-407f-a728-3394a3ea5305';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'tech',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '19304669-0460-407f-a728-3394a3ea5305';
  $display->content['new-19304669-0460-407f-a728-3394a3ea5305'] = $pane;
  $display->panels['helpfu__info_a'][7] = 'new-19304669-0460-407f-a728-3394a3ea5305';
  $pane = new stdClass();
  $pane->pid = 'new-9d434a07-b746-4e6c-b061-c41092c3dc78';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'test',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3><a href="/test">Test</a></h3>
',
    'format' => 'fullhtml',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'test_h3',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '9d434a07-b746-4e6c-b061-c41092c3dc78';
  $display->content['new-9d434a07-b746-4e6c-b061-c41092c3dc78'] = $pane;
  $display->panels['helpfu__info_a'][8] = 'new-9d434a07-b746-4e6c-b061-c41092c3dc78';
  $pane = new stdClass();
  $pane->pid = 'new-74c19443-0e8a-4910-9f2d-7e7397baac54';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'test',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '74c19443-0e8a-4910-9f2d-7e7397baac54';
  $display->content['new-74c19443-0e8a-4910-9f2d-7e7397baac54'] = $pane;
  $display->panels['helpfu__info_a'][9] = 'new-74c19443-0e8a-4910-9f2d-7e7397baac54';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'impress';
  $page->task = 'page';
  $page->admin_title = 'Impress';
  $page->admin_description = '';
  $page->path = 'impress';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_impress__panel';
  $handler->task = 'page';
  $handler->subtask = 'impress';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'db3c2fd6-c9e7-450e-b5dc-e01fe9b3eef9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_impress__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ddeb7f33-f6b1-4e48-9880-edf246978907';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'impress',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ddeb7f33-f6b1-4e48-9880-edf246978907';
  $display->content['new-ddeb7f33-f6b1-4e48-9880-edf246978907'] = $pane;
  $display->panels['center'][0] = 'new-ddeb7f33-f6b1-4e48-9880-edf246978907';
  $pane = new stdClass();
  $pane->pid = 'new-3bc58db7-e69d-4b25-a497-ed35d5b57e61';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'impress_yes',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3bc58db7-e69d-4b25-a497-ed35d5b57e61';
  $display->content['new-3bc58db7-e69d-4b25-a497-ed35d5b57e61'] = $pane;
  $display->panels['center'][1] = 'new-3bc58db7-e69d-4b25-a497-ed35d5b57e61';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ddeb7f33-f6b1-4e48-9880-edf246978907';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['impress'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'media_pege';
  $page->task = 'page';
  $page->admin_title = 'Media page';
  $page->admin_description = '';
  $page->path = 'media/%tids';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'tids' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_media_pege__panel';
  $handler->task = 'page';
  $handler->subtask = 'media_pege';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '07ea4e73-9539-4a70-b64b-55bf265eab22';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_media_pege__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1c10fc55-bbc9-4276-9d77-eb7c1a6908be';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'media';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'media_title',
    'css_class' => 'header',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1c10fc55-bbc9-4276-9d77-eb7c1a6908be';
  $display->content['new-1c10fc55-bbc9-4276-9d77-eb7c1a6908be'] = $pane;
  $display->panels['center'][0] = 'new-1c10fc55-bbc9-4276-9d77-eb7c1a6908be';
  $pane = new stdClass();
  $pane->pid = 'new-f9ed8aef-0ece-4eee-a3b7-fb3cd98aabe2';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'category_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'empty',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'media',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f9ed8aef-0ece-4eee-a3b7-fb3cd98aabe2';
  $display->content['new-f9ed8aef-0ece-4eee-a3b7-fb3cd98aabe2'] = $pane;
  $display->panels['center'][1] = 'new-f9ed8aef-0ece-4eee-a3b7-fb3cd98aabe2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f9ed8aef-0ece-4eee-a3b7-fb3cd98aabe2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['media_pege'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_calculators';
  $page->task = 'page';
  $page->admin_title = 'Page calculators';
  $page->admin_description = '';
  $page->path = 'calculators';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_page_calculators__panel_context_40781f7f-9c5c-474f-a7de-a473e0855cd5';
  $handler->task = 'page';
  $handler->subtask = 'page_calculators';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66863160-1d4c-40e4-8a09-e0ab4ed3a016';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_page_calculators__panel_context_40781f7f-9c5c-474f-a7de-a473e0855cd5';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7d6e4b37-6c62-496e-ad7e-0b1ba3ad2e3c';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pages',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7d6e4b37-6c62-496e-ad7e-0b1ba3ad2e3c';
  $display->content['new-7d6e4b37-6c62-496e-ad7e-0b1ba3ad2e3c'] = $pane;
  $display->panels['center'][0] = 'new-7d6e4b37-6c62-496e-ad7e-0b1ba3ad2e3c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_calculators'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_connection';
  $page->task = 'page';
  $page->admin_title = 'Page connection';
  $page->admin_description = '';
  $page->path = 'connection';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_page_connection__panel_context_5a1bd4ea-0158-4288-bd5e-f7958734e7a9';
  $handler->task = 'page';
  $handler->subtask = 'page_connection';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66863160-1d4c-40e4-8a09-e0ab4ed3a016';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_page_connection__panel_context_5a1bd4ea-0158-4288-bd5e-f7958734e7a9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b367f5f2-f75a-4eb0-b2d9-37ca6af845fb';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pages',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b367f5f2-f75a-4eb0-b2d9-37ca6af845fb';
  $display->content['new-b367f5f2-f75a-4eb0-b2d9-37ca6af845fb'] = $pane;
  $display->panels['center'][0] = 'new-b367f5f2-f75a-4eb0-b2d9-37ca6af845fb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_connection'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_legal_notice';
  $page->task = 'page';
  $page->admin_title = 'Page legal notice';
  $page->admin_description = '';
  $page->path = 'legal-notice';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_page_legal_notice__panel_context_45273b76-695a-46ef-ac09-ce15e3d17c02';
  $handler->task = 'page';
  $handler->subtask = 'page_legal_notice';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66863160-1d4c-40e4-8a09-e0ab4ed3a016';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_page_legal_notice__panel_context_45273b76-695a-46ef-ac09-ce15e3d17c02';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0faaacac-3c5d-4488-b7d0-8430715e17c7';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pages',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0faaacac-3c5d-4488-b7d0-8430715e17c7';
  $display->content['new-0faaacac-3c5d-4488-b7d0-8430715e17c7'] = $pane;
  $display->panels['center'][0] = 'new-0faaacac-3c5d-4488-b7d0-8430715e17c7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_legal_notice'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_media_offer';
  $page->task = 'page';
  $page->admin_title = 'Page media offer';
  $page->admin_description = '';
  $page->path = 'media-offer';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_page_media_offer__panel';
  $handler->task = 'page';
  $handler->subtask = 'page_media_offer';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '66863160-1d4c-40e4-8a09-e0ab4ed3a016';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_page_media_offer__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d73554fd-a09f-4dab-a0f8-6c16b3c17b45';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pages',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd73554fd-a09f-4dab-a0f8-6c16b3c17b45';
  $display->content['new-d73554fd-a09f-4dab-a0f8-6c16b3c17b45'] = $pane;
  $display->panels['center'][0] = 'new-d73554fd-a09f-4dab-a0f8-6c16b3c17b45';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_media_offer'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'pages';
  $page->task = 'page';
  $page->admin_title = 'Pages';
  $page->admin_description = '';
  $page->path = 'pages/%nid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'nid' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_pages__panel';
  $handler->task = 'page';
  $handler->subtask = 'pages';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'pages',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd999e5f2-504c-48fe-8575-301b77a1ea62';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_pages__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e6156fce-0893-43e0-8eea-bd19537885a8';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'pages/121',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e6156fce-0893-43e0-8eea-bd19537885a8';
  $display->content['new-e6156fce-0893-43e0-8eea-bd19537885a8'] = $pane;
  $display->panels['center'][0] = 'new-e6156fce-0893-43e0-8eea-bd19537885a8';
  $pane = new stdClass();
  $pane->pid = 'new-68cad4c6-fa46-45d8-91be-a747e43a6909';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'pages/124',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '68cad4c6-fa46-45d8-91be-a747e43a6909';
  $display->content['new-68cad4c6-fa46-45d8-91be-a747e43a6909'] = $pane;
  $display->panels['center'][1] = 'new-68cad4c6-fa46-45d8-91be-a747e43a6909';
  $pane = new stdClass();
  $pane->pid = 'new-2fdc47cc-cfc0-48ae-925a-f6f3a751a0bd';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'pages/122',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2fdc47cc-cfc0-48ae-925a-f6f3a751a0bd';
  $display->content['new-2fdc47cc-cfc0-48ae-925a-f6f3a751a0bd'] = $pane;
  $display->panels['center'][2] = 'new-2fdc47cc-cfc0-48ae-925a-f6f3a751a0bd';
  $pane = new stdClass();
  $pane->pid = 'new-6752a60c-33a9-4f2b-955d-d400ba60aaf4';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'pages/123',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '6752a60c-33a9-4f2b-955d-d400ba60aaf4';
  $display->content['new-6752a60c-33a9-4f2b-955d-d400ba60aaf4'] = $pane;
  $display->panels['center'][3] = 'new-6752a60c-33a9-4f2b-955d-d400ba60aaf4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['pages'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'partners';
  $page->task = 'page';
  $page->admin_title = 'Partners';
  $page->admin_description = '';
  $page->path = 'partners';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_partners__panel';
  $handler->task = 'page';
  $handler->subtask = 'partners';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'partner',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f0836b46-dc90-4ae0-ab15-0514ebd2613f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_partners__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8a32afea-dea1-42a9-bd55-7945462a8d02';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8a32afea-dea1-42a9-bd55-7945462a8d02';
  $display->content['new-8a32afea-dea1-42a9-bd55-7945462a8d02'] = $pane;
  $display->panels['center'][0] = 'new-8a32afea-dea1-42a9-bd55-7945462a8d02';
  $pane = new stdClass();
  $pane->pid = 'new-659139d9-388e-410f-b1fe-6b50201fa6cc';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '659139d9-388e-410f-b1fe-6b50201fa6cc';
  $display->content['new-659139d9-388e-410f-b1fe-6b50201fa6cc'] = $pane;
  $display->panels['center'][1] = 'new-659139d9-388e-410f-b1fe-6b50201fa6cc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['partners'] = $page;

  return $pages;

}
