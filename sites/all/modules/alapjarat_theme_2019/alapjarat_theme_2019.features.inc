<?php
/**
 * @file
 * alapjarat_theme_2019.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alapjarat_theme_2019_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function alapjarat_theme_2019_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function alapjarat_theme_2019_image_default_styles() {
  $styles = array();

  // Exported image style: article4.
  $styles['article4'] = array(
    'label' => 'article4',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: author_picture.
  $styles['author_picture'] = array(
    'label' => 'Author picture',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 40,
          'height' => 40,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: first_5_article.
  $styles['first_5_article'] = array(
    'label' => 'First 5 article',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 310,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
