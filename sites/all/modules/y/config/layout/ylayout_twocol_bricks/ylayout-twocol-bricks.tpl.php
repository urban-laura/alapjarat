<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * each column roughly equal in width. It is 5 rows high; the top
 * middle and bottom rows contain 1 column, while the second
 * and fourth rows contain 2 columns.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top']: Content in the top row.
 *   - $content['left_above']: Content in the left column in row 2.
 *   - $content['right_above']: Content in the right column in row 2.
 *   - $content['middle']: Content in the middle row.
 *   - $content['left_below']: Content in the left column in row 4.
 *   - $content['right_below']: Content in the right column in row 4.
 *   - $content['right']: Content in the right column.
 *   - $content['bottom']: Content in the bottom row.
 */
?>
<div class="y-display ylayout-2col-bricks clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <?php if (!empty($content['top'])) { ?>
  <div class="y-layout ylayout-col-top">
    <div class="inside"><?php print render($content['top']); ?></div>
  </div>
  <?php }
    if (!empty($content['left_above']) || !empty($content['right_above']) ) { ?>
  <div class="center-wrapper">
    <?php if( !empty($content['left_above'])) { ?>
    <div class="y-layout ylayout-col-first">
      <div class="inside"><?php print render($content['left_above']); ?></div>
    </div>
    <?php }
      if( !empty($content['right_above'])) { ?>
    <div class="y-layout ylayout-col-last">
      <div class="inside"><?php print render($content['right_above']); ?></div>
    </div>
    <?php } ?>
  </div>
  <?php }
    if (!empty($content['middle'])) { ?>
  <div class="y-layout ylayout-col-middle">
    <div class="inside"><?php print render($content['middle']); ?></div>
  </div>
  <?php }
  if (!empty($content['left_below']) || !empty($content['right_below']) ) { ?>
  <div class="center-wrapper">
    <?php if( !empty($content['left_below'])) { ?>
    <div class="y-layout ylayout-col-first">
      <div class="inside"><?php print render($content['left_below']); ?></div>
    </div>
    <?php }
    if( !empty($content['right_below'])) { ?>
    <div class="y-layout ylayout-col-last">
      <div class="inside"><?php print render($content['right_below']); ?></div>
    </div>
    <?php } ?>
  </div>
  <?php }
  if (!empty($content['bottom'])) { ?>
  <div class="y-layout ylayout-col-bottom">
    <div class="inside"><?php print render($content['bottom']); ?></div>
  </div>
  <?php } ?>
</div>
