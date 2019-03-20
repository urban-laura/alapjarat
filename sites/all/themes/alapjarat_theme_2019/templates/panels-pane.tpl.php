<?php
/**
 * @file Panels-pane.tpl.php
 * Main panel pane template.
 *
 * Variables available:
 * - $pane->type: the content type inside this pane
 * - $pane->subtype: The subtype, if applicable. If a view it will be the
 *   view name; if a node it will be the nid, etc.
 * - $title: The title of the content
 * - $content: The actual content
 * - $links: Any links associated with the content
 * - $more: An optional 'more' link (destination only)
 * - $admin_links: Administrative links associated with the content
 * - $feeds: Any feed icons or associated with the content
 * - $display: The complete panels display object containing all kinds of
 *   data including the contexts and all of the other panes being displayed.
 */

if ($pane->subtype == 'node:published') {
  $date_format = 'Y-m-d, H:i';
  $node = node_load($display->args[0]);    
  if ($node->published_at) {
    $content = date($date_format, $node->published_at);
  }

  // Need to be make difference between publishing and updating date in articles
  if (($node->published_at && $node->published_at !== $node->changed) || (!$node->published_at && $node->created !== $node->changed && date($date_format, $node->changed) !== '2018-09-18')) {
    $title = t('Updated:');
    $content = date($date_format, $node->changed);
  }

  // Articles before published_at field/module added not populated with this data
  // published_at module saved this field on old articles next time article/node saved (and was already published)
  // so if published date is the same as changed date but it's far away from created date its an update in real
  $diff = ($node->published_at - $node->created) / 86400;
  if ($node->published_at && $node->published_at == $node->changed && $diff > 14) {
    $title = t('Updated:');
  }

}
?>
<?php if ($pane_prefix): ?>
  <?php print $pane_prefix; ?>
<?php endif; ?>
<div class="<?php print $classes; ?>" <?php print $id; ?> <?php print $attributes; ?>>
  <?php if ($admin_links): ?>
    <?php print $admin_links; ?>
  <?php endif; ?>

  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <<?php print $title_heading; ?><?php print $title_attributes; ?>>
      <?php print $title; ?>
    </<?php print $title_heading; ?>>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($feeds): ?>
    <div class="feed">
      <?php print $feeds; ?>
    </div>
  <?php endif; ?>

  <div class="pane-content">
   <?php 
   print render($content); 
   ?>
   
  </div>
  <?php if ($links): ?>
    <div class="links">
      <?php print $links; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <div class="more-link">
      <?php print $more; ?>
    </div>
  <?php endif; ?>
</div>
<?php if ($pane_suffix): ?>
  <?php print $pane_suffix; ?>
<?php endif; ?>
