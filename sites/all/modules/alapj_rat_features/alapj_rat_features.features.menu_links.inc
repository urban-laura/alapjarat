<?php
/**
 * @file
 * alapj_rat_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function alapj_rat_features_menu_default_menu_links() {
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
  // Exported menu link: menu-admin-menu_article:admin/article.
  $menu_links['menu-admin-menu_article:admin/article'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/article',
    'router_path' => 'admin/article',
    'link_title' => 'Article',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-menu_article:admin/article',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
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
      'identifier' => 'menu-admin-menu_authors:admin/structure/taxonomy/published',
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
  // Exported menu link: menu-admin-menu_events:admin/events.
  $menu_links['menu-admin-menu_events:admin/events'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/events',
    'router_path' => 'admin/%',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-menu_events:admin/events',
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
  // Exported menu link: menu-admin-menu_impress:admin/impress.
  $menu_links['menu-admin-menu_impress:admin/impress'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/impress',
    'router_path' => 'admin',
    'link_title' => 'Impress',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-menu_impress:admin/impress',
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
      'identifier' => 'menu-admin-menu_log-out:user/logout',
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
      'identifier' => 'menu-admin-menu_pages:admin/pages',
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
  // Exported menu link: menu-admin-menu_partners:admin/partners.
  $menu_links['menu-admin-menu_partners:admin/partners'] = array(
    'menu_name' => 'menu-admin-menu',
    'link_path' => 'admin/partners',
    'router_path' => 'admin/%',
    'link_title' => 'Partners',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-menu_partners:admin/partners',
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
  t('Article');
  t('Authors');
  t('Events');
  t('Home');
  t('Impress');
  t('Log out');
  t('Pages');
  t('Partners');

  return $menu_links;
}
