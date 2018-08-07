<?php
/**
 * @file
 * alapj_rat_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function alapj_rat_features_default_page_manager_pages() {
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
  $display->title = 'Archive';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'adb5c561-2bcd-4f27-b3c4-190021c89a78';
  $display->content['new-adb5c561-2bcd-4f27-b3c4-190021c89a78'] = $pane;
  $display->panels['helpfu__info_a'][0] = 'new-adb5c561-2bcd-4f27-b3c4-190021c89a78';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e071e0df-eddf-4cbb-a4d4-b345b0874258';
  $display->content['new-e071e0df-eddf-4cbb-a4d4-b345b0874258'] = $pane;
  $display->panels['helpfu__info_a'][1] = 'new-e071e0df-eddf-4cbb-a4d4-b345b0874258';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f7c10d36-03ee-4a87-95a9-302db162185c';
  $display->content['new-f7c10d36-03ee-4a87-95a9-302db162185c'] = $pane;
  $display->panels['helpfu__info_a'][2] = 'new-f7c10d36-03ee-4a87-95a9-302db162185c';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd9e78d34-58c5-4ec5-82e6-18bd0ac7860d';
  $display->content['new-d9e78d34-58c5-4ec5-82e6-18bd0ac7860d'] = $pane;
  $display->panels['helpfu__info_a'][3] = 'new-d9e78d34-58c5-4ec5-82e6-18bd0ac7860d';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '19304669-0460-407f-a728-3394a3ea5305';
  $display->content['new-19304669-0460-407f-a728-3394a3ea5305'] = $pane;
  $display->panels['helpfu__info_a'][4] = 'new-19304669-0460-407f-a728-3394a3ea5305';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '74c19443-0e8a-4910-9f2d-7e7397baac54';
  $display->content['new-74c19443-0e8a-4910-9f2d-7e7397baac54'] = $pane;
  $display->panels['helpfu__info_a'][5] = 'new-74c19443-0e8a-4910-9f2d-7e7397baac54';
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
  $page->name = 'impress_admin';
  $page->task = 'page';
  $page->admin_title = 'Impress admin';
  $page->admin_description = '';
  $page->path = 'admin/%admin';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'admin' => array(
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
  $handler->name = 'page_impress_admin__panel';
  $handler->task = 'page';
  $handler->subtask = 'impress_admin';
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
  $display->uuid = '0af4076e-291c-45b9-bbb8-984e853a46f3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_impress_admin__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4ea0dd68-3576-45ee-9905-0642593ab142';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer nodes',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'impress',
        ),
        'context' => 'argument_string_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Impress',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<ul class="admin-list">
<li class="clearfix">
<span class="label"><a href=\'impress/1\'>Az Alapjárat szerkesztősége</a></span>
<div class="description"></div>
</li>
<li class="clearfix">
<span class="label"><a href=\'impress/2\'>Külsős munkatárs</a></span>
<div class="description"></div>
</li>
</ul>',
    'format' => 'admin_html',
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
  $pane->uuid = '4ea0dd68-3576-45ee-9905-0642593ab142';
  $display->content['new-4ea0dd68-3576-45ee-9905-0642593ab142'] = $pane;
  $display->panels['center'][0] = 'new-4ea0dd68-3576-45ee-9905-0642593ab142';
  $pane = new stdClass();
  $pane->pid = 'new-552d5ae7-aa0f-4b30-840e-0614615df077';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer nodes',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'partners',
        ),
        'context' => 'argument_string_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Partners',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<ul class="admin-list">
<li class="clearfix">
<span class="label"><a href=\'partners/1\'>Prémium autós partnerek</a></span>
<div class="description"></div>
</li>
<li class="clearfix">
<span class="label"><a href=\'partners/2\'>Prémium szabadidős partnerek</a></span>
<div class="description"></div>
</li>
</ul>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '552d5ae7-aa0f-4b30-840e-0614615df077';
  $display->content['new-552d5ae7-aa0f-4b30-840e-0614615df077'] = $pane;
  $display->panels['center'][1] = 'new-552d5ae7-aa0f-4b30-840e-0614615df077';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['impress_admin'] = $page;

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
  $pane->css = array(
    'css_id' => 'premium',
    'css_class' => '',
  );
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
  $pane->css = array(
    'css_id' => 'recreation',
    'css_class' => '',
  );
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
