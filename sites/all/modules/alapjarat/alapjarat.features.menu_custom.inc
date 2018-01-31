<?php
/**
 * @file
 * alapjarat.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function alapjarat_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-second-menu.
  $menus['menu-second-menu'] = array(
    'menu_name' => 'menu-second-menu',
    'title' => 'Second Menu',
    'description' => '',
  );
  // Exported menu: menu-social-menu.
  $menus['menu-social-menu'] = array(
    'menu_name' => 'menu-social-menu',
    'title' => 'Social Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Second Menu');
  t('Social Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
