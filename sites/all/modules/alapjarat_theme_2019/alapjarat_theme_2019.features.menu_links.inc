<?php
/**
 * @file
 * alapjarat_theme_2019.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function alapjarat_theme_2019_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-main-menu-2019_mdia:media-collection/all.
  $menu_links['menu-main-menu-2019_mdia:media-collection/all'] = array(
    'menu_name' => 'menu-main-menu-2019',
    'link_path' => 'media-collection/all',
    'router_path' => 'media-collection/all',
    'link_title' => 'Média',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-main-menu-2019_mdia:media-collection/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Média');

  return $menu_links;
}
