<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * each column roughly equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 */
?>
<div class="row" <?php !empty($css_id) ? print 'id="' . $css_id . '"' : ''; ?>>
  <div class="large-12 columns">
    <?php print $content['top']; ?>
  </div>
</div>
<div class="row">
  <div class="large-6 columns">
    <?php print $content['testimonial_left']; ?>
  </div>
  <div class="large-6 columns">
    <?php print $content['testimonial_right']; ?>
  </div>
</div>
<div class="row" <?php !empty($css_id) ? print 'id="' . $css_id . '"' : ''; ?>>
  <div class="large-12 columns">
    <?php print $content['bottom']; ?>
  </div>
</div>