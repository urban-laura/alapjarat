<?php
/**
 * @file
 * alapjarat_theme_2019.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function alapjarat_theme_2019_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-calculators.
  $menus['menu-calculators'] = array(
    'menu_name' => 'menu-calculators',
    'title' => 'Calculators',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Calculators');

  return $menus;
}
