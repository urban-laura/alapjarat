<?php

/**
 * @file
 * Extends the MediaReadOnlyStreamWrapper class to handle Facebook videos.
 */

/**
 * Creates a "new MediaFacebookVideoStreamWrapper('facebook://v/[video-code]')".
 */
class MediaFacebookVideoStreamWrapper extends MediaReadOnlyStreamWrapper {
  protected $baseUrl = 'http://facebook.com';

  /**
   * Gets Mime Type.
   */
  public static function getMimeType($uri, $mapping = NULL) {
    return 'video/facebook';
  }

  /**
   * Interpolates URL.
   */
  public function interpolateUrl() {
    if ($parameters = $this->get_parameters()) {
      return $this->baseUrl . '/' . $parameters['v'];
    }
  }

  /**
   * Get Local Thumbnail Path.
   */
  public function getLocalThumbnailPath() {
    $parts = $this->get_parameters();
    $local_path = 'public://media-facebook-video/' . check_plain($parts['v']) . '.jpg';
    return $local_path;
  }

}
