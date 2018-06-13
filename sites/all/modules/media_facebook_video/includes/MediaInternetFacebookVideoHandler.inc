<?php

/**
 * @file
 * Extends the MediaInternetBaseHandler class to handle Facebook videos.
 */

/**
 * Implementation of MediaInternetBaseHandler.
 *
 * @see, hook_media_internet_providers()
 */
class MediaInternetFacebookVideoHandler extends MediaInternetBaseHandler {

  /**
   * Provides facebook patterns for matching the video ID.
   */
  public function parse($embed_code) {
    $patterns = array(
      '@facebook\.com/.*\/videos\/[a-z][a-z]\..*/(\d+)/.*@i',
      '@facebook\.com/video\.php\?v=(\d+)@i',
      '@facebook\.com/.*\/videos\/(\d+)\/.*@i',
      '@facebook\.com/.*\/posts\/(\d+)\/.*@i',
    );

    foreach ($patterns as $pattern) {
      preg_match($pattern, $embed_code, $matches);
      // @TODO: Parse is called often. Refactor so that valid ID is checked
      // when a video is added, but not every time the embed_code is parsed.
      if (isset($matches[1])) {
        return file_stream_wrapper_uri_normalize('facebook://v/' . $matches[1]);
      }
    }
  }

  /**
   * Parses embed code.
   */
  public function claim($embed_code) {
    if ($this->parse($embed_code)) {
      return TRUE;
    }
  }

  /**
   * Gets file object from parsed embed code.
   */
  public function getFileObject() {
    $uri = $this->parse($this->embedCode);
    $file = file_uri_to_object($uri, TRUE);
    return $file;
  }

}
