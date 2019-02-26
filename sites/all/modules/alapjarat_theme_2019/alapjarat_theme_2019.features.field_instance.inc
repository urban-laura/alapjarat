<?php
/**
 * @file
 * alapjarat_theme_2019.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function alapjarat_theme_2019_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-social_media_menu-field_name_link'.
  $field_instances['node-social_media_menu-field_name_link'] = array(
    'bundle' => 'social_media_menu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_name_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'admin_html' => 'admin_html',
          'filtered_html' => 'filtered_html',
          'fullhtml' => 'fullhtml',
          'link' => 'link',
          'plain_text' => 'plain_text',
          'text' => 'text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'admin_html' => array(
              'weight' => -7,
            ),
            'filtered_html' => array(
              'weight' => -6,
            ),
            'fullhtml' => array(
              'weight' => -9,
            ),
            'link' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => -10,
            ),
            'text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-social_media_menu-field_picture'.
  $field_instances['node-social_media_menu-field_picture'] = array(
    'bundle' => 'social_media_menu',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_picture',
    'label' => 'Picture',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'plupload' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_1_big' => 0,
          'image_4_small' => 0,
          'image_alapjarat' => 0,
          'image_amp_metadata_content_image_min_696px_wide' => 0,
          'image_amp_metadata_logo_600x60' => 0,
          'image_article3' => 0,
          'image_article4' => 0,
          'image_author_picture' => 0,
          'image_big' => 0,
          'image_big_2019' => 0,
          'image_category' => 0,
          'image_first_5_article' => 0,
          'image_helpful_small' => 0,
          'image_impresszum' => 0,
          'image_juicebox_large' => 0,
          'image_juicebox_medium' => 0,
          'image_juicebox_small' => 0,
          'image_juicebox_square_thumbnail' => 0,
          'image_large' => 0,
          'image_media_thumbnail' => 0,
          'image_medium' => 0,
          'image_partners_in_footer' => 0,
          'image_premium_partner' => 0,
          'image_recreation_partners' => 0,
          'image_right' => 0,
          'image_small_2019' => 0,
          'image_thumbnail' => 0,
          'image_world_small' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 43,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Link');
  t('Picture');

  return $field_instances;
}
