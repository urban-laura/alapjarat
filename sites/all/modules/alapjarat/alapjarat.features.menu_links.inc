<?php
/**
 * @file
 * alapjarat.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function alapjarat_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_big-world:taxonomy/term/4.
  $menu_links['main-menu_big-world:taxonomy/term/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Big world',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_big-world:taxonomy/term/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_communal:taxonomy/term/11.
  $menu_links['main-menu_communal:taxonomy/term/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/11',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Communal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_communal:taxonomy/term/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_helpful-info:taxonomy/term/1.
  $menu_links['main-menu_helpful-info:taxonomy/term/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Helpful info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_helpful-info:taxonomy/term/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_media:taxonomy/term/10.
  $menu_links['main-menu_media:taxonomy/term/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/10',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Media',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_media:taxonomy/term/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_premium:taxonomy/term/12.
  $menu_links['main-menu_premium:taxonomy/term/12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/12',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Premium',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_premium:taxonomy/term/12',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_race:taxonomy/term/9.
  $menu_links['main-menu_race:taxonomy/term/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/9',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Race',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_race:taxonomy/term/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_tech:taxonomy/term/3.
  $menu_links['main-menu_tech:taxonomy/term/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/3',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Tech',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_tech:taxonomy/term/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_test:taxonomy/term/2.
  $menu_links['main-menu_test:taxonomy/term/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Test',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_test:taxonomy/term/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-second-menu_calculators:<front>.
  $menu_links['menu-second-menu_calculators:<front>'] = array(
    'menu_name' => 'menu-second-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Calculators',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-second-menu_calculators:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-second-menu_home:<front>.
  $menu_links['menu-second-menu_home:<front>'] = array(
    'menu_name' => 'menu-second-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-second-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-second-menu_impress:<front>.
  $menu_links['menu-second-menu_impress:<front>'] = array(
    'menu_name' => 'menu-second-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Impress',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-second-menu_impress:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-second-menu_legal-notice:<front>.
  $menu_links['menu-second-menu_legal-notice:<front>'] = array(
    'menu_name' => 'menu-second-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Legal notice',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-second-menu_legal-notice:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-second-menu_media-offer:<front>.
  $menu_links['menu-second-menu_media-offer:<front>'] = array(
    'menu_name' => 'menu-second-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Media offer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-second-menu_media-offer:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-second-menu_partners:<front>.
  $menu_links['menu-second-menu_partners:<front>'] = array(
    'menu_name' => 'menu-second-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Partners',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-second-menu_partners:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-second-menu_relationship:<front>.
  $menu_links['menu-second-menu_relationship:<front>'] = array(
    'menu_name' => 'menu-second-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Relationship',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-second-menu_relationship:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Big world');
  t('Calculators');
  t('Communal');
  t('Helpful info');
  t('Home');
  t('Impress');
  t('Legal notice');
  t('Media');
  t('Media offer');
  t('Partners');
  t('Premium');
  t('Race');
  t('Relationship');
  t('Tech');
  t('Test');

  return $menu_links;
}
