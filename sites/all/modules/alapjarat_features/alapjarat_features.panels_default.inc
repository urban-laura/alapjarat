<?php
/**
 * @file
 * alapjarat_features.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function alapjarat_features_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'hamburger_menu';
  $mini->category = '';
  $mini->admin_title = 'Hamburger menu';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '6de71905-c278-4334-92a7-95f7e4d338c4';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'hamburger_menu';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-21156dba-fd38-42a1-ae70-8193ca727eec';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Webshop, ECDH link',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<a href="https://www.ecdh.hu/indulas-hamarosan.html">ECDH előregisztráció</a>
<br>
<a href="/alapjarat-webshop">Webshop</a>',
    'format' => 'admin_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'hamb-webshop',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '21156dba-fd38-42a1-ae70-8193ca727eec';
  $display->content['new-21156dba-fd38-42a1-ae70-8193ca727eec'] = $pane;
  $display->panels['center'][0] = 'new-21156dba-fd38-42a1-ae70-8193ca727eec';
  $pane = new stdClass();
  $pane->pid = 'new-bf02116d-4627-4ee3-8264-aaca1eb77219';
  $pane->panel = 'center';
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
    'css_id' => 'hamb-main-menu',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bf02116d-4627-4ee3-8264-aaca1eb77219';
  $display->content['new-bf02116d-4627-4ee3-8264-aaca1eb77219'] = $pane;
  $display->panels['center'][1] = 'new-bf02116d-4627-4ee3-8264-aaca1eb77219';
  $pane = new stdClass();
  $pane->pid = 'new-f39a8e92-64dd-4c96-9c89-9a830dd8fb2b';
  $pane->panel = 'center';
  $pane->type = 'most_popular_terms';
  $pane->subtype = 'most_popular_terms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'date_format' => NULL,
    'override_title' => 1,
    'override_title_text' => 'Népszerű címkék',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'most_popular',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f39a8e92-64dd-4c96-9c89-9a830dd8fb2b';
  $display->content['new-f39a8e92-64dd-4c96-9c89-9a830dd8fb2b'] = $pane;
  $display->panels['center'][2] = 'new-f39a8e92-64dd-4c96-9c89-9a830dd8fb2b';
  $pane = new stdClass();
  $pane->pid = 'new-53eed9d7-1c77-431e-8af0-46fc7d4069e5';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'category_list-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'category_list',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '53eed9d7-1c77-431e-8af0-46fc7d4069e5';
  $display->content['new-53eed9d7-1c77-431e-8af0-46fc7d4069e5'] = $pane;
  $display->panels['center'][3] = 'new-53eed9d7-1c77-431e-8af0-46fc7d4069e5';
  $pane = new stdClass();
  $pane->pid = 'new-746b80f3-8644-41a4-b849-7761d8135d04';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'first5',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '746b80f3-8644-41a4-b849-7761d8135d04';
  $display->content['new-746b80f3-8644-41a4-b849-7761d8135d04'] = $pane;
  $display->panels['center'][4] = 'new-746b80f3-8644-41a4-b849-7761d8135d04';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['hamburger_menu'] = $mini;

  return $export;
}
