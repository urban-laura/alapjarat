<?php

/**
 * @file
 * File formatters for Facebook videos.
 */

/**
 * Implements hook_file_formatter_info().
 */
function media_facebook_video_file_formatter_info() {
  $formatters['media_facebook_video'] = array(
    'label' => t('Facebook Video'),
    'file types' => array('video'),
    'default settings' => array(
      'width' => 640,
      'preview_uri' => 'facebook://v/21869117',
      'protocol' => 'https://',
      'protocol_specify' => FALSE,
    ),
    'view callback' => 'media_facebook_video_file_formatter_video_view',
    'settings callback' => 'media_facebook_video_file_formatter_video_settings',
    'mime types' => array('video/facebook'),
  );

  $formatters['media_facebook_image'] = array(
    'label' => t('Facebook Preview Image'),
    'file types' => array('video'),
    'default settings' => array(
      'image_style' => '',
    ),
    'view callback' => 'media_facebook_video_file_formatter_image_view',
    'settings callback' => 'media_facebook_video_file_formatter_image_settings',
    'mime types' => array('video/facebook'),
  );

  return $formatters;
}

/**
 * Implements hook_file_formatter_FORMATTER_view().
 */
function media_facebook_video_file_formatter_video_view($file, $display, $langcode) {
  $scheme = file_uri_scheme($file->uri);

  if ($scheme == 'facebook') {
    $element = array(
      '#theme' => 'media_facebook_video',
      '#uri' => $file->uri,
      '#options' => array(),
    );

    // Fake a default for attributes so the ternary doesn't choke.
    $display['settings']['attributes'] = array();

    foreach (array('width', 'protocol', 'protocol_specify', 'attributes') as $setting) {
      $element['#options'][$setting] = isset($file->override[$setting]) ? $file->override[$setting] : $display['settings'][$setting];
    }

    return $element;
  }
}

/**
 * Implements hook_file_formatter_FORMATTER_settings().
 */
function media_facebook_video_file_formatter_video_settings($form, &$form_state, $settings) {
  $element = array();

  $element['width'] = array(
    '#title' => t('Width'),
    '#type' => 'textfield',
    '#default_value' => $settings['width'],
    '#element_validate' => array('_facebook_validate_video_width'),
  );

  // @see http://developer.facebook.com/player/embedding
  $element['protocol_specify'] = array(
    '#title' => t('Specify an http protocol'),
    '#type' => 'checkbox',
    '#default_value' => $settings['protocol_specify'],
    '#description' => t('An explicit protocol may be necessary for videos embedded in RSS feeds and emails. If no protocol is specified, iframes will be protocol relative.'),
  );
  $element['protocol'] = array(
    '#title' => t('Iframe protocol'),
    '#type' => 'radios',
    '#default_value' => $settings['protocol'],
    '#options' => array(
      'http://' => t('HTTP'),
      'https://' => t('HTTPS'),
    ),
    '#states' => array(
      'invisible' => array(
        ':input[name="displays[media_facebook_video][settings][protocol_specify]"]' => array('checked' => FALSE),
      ),
    ),
  );

  return $element;
}

/**
 * Validation for width.
 */
function media_facebook_video_validate_video_width($element, &$form_state, $form) {
  // Check if the value is a number with decimal, percentage sign or "auto".
  $pattern = '/^(auto|([0-9]*(\.[0-9]+)?%?))$/';
  if (!empty($element['#value']) && !preg_match($pattern, $element['#value'])) {
    form_error($element, t('The value entered for @dimension is invalid. Please insert a unitless integer for pixels, a percent, or "auto". Note that percent and auto may not function correctly depending on the browser and doctype.', array('@dimension' => $element['#title'])));
  }
}

/**
 * Implements hook_file_formatter_FORMATTER_view().
 */
function media_facebook_video_file_formatter_image_view($file, $display, $langcode) {
  $scheme = file_uri_scheme($file->uri);

  if ($scheme == 'facebook') {
    $wrapper = file_stream_wrapper_get_instance_by_uri($file->uri);
    $image_style = $display['settings']['image_style'];
    $valid_image_styles = image_style_options(FALSE);

    if (empty($image_style) || !isset($valid_image_styles[$image_style])) {
      $element = array(
        '#theme' => 'image',
        '#path' => $wrapper->getOriginalThumbnailPath(),
        '#alt' => isset($file->override['attributes']['alt']) ? $file->override['attributes']['alt'] : $file->filename,
      );
    }
    else {
      $element = array(
        '#theme' => 'image_style',
        '#style_name' => $image_style,
        '#path' => $wrapper->getLocalThumbnailPath(),
        '#alt' => isset($file->override['attributes']['alt']) ? $file->override['attributes']['alt'] : $file->filename,
      );
    }

    return $element;
  }
}

/**
 * Implements hook_file_formatter_FORMATTER_settings().
 */
function media_facebook_video_file_formatter_image_settings($form, &$form_state, $settings) {
  $element = array();

  $element['image_style'] = array(
    '#title' => t('Image style'),
    '#type' => 'select',
    '#options' => image_style_options(FALSE),
    '#default_value' => $settings['image_style'],
    '#empty_option' => t('None (original image)'),
  );

  return $element;
}
