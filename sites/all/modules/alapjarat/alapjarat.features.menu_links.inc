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
  // Exported menu link: menu-social-menu_f:http://facebook.com/alapjarat.
  $menu_links['menu-social-menu_f:http://facebook.com/alapjarat'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'http://facebook.com/alapjarat',
    'router_path' => '',
    'link_title' => 'F',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_f:http://facebook.com/alapjarat',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_g:https://plus.google.com/108474613595405105501?hl=hu.
  $menu_links['menu-social-menu_g:https://plus.google.com/108474613595405105501?hl=hu'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://plus.google.com/108474613595405105501?hl=hu',
    'router_path' => '',
    'link_title' => 'G',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_g:https://plus.google.com/108474613595405105501?hl=hu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_in:https://instagram.com/alapjarat.
  $menu_links['menu-social-menu_in:https://instagram.com/alapjarat'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://instagram.com/alapjarat',
    'router_path' => '',
    'link_title' => 'In',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_in:https://instagram.com/alapjarat',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_p:https://pinterest.com/alapjarat.
  $menu_links['menu-social-menu_p:https://pinterest.com/alapjarat'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://pinterest.com/alapjarat',
    'router_path' => '',
    'link_title' => 'P',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_p:https://pinterest.com/alapjarat',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_t:http://twitter.com/alapjaratblog.
  $menu_links['menu-social-menu_t:http://twitter.com/alapjaratblog'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'http://twitter.com/alapjaratblog',
    'router_path' => '',
    'link_title' => 'T',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_t:http://twitter.com/alapjaratblog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-social-menu_y:https://www.youtube.com/channel/UCueleOZ2QFAaVSHXheZlFig.
  $menu_links['menu-social-menu_y:https://www.youtube.com/channel/UCueleOZ2QFAaVSHXheZlFig'] = array(
    'menu_name' => 'menu-social-menu',
    'link_path' => 'https://www.youtube.com/channel/UCueleOZ2QFAaVSHXheZlFig',
    'router_path' => '',
    'link_title' => 'Y',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-social-menu_y:https://www.youtube.com/channel/UCueleOZ2QFAaVSHXheZlFig',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Big world');
  t('Calculators');
  t('Communal');
  t('F');
  t('G');
  t('Helpful info');
  t('Home');
  t('Impress');
  t('In');
  t('Legal notice');
  t('Media');
  t('Media offer');
  t('P');
  t('Partners');
  t('Premium');
  t('Race');
  t('T');
  t('Tech');
  t('Test');
  t('Y');

  return $menu_links;
}
