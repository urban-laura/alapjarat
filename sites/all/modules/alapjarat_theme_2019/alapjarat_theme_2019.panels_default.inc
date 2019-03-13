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
  $pane->pid = 'new-3b846a6f-42c5-41bb-b4ce-086e8c83742c';
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
    'css_id' => 'category',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3b846a6f-42c5-41bb-b4ce-086e8c83742c';
  $display->content['new-3b846a6f-42c5-41bb-b4ce-086e8c83742c'] = $pane;
  $display->panels['center'][1] = 'new-3b846a6f-42c5-41bb-b4ce-086e8c83742c';
  $pane = new stdClass();
  $pane->pid = 'new-647e9d7b-7f9e-4481-9b15-5102405cd5e7';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-main-menu-2019';
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
    'css_id' => 'main-menu-2019',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '647e9d7b-7f9e-4481-9b15-5102405cd5e7';
  $display->content['new-647e9d7b-7f9e-4481-9b15-5102405cd5e7'] = $pane;
  $display->panels['center'][2] = 'new-647e9d7b-7f9e-4481-9b15-5102405cd5e7';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bdc9e45f-1d08-48e6-9c0f-13a72033d5f4';
  $display->content['new-bdc9e45f-1d08-48e6-9c0f-13a72033d5f4'] = $pane;
  $display->panels['center'][3] = 'new-bdc9e45f-1d08-48e6-9c0f-13a72033d5f4';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '4c66d4f6-b745-4fb1-a1c4-17bdd0737d21';
  $display->content['new-4c66d4f6-b745-4fb1-a1c4-17bdd0737d21'] = $pane;
  $display->panels['center'][4] = 'new-4c66d4f6-b745-4fb1-a1c4-17bdd0737d21';
  $pane = new stdClass();
  $pane->pid = 'new-1132323e-9f41-49b7-afd7-bb8022d122a2';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'car-partners',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '1132323e-9f41-49b7-afd7-bb8022d122a2';
  $display->content['new-1132323e-9f41-49b7-afd7-bb8022d122a2'] = $pane;
  $display->panels['center'][5] = 'new-1132323e-9f41-49b7-afd7-bb8022d122a2';
  $pane = new stdClass();
  $pane->pid = 'new-e6e0f78b-d9ca-4485-a0c1-2fda79fe0d6e';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Kapcsolat',
    'title_heading' => 'span',
    'body' => '<ul>
<li><a href="tel:+36202995830" class="tel">+36 20 299 5830</a></li>
<li><a href="mailto:info@alapjarat.hu" class="mail">info@alapjarat.hu</a></li>
</ul>
<a href="" class="link">Impresszum</a>
<a href="" class="link">Médiaajánlat</a>
<a href="" class="link">Jogi nyilatkozat</a>',
    'format' => 'admin_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'connection',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'e6e0f78b-d9ca-4485-a0c1-2fda79fe0d6e';
  $display->content['new-e6e0f78b-d9ca-4485-a0c1-2fda79fe0d6e'] = $pane;
  $display->panels['center'][6] = 'new-e6e0f78b-d9ca-4485-a0c1-2fda79fe0d6e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['mobil_menu'] = $mini;

  return $export;
}
