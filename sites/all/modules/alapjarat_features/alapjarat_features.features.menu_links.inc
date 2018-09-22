<?php
/**
 * @file
 * alapjarat_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function alapjarat_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-admin-menu_add-content:node/add.
  $menu_links['menu-admin-menu_add-content:node/add'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-menu_add-content:node/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-admin-menu_articles:admin/article.
  $menu_links['menu-admin-menu_articles:admin/article'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/article',
    'router_path' => 'admin/article',
    'link_title' => 'Articles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-menu_articles:admin/article',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-admin-menu_authors:admin/structure/taxonomy/published.
  $menu_links['menu-admin-menu_authors:admin/structure/taxonomy/published'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/structure/taxonomy/published',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Authors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-menu_authors:admin/structure/taxonomy/published',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-admin-menu_banner:admin/banner.
  $menu_links['menu-admin-menu_banner:admin/banner'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/banner',
    'router_path' => 'admin/%',
    'link_title' => 'Banner',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-menu_banner:admin/banner',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-admin-menu_events:admin/events.
  $menu_links['menu-admin-menu_events:admin/events'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/events',
    'router_path' => 'admin/events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-menu_events:admin/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-admin-menu_home:<front>.
  $menu_links['menu-admin-menu_home:<front>'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-admin-menu_impress:admin/impresszum.
  $menu_links['menu-admin-menu_impress:admin/impresszum'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/impresszum',
    'router_path' => 'admin/%',
    'link_title' => 'Impress',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-menu_impress:admin/impresszum',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-admin-menu_log-out:user/logout.
  $menu_links['menu-admin-menu_log-out:user/logout'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-menu_log-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-admin-menu_metatags:admin/config/search/metatags.
  $menu_links['menu-admin-menu_metatags:admin/config/search/metatags'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/config/search/metatags',
    'router_path' => 'admin/config/search/metatags',
    'link_title' => 'Metatags',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-menu_metatags:admin/config/search/metatags',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-admin-menu_pages:admin/pages.
  $menu_links['menu-admin-menu_pages:admin/pages'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/pages',
    'router_path' => 'admin/pages',
    'link_title' => 'Pages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-menu_pages:admin/pages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-admin-menu_partners:admin/partner.
  $menu_links['menu-admin-menu_partners:admin/partner'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/partner',
    'router_path' => 'admin/%',
    'link_title' => 'Partners',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-admin-menu_partners:admin/partner',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add content');
  t('Articles');
  t('Authors');
  t('Banner');
  t('Events');
  t('Home');
  t('Impress');
  t('Log out');
  t('Metatags');
  t('Pages');
  t('Partners');

  return $menu_links;
}
