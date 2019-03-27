<div class="alapjarat-mc-gallery-item alapjarat-mc-gallery-item-image node-<?php print $item['content']; ?> <?php if (isset($item['siblings'])) { print 'gallery'; } ?>">
  <div class="item-image"><?php print $item['thumbnail'];?></div>
  <a class="mc-image" href="<?php print $item['destination']; ?>" rel="<?php print $item['groupName']; ?>">
  </a>
  <div class="item-title"><?php print $item['title'];?></div>
  <?php
	if (isset($item['siblings'])) {
		foreach ($item['siblings'] as $sibling) {
			print('<a href="' . $sibling .'" rel="' . $item['groupName'] . '" style="display: none;"></a>');
		}
	}
  ?>
</div>
