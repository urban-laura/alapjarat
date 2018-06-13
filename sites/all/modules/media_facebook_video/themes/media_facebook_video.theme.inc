<?php

/**
 * Theme and preprocess functions for Media: Facebook.
 */

/**
 * Preprocess function for theme('media_facebook_video').
 */
function media_facebook_video_preprocess_media_facebook_video(&$variables) {
  // Build the URI.
  $wrapper = file_stream_wrapper_get_instance_by_uri($variables['uri']);
  $parts = $wrapper->get_parameters();
  $variables['video_id'] = $parts['v'];

  // Parse options and build the query string. Only add the option to the query
  // array if the option value is not default. Be careful, depending on the
  // wording in media_facebook.formatters.inc, TRUE may be query=0.
  // @see http://developer.facebook.com/player/embedding
  $query = array();

  // Non-query options.
  if ($variables['options']['protocol_specify']) {
    $protocol = $variables['options']['protocol'];
  }
  else {
    $protocol = '//';
  }

  // Add some options as their own template variables.
  $variables['width'] = $variables['options']['width'];

  // Do something useful with the overridden attributes from the file
  // object. We ignore alt and style for now.
  if (isset($variables['options']['attributes']['class'])) {
    if (is_array($variables['options']['attributes']['class'])) {
      $variables['classes_array'] = array_merge($variables['classes_array'], $variables['options']['attributes']['class']);
    }
    else {
      // Provide nominal support for Media 1.x.
      $variables['classes_array'][] = $variables['options']['attributes']['class'];
    }
  }

  // Build the URL with options query string.
  $variables['url'] = url($protocol . 'facebook.com/video.php?v=' . $variables['video_id'], array('query' => $query, 'external' => TRUE));
}
