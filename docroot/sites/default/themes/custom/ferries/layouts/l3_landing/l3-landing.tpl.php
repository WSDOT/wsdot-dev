<?php
/**
 * @file
 * Template for the Washington State Ferries L3 landing page.
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
 *   - $content['top']: Content in the top row.
 *   - $content['left_above']: Content in the left column in row 2.
 *   - $content['right_above']: Content in the right column in row 2.
 *   - $content['middle']: Content in the middle row.
 *   - $content['far_left_below']: Content in the far left column in row 4.
 *   - $content['left_below']: Content in the left column in row 4.
 *   - $content['right_below']: Content in the right column in row 4.
*    - $content['far_right_below']: Content in the far right column in row 4.
 */
?>
<div class="panel-display panel-3col-bricks clearfix" <?php if (!empty($css_id)) {print "id=\"$css_id\"";} ?>>
  <div class="panel-panel panel-col-top">
    <div class="inside"><?php print $content['top']; ?></div>
  </div>
  <div class="center-wrapper">
    <div class="panel-panel panel-col-first">
      <div class="inside"><?php print $content['left_above']; ?></div>
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
      <div class="inside"><?php print $content['far_left_below']; ?></div>
    </div>
    <div class="panel-panel panel-col-left">
      <div class="inside"><?php print $content['left_below']; ?></div>
    </div>
    <div class="panel-panel panel-col-right">
      <div class="inside"><?php print $content['right_below']; ?></div>
    </div>
    <div class="panel-panel panel-col-right">
      <div class="inside"><?php print $content['far_right_below']; ?></div>
    </div>
  </div>
</div>
