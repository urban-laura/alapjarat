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
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'shortlink' => array(
        'value' => '[site:url]',
      ),
      'og:url' => array(
        'value' => 'https://alapjarat.hu',
      ),
      'og:description' => array(
        'value' => 'Autós hírek, videótesztek, hasznos infók a mindennapi autózáshoz. Érdekességek a hazai- és nemzetközi autó eseményekről. A magyar autósok közösségi portálja.',
      ),
      'og:image' => array(
        'value' => 'https://alapjarat.hu/sites/default/files/alapjarat_logo.png',
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
        'value' => '[node:field_titlet] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:field_meta_description]',
      ),
      'image_src' => array(
        'value' => '[node:field_image]',
      ),
      'og:description' => array(
        'value' => '[node:field_meta_description]',
      ),
      'og:image' => array(
        'value' => '[node:field_image]',
      ),
      'og:image:width' => array(
        'value' => 1200,
      ),
      'og:image:height' => array(
        'value' => 630,
      ),
      'article:tag' => array(
        'value' => '[node:field_tagsa]',
      ),
      'twitter:creator' => array(
        'value' => '@alapjaratblog',
      ),
      'twitter:description' => array(
        'value' => '[node:field_meta_description]',
      ),
      'twitter:image' => array(
        'value' => '[node:field_image]',
      ),
    ),
  );

  // Exported Metatag config instance: node:pages.
  $config['node:pages'] = array(
    'instance' => 'node:pages',
    'disabled' => FALSE,
    'config' => array(
      'og:image' => array(
        'value' => '[node:field_image]',
      ),
    ),
  );

  return $config;
}
