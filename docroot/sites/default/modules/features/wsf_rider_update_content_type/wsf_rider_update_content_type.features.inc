<?php

/**
 * @file
 * wsf_rider_update_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wsf_rider_update_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function wsf_rider_update_content_type_node_info() {
  $items = array(
    'rider_update' => array(
      'name' => t('Rider update'),
      'base' => 'node_content',
      'description' => t('Use this content type for adding rider updates to the Ferries <em>Rider Information</em> section.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
