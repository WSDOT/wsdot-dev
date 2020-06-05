<?php

/**
 * @file
 * Implementation for the Ferries home page.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Homepage'),
  'category' => t('WSF'),
  'icon' => 'homepage.png',
  'theme' => 'homepage',
  'css' => 'homepage.css',
  'regions' => array(
    'left_above' => t('Left above'),
    'center_above' => t('Center above'),
    'right_above' => t('Right above'),
    'middle' => t('Middle'),
    'left_below' => t('Left below'),
    'right_below' => t('Right below'),
  ),
);
