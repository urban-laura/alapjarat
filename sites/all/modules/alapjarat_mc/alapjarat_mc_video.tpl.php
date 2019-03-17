<div class="alapjarat-mc-gallery-item alapjarat-mc-gallery-item-video">
  <div class="item-image">
  	<img src="<?php print $item['thumbnail']['url'];?>">
    <a href="<?php print $item['destination']; ?>" rel="lightframe">
  	  <div class="play-icon"></div>
    </a>
  </div>
  <div class="item-title"><?php print $item['title'];?></div>
  <div class="item-date"><?php print date('Y-m-d', $item['publishDate']);?></div>
</div>