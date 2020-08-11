<?php

/**
 * @file
 * Implementation for the Ferries L3 landing page.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Ferries: L3 landing page'),
  'category' => t('WSF'),
  'icon' => 'l3_landing.png',
  'theme' => 'l3_landing',
  'css' => 'l3_landing.css',
  'regions' => array(
    'top' => t('Top'),
    'left_above' => t('Left above'),
    'right_above' => t('Right above'),
    'middle' => t('Middle'),
    'far_left_below' => t('Far left below'),
    'left_below' => t('Left below'),
    'right_below' => t('Right below'),
    'far_right_below' => t('Far right below'),
  ),
);
