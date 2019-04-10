<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php 
  endif; 
  $c = 0;
?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]): ?> class="<?php print $classes_array[$id]; ?>"<?php endif; ?>>
    <?php print $row; ?>
  </div>
  <?php  
    if ($c == 0) { ?>
      <div id="adoceangemhulanmisqqjf"></div>
      <script type="text/javascript">
      /* (c)AdOcean 2003-2019, alapjarat.hu.osszoldal.640x360_1 */
      ado.slave('adoceangemhulanmisqqjf', {myMaster: 'w0D8GanBjeVLul4hdqqyvqK8n.yv.z.VJ02vJJLUHYL.M7' });
      </script>
    <?php
    }
    $c++;
  ?>
<?php endforeach; ?>
