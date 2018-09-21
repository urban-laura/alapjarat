<?php
/**
 * @file
 * Template for an amp-dfp-tag.
 *
 * Available variables:
 * - height: The height of the ad.
 * - width: The width of the ad.
 * - slot: The DFP ad slot string.
 * - amp_ad_json: Other settings, such as targeting, encoded in json.
 * - tag: The full Drupal DFP tag object
 *
 * @see template_preprocess_amp_ad()
 */
?>
<amp-ad type="doubleclick"
        height="<?php print $height; ?>"
        width="<?php print $width; ?>"
        data-slot="<?php print $slot; ?>"
        json='<?php print $amp_ad_json; ?>'
  >
</amp-ad>