<?php
/**
 * @file
 * alapjarat_theme_2019.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function alapjarat_theme_2019_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'hamburger_menu_2019';
  $mini->category = '';
  $mini->admin_title = 'Hamburger menu 2019';
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
  $display->uuid = 'c70e72f9-faa1-4d4e-b953-a989224d3a53';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'hamburger_menu_2019';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b15b748b-44f3-4bb4-91ad-55c6711b258f';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'system-main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Rovatok',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b15b748b-44f3-4bb4-91ad-55c6711b258f';
  $display->content['new-b15b748b-44f3-4bb4-91ad-55c6711b258f'] = $pane;
  $display->panels['center'][0] = 'new-b15b748b-44f3-4bb4-91ad-55c6711b258f';
  $pane = new stdClass();
  $pane->pid = 'new-165f735b-07aa-428a-ab48-052f5a49c0d3';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '165f735b-07aa-428a-ab48-052f5a49c0d3';
  $display->content['new-165f735b-07aa-428a-ab48-052f5a49c0d3'] = $pane;
  $display->panels['center'][1] = 'new-165f735b-07aa-428a-ab48-052f5a49c0d3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['hamburger_menu_2019'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mobil_menu';
  $mini->category = '';
  $mini->admin_title = 'Mobil menu';
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
  $display->uuid = '26eba91f-7735-4032-8b76-fb3fbf5aac1f';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'mobil_menu';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6173366f-7d7f-46a9-bc55-eb883c2a8d3c';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'system-main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Rovatok',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'heading',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6173366f-7d7f-46a9-bc55-eb883c2a8d3c';
  $display->content['new-6173366f-7d7f-46a9-bc55-eb883c2a8d3c'] = $pane;
  $display->panels['center'][0] = 'new-6173366f-7d7f-46a9-bc55-eb883c2a8d3c';
  $pane = new stdClass();
  $pane->pid = 'new-bdc9e45f-1d08-48e6-9c0f-13a72033d5f4';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-calculators';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Kalkulátorok',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'calculator',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'bdc9e45f-1d08-48e6-9c0f-13a72033d5f4';
  $display->content['new-bdc9e45f-1d08-48e6-9c0f-13a72033d5f4'] = $pane;
  $display->panels['center'][1] = 'new-bdc9e45f-1d08-48e6-9c0f-13a72033d5f4';
  $pane = new stdClass();
  $pane->pid = 'new-4c66d4f6-b745-4fb1-a1c4-17bdd0737d21';
  $pane->panel = 'center';
  $pane->type = 'most_popular_terms';
  $pane->subtype = 'most_popular_terms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'count' => '',
    'override_title' => 1,
    'override_title_text' => 'Népszerű címkék',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'most-popular',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4c66d4f6-b745-4fb1-a1c4-17bdd0737d21';
  $display->content['new-4c66d4f6-b745-4fb1-a1c4-17bdd0737d21'] = $pane;
  $display->panels['center'][2] = 'new-4c66d4f6-b745-4fb1-a1c4-17bdd0737d21';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['mobil_menu'] = $mini;

  return $export;
}
