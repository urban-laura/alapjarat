<?php

/**
 * @file
 * video player embed.
 */

/**
 * Template file for theme('media_facebook_video').
 */
?>
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&version=v2.3";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
<div class="<?php print $classes; ?> media-facebook-<?php print $id; ?>">
  <div class="fb-video" data-allowfullscreen="true" data-href="<?php print $url; ?>">
  <div class="fb-xfbml-parse-ignore">
</div>
