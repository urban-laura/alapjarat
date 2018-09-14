<?php
/**
 * @file
 * alapjarat_features.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function alapjarat_features_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => 'Alapjárat - Magyar Autós Közösség',
      ),
      'description' => array(
        'value' => 'Autós hírek, videótesztek, hasznos infók a mindennapi autózáshoz. Érdekességek a hazai- és nemzetközi autó eseményekről. A magyar autósok közösségi portálja.',
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
    ),
  );

  // Exported Metatag config instance: node:a_article.
  $config['node:a_article'] = array(
    'instance' => 'node:a_article',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:field_title2] | [site:name]',
      ),
    ),
  );

  // Exported Metatag config instance: node:pages.
  $config['node:pages'] = array(
    'instance' => 'node:pages',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '',
      ),
    ),
  );

  return $config;
}
