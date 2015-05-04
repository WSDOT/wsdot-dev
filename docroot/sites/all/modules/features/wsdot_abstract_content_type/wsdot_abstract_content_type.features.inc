<?php
/**
 * @file
 * wsdot_abstract_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wsdot_abstract_content_type_node_info() {
  $items = array(
    'abstracts' => array(
      'name' => t('Abstracts'),
      'base' => 'node_content',
      'description' => t(' Metadata for documents - manuals and research reports maybe more'),
      'has_title' => '1',
      'title_label' => t('Abstracts'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
