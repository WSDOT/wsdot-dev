<?php

/**
 * @file
 * wsf_spotlight_item_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wsf_spotlight_item_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function wsf_spotlight_item_content_type_node_info() {
  $items = array(
    'spotlight_item' => array(
      'name' => t('Spotlight Item'),
      'base' => 'node_content',
      'description' => t('Featured Spotlight item on the Ferries home page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
