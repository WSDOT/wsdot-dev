<?php
/**
 * @file
 * wsdot_office_locations_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wsdot_office_locations_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function wsdot_office_locations_content_type_node_info() {
  $items = array(
    'offices' => array(
      'name' => t('Offices'),
      'base' => 'node_content',
      'description' => t('Use this content type for creating an office location within WSDOT. It will include the title of the office, the street and mailing address, phone numbers, website, email, and map showing how to get to the office.'),
      'has_title' => '1',
      'title_label' => t('Name of Office'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
