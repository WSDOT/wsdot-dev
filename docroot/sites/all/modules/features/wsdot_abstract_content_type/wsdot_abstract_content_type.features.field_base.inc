<?php
/**
 * @file
 * wsdot_abstract_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function wsdot_abstract_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_authors'
  $field_bases['field_authors'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_authors',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 100,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
