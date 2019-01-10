<?php

/**
 * @file
 * wsdot_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wsdot_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Audit Editor.
  $roles['Audit Editor'] = array(
    'name' => 'Audit Editor',
    'weight' => 4,
  );

  // Exported role: Bridge Editor.
  $roles['Bridge Editor'] = array(
    'name' => 'Bridge Editor',
    'weight' => 5,
  );

  // Exported role: Library Author.
  $roles['Library Author'] = array(
    'name' => 'Library Author',
    'weight' => 15,
  );

  // Exported role: Local Programs Editor.
  $roles['Local Programs Editor'] = array(
    'name' => 'Local Programs Editor',
    'weight' => 16,
  );

  // Exported role: Practical Solutions Editor.
  $roles['Practical Solutions Editor'] = array(
    'name' => 'Practical Solutions Editor',
    'weight' => 23,
  );

  // Exported role: Project Editor.
  $roles['Project Editor'] = array(
    'name' => 'Project Editor',
    'weight' => 24,
  );

  // Exported role: Publications Editor.
  $roles['Publications Editor'] = array(
    'name' => 'Publications Editor',
    'weight' => 25,
  );

  // Exported role: Safety Editor.
  $roles['Safety Editor'] = array(
    'name' => 'Safety Editor',
    'weight' => 28,
  );

  // Exported role: Travel Editor.
  $roles['Travel Editor'] = array(
    'name' => 'Travel Editor',
    'weight' => 36,
  );

  return $roles;
}
