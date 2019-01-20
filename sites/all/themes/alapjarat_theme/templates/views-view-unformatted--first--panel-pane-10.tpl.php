<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

if (module_exists('fix_article_top')) {
	$fixed_article = fix_article_exists();
	if (!empty($fixed_article)) {
	  $o1 = $rows[1];
	  $o2 = $rows[2];

	  $rows[1] = $rows[3];
	  $rows[2] = $o1;
	  $rows[3] = $o2;
	}
}

?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]): ?> class="<?php print $classes_array[$id]; ?>"<?php endif; ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
