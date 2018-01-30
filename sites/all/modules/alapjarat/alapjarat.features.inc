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

  // Exported image style: alapjarat.
  $styles['alapjarat'] = array(
    'label' => 'alapjarat',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 728,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: alapjarat_admin.
  $styles['alapjarat_admin'] = array(
    'label' => 'alapjarat_admin',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 569,
          'height' => 360,
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
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
