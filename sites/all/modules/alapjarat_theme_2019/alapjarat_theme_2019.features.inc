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
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
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

  // Exported image style: big_2019.
  $styles['big_2019'] = array(
    'label' => 'big 2019',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 194,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: first_5_article.
  $styles['first_5_article'] = array(
    'label' => 'Right First 5 article',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 310,
          'height' => 162,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: impress_2019.
  $styles['impress_2019'] = array(
    'label' => 'impress 2019',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 255,
          'height' => 255,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: media_gallery_image.
  $styles['media_gallery_image'] = array(
    'label' => 'Media gallery image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 320,
          'height' => 180,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: partners_in_footer.
  $styles['partners_in_footer'] = array(
    'label' => 'partners in footer',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 20,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_2019.
  $styles['small_2019'] = array(
    'label' => 'small 2019',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 146,
          'height' => 83,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: social_media.
  $styles['social_media'] = array(
    'label' => 'Social Media',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 29,
          'height' => 29,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: taxonomy_page.
  $styles['taxonomy_page'] = array(
    'label' => 'taxonomy page',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 255,
          'height' => 140,
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
function alapjarat_theme_2019_node_info() {
  $items = array(
    'social_media_menu' => array(
      'name' => t('Social Media Menu'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Cím'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
