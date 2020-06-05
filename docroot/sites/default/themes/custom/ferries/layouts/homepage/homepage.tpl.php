<?php
/**
 * @file
 * Template for the Washington State Ferries home page.
 *
 * This template provides an upper three column panel display layout,
 * with each column roughly equal in width. The middle row contains 1
 * column and the bottom row contains 2 columns with each column roughly
 * equal in width.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left_above']: Content in the left column in row 1.
 *   - $content['center_above']: Content in the center column in row 1.
 *   - $content['right_above']: Content in the right column in row 1.
 *   - $content['middle']: Content in the middle row.
 *   - $content['left_below']: Content in the left column in row 3.
 *   - $content['right_below']: Content in the right column in row 3.
 */
?>
<div class="panel-display panel-3col-bricks clearfix hero" <?php if (!empty($css_id)) {print "id=\"$css_id\"";} ?>>
  <div class="center-wrapper">
    <div class="panel-panel panel-col-first">
      <div class="inside"><?php print $content['left_above']; ?></div>
    </div>
    <div class="panel-panel panel-col">
      <div class="inside"><?php print $content['center_above']; ?></div>
    </div>
    <div class="panel-panel panel-col-last">
      <div class="inside"><?php print $content['right_above']; ?></div>
    </div>
  </div>
  <div class="panel-panel panel-col-middle">
    <div class="inside"><?php print $content['middle']; ?></div>
  </div>
  <div class="center-wrapper">
    <div class="panel-panel panel-col-left">
      <div class="inside"><?php print $content['left_below']; ?></div>
    </div>
    <div class="panel-panel panel-col-right">
      <div class="inside"><?php print $content['right_below']; ?></div>
    </div>
  </div>
</div>
