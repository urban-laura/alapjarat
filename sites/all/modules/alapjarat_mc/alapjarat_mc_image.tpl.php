<div class="alapjarat-mc-gallery-item gallery-item-image">
  <a href="<?php print $item['destination']; ?>" rel="lightbox[roadtrip]">
    <div class="item-image"><?php print $item['thumbnail'];?></div>
  </a>
  <div class="item-title"><?php print $item['title'];?></div>
  <div class="item-date"><?php print date('Y-m-d', $item['publishDate']);?></div>
</div>