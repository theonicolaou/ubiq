<?php

/**
 * @file
 * Output news items into two columns
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<?php $lines = array_chunk($rows, 2, TRUE); ?>
  
<?php foreach($lines as $line): ?>
  
  <div class="row">
      
      <?php foreach($line as $id => $row): ?>
      
        <div class="large-6 columns">
            <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
              <?php print $row; ?>
            </div>
        </div>
      
      <?php endforeach; ?>
        
  </div>

<?php endforeach; ?>    