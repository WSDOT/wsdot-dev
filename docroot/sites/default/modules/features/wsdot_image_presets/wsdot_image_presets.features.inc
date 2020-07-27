<?php

/**
 * @file
 * wsdot_image_presets.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function wsdot_image_presets_image_default_styles() {
  $styles = array();

  // Exported image style: l3_spotlight_footer_image.
  $styles['l3_spotlight_footer_image'] = array(
    'label' => 'L3 spotlight footer image (225x161)',
    'effects' => array(
      18 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 225,
          'height' => 161,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: open_graph_image.
  $styles['open_graph_image'] = array(
    'label' => 'Open Graph Image (1200x630)',
    'effects' => array(
      19 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 630,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_map_thumbnail.
  $styles['project_map_thumbnail'] = array(
    'label' => 'Project map thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'focal_point_crop',
        'data' => array(
          'width' => 185,
          'height' => 185,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slideshow_image.
  $styles['slideshow_image'] = array(
    'label' => 'Slideshow Image',
    'effects' => array(
      16 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 303,
          'height' => 187,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: spotlight_image.
  $styles['spotlight_image'] = array(
    'label' => 'Spotlight image (460x245)',
    'effects' => array(
      17 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 460,
          'height' => 245,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
