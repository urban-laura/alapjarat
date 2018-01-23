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
          0 => 3,
          1 => 2,
          2 => 1,
          3 => 4,
          4 => 5,
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
        'class' => '',
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
        'class' => '',
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
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'banner' => array(
        'type' => 'region',
        'title' => 'banner',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'second_menu' => array(
        'type' => 'region',
        'title' => 'second menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'main_menu' => array(
        'type' => 'region',
        'title' => 'main menu',
        'width' => '70',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'search' => array(
        'type' => 'region',
        'title' => 'search',
        'width' => '30.000000000000004',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
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
        'title' => 'main content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
          1 => 'footer_text',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'footer',
        'width' => 50,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer_text' => array(
        'type' => 'region',
        'title' => 'footer text',
        'width' => 50,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
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
  $pane->pid = 'new-3a7c7032-c145-4da4-92fb-07d76d6d7557';
  $pane->panel = 'footer';
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
  $display->panels['footer'][0] = 'new-3a7c7032-c145-4da4-92fb-07d76d6d7557';
  $pane = new stdClass();
  $pane->pid = 'new-7f94bf9a-9041-4f26-9992-7065122d13e2';
  $pane->panel = 'footer_text';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>&copy; Copyright 2018, alapjarat.hu &amp; <a href="https://www.ecdh.hu" target="_blank">ecdh.hu</a> | Minden jog fenntartva.</p>',
    'format' => 'filtered_html',
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
  $pane->uuid = '7f94bf9a-9041-4f26-9992-7065122d13e2';
  $display->content['new-7f94bf9a-9041-4f26-9992-7065122d13e2'] = $pane;
  $display->panels['footer_text'][0] = 'new-7f94bf9a-9041-4f26-9992-7065122d13e2';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8cdf61b2-331e-4559-aa53-586ba40ff595';
  $display->content['new-8cdf61b2-331e-4559-aa53-586ba40ff595'] = $pane;
  $display->panels['logo'][0] = 'new-8cdf61b2-331e-4559-aa53-586ba40ff595';
  $pane = new stdClass();
  $pane->pid = 'new-adeb6074-bbf7-4668-863f-d1d56eaccfb9';
  $pane->panel = 'main_content';
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
  $display->panels['main_content'][0] = 'new-adeb6074-bbf7-4668-863f-d1d56eaccfb9';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ae65dd0a-44cc-4a48-9889-283725898c83';
  $display->content['new-ae65dd0a-44cc-4a48-9889-283725898c83'] = $pane;
  $display->panels['second_menu'][0] = 'new-ae65dd0a-44cc-4a48-9889-283725898c83';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__panel_context_d3b53892-900b-480a-b3e8-992a3d69013b'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function alapjarat_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = '';
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
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'one',
          1 => 'four',
        ),
        'parent' => 'main',
      ),
      'one' => array(
        'type' => 'region',
        'title' => 'one',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'four' => array(
        'type' => 'region',
        'title' => 'four',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'helpfu__info_a',
          1 => 'helpfu__info_b',
          2 => 'our_partners',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'helpfu__info_a' => array(
        'type' => 'region',
        'title' => 'helpfu_ info_a',
        'width' => '37',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'helpfu__info_b' => array(
        'type' => 'region',
        'title' => 'helpfu_ info_b',
        'width' => '37',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'our_partners' => array(
        'type' => 'region',
        'title' => 'our_partners',
        'width' => '25.999999999999996',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
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
  $pane->pid = 'new-833723e0-14a7-46ed-b8ce-8007adec392d';
  $pane->panel = 'four';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_2';
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
  $pane->uuid = '833723e0-14a7-46ed-b8ce-8007adec392d';
  $display->content['new-833723e0-14a7-46ed-b8ce-8007adec392d'] = $pane;
  $display->panels['four'][0] = 'new-833723e0-14a7-46ed-b8ce-8007adec392d';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'adb5c561-2bcd-4f27-b3c4-190021c89a78';
  $display->content['new-adb5c561-2bcd-4f27-b3c4-190021c89a78'] = $pane;
  $display->panels['helpfu__info_a'][0] = 'new-adb5c561-2bcd-4f27-b3c4-190021c89a78';
  $pane = new stdClass();
  $pane->pid = 'new-e071e0df-eddf-4cbb-a4d4-b345b0874258';
  $pane->panel = 'helpfu__info_b';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_4';
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
  $pane->uuid = 'e071e0df-eddf-4cbb-a4d4-b345b0874258';
  $display->content['new-e071e0df-eddf-4cbb-a4d4-b345b0874258'] = $pane;
  $display->panels['helpfu__info_b'][0] = 'new-e071e0df-eddf-4cbb-a4d4-b345b0874258';
  $pane = new stdClass();
  $pane->pid = 'new-f9260d5a-d76d-4f6d-a518-2a34894f70f8';
  $pane->panel = 'one';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_1';
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
  $pane->uuid = 'f9260d5a-d76d-4f6d-a518-2a34894f70f8';
  $display->content['new-f9260d5a-d76d-4f6d-a518-2a34894f70f8'] = $pane;
  $display->panels['one'][0] = 'new-f9260d5a-d76d-4f6d-a518-2a34894f70f8';
  $pane = new stdClass();
  $pane->pid = 'new-f266463c-a328-4ead-8204-83cc8a4d6827';
  $pane->panel = 'our_partners';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<img src="//i0.wp.com/www.alapjarat.hu/wp-content/uploads/2017/03/shootingpress.png" alt="">',
    'format' => 'admin_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f266463c-a328-4ead-8204-83cc8a4d6827';
  $display->content['new-f266463c-a328-4ead-8204-83cc8a4d6827'] = $pane;
  $display->panels['our_partners'][0] = 'new-f266463c-a328-4ead-8204-83cc8a4d6827';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
