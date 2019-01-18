<?php
/**
 * @file
 * alapjarat_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function alapjarat_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-admin-menu.
  $menus['menu-admin-menu'] = array(
    'menu_name' => 'menu-admin-menu',
    'title' => 'Admin menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-second-menu.
  $menus['menu-second-menu'] = array(
    'menu_name' => 'menu-second-menu',
    'title' => 'Second Menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-writer-menu.
  $menus['menu-writer-menu'] = array(
    'menu_name' => 'menu-writer-menu',
    'title' => 'Writer menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Admin menu');
  t('Main menu');
  t('Second Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Writer menu');

  return $menus;
}
