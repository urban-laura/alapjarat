<?php
/**
 * @file
 * Template for an amp-video.
 *
 * Available variables:
 * - video_attributes: The HTML attributes for the amp-video element.
 * - src: A URL for a video file.
 * - scheme: A string for the scheme of the video src URL, i.e. http or https.
 *
 * @see template_preprocess_amp_video()
 */
?>
<?php if ($scheme == 'https'): ?>
  <amp-video <?php print $video_attributes; ?> src="<?php print $src; ?>" layout="responsive" controls>
    <div fallback>
      <p>Your broser doesn't support HTML5 video</p>
    </div>
  </amp-video>
<?php endif; ?>
