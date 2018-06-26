<?php
/**
 * @file
 * alapjarat.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alapjarat_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function alapjarat_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function alapjarat_image_default_styles() {
  $styles = array();

  // Exported image style: 4_small.
  $styles['4_small'] = array(
    'label' => '4_small',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 275,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: alapjarat.
  $styles['alapjarat'] = array(
    'label' => 'alapjarat_article',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 730,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: alapjarat_admin.
  $styles['alapjarat_admin'] = array(
    'label' => '1_big',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: big.
  $styles['big'] = array(
    'label' => 'Big',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 334,
          'height' => 174,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: category.
  $styles['category'] = array(
    'label' => 'category',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 213,
          'height' => 111,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: helpful_small.
  $styles['helpful_small'] = array(
    'label' => 'helpful_small',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 135,
          'height' => 70,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: impresszum.
  $styles['impresszum'] = array(
    'label' => 'Impress',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 130,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: premium_partner.
  $styles['premium_partner'] = array(
    'label' => 'premium_partner',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 158,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: recreation_partners.
  $styles['recreation_partners'] = array(
    'label' => 'recreation_partners',
    'effects' => array(
      13 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 104,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: right.
  $styles['right'] = array(
    'label' => 'right',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 116,
          'height' => 116,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: world_small.
  $styles['world_small'] = array(
    'label' => 'world_small',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 139,
          'height' => 73,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function alapjarat_node_info() {
  $items = array(
    'a_article' => array(
      'name' => t('Alapjárat Article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'banner' => array(
      'name' => t('Banner (random)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title (invisible)'),
      'help' => '',
    ),
    'banner_fix_' => array(
      'name' => t('Banner (fix)'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title (invisible)'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Event name'),
      'help' => '',
    ),
    'impress' => array(
      'name' => t('Impress'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pages' => array(
      'name' => t('Pages'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'partners' => array(
      'name' => t('Partners'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title (invisible)'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
