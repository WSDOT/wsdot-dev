<?php

/**
 * @file
 * wsdot_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wsdot_roles_user_default_roles() {
  $roles = array();

  // Exported role: Asset Editor.
  $roles['Asset Editor'] = array(
    'name' => 'Asset Editor',
    'weight' => 3,
  );

  // Exported role: Business Editor.
  $roles['Business Editor'] = array(
    'name' => 'Business Editor',
    'weight' => 6,
  );

  // Exported role: ER Editor.
  $roles['ER Editor'] = array(
    'name' => 'ER Editor',
    'weight' => 10,
  );

  // Exported role: Employment Editor.
  $roles['Employment Editor'] = array(
    'name' => 'Employment Editor',
    'weight' => 7,
  );

  // Exported role: Environment Editor.
  $roles['Environment Editor'] = array(
    'name' => 'Environment Editor',
    'weight' => 8,
  );

  // Exported role: Equal Opportunity Editor.
  $roles['Equal Opportunity Editor'] = array(
    'name' => 'Equal Opportunity Editor',
    'weight' => 9,
  );

  // Exported role: Ferries Editor.
  $roles['Ferries Editor'] = array(
    'name' => 'Ferries Editor',
    'weight' => 11,
  );

  // Exported role: Finance Editor.
  $roles['Finance Editor'] = array(
    'name' => 'Finance Editor',
    'weight' => 12,
  );

  // Exported role: Good To Go Editor.
  $roles['Good To Go Editor'] = array(
    'name' => 'Good To Go Editor',
    'weight' => 13,
  );

  // Exported role: HQ Communication Editor.
  $roles['HQ Communication Editor'] = array(
    'name' => 'HQ Communication Editor',
    'weight' => 14,
  );

  // Exported role: NC Editor.
  $roles['NC Editor'] = array(
    'name' => 'NC Editor',
    'weight' => 18,
  );

  // Exported role: NW Editor.
  $roles['NW Editor'] = array(
    'name' => 'NW Editor',
    'weight' => 19,
  );

  // Exported role: News Editor.
  $roles['News Editor'] = array(
    'name' => 'News Editor',
    'weight' => 17,
  );

  // Exported role: OR Editor.
  $roles['OR Editor'] = array(
    'name' => 'OR Editor',
    'weight' => 20,
  );

  // Exported role: Planning Editor.
  $roles['Planning Editor'] = array(
    'name' => 'Planning Editor',
    'weight' => 21,
  );

  // Exported role: Policy Editor.
  $roles['Policy Editor'] = array(
    'name' => 'Policy Editor',
    'weight' => 22,
  );

  // Exported role: Rail Editor.
  $roles['Rail Editor'] = array(
    'name' => 'Rail Editor',
    'weight' => 26,
  );

  // Exported role: Research Editor.
  $roles['Research Editor'] = array(
    'name' => 'Research Editor',
    'weight' => 27,
  );

  // Exported role: SC Editor.
  $roles['SC Editor'] = array(
    'name' => 'SC Editor',
    'weight' => 29,
  );

  // Exported role: SW Editor.
  $roles['SW Editor'] = array(
    'name' => 'SW Editor',
    'weight' => 30,
  );

  // Exported role: Tolling Editor.
  $roles['Tolling Editor'] = array(
    'name' => 'Tolling Editor',
    'weight' => 31,
  );

  // Exported role: Traffic Editor.
  $roles['Traffic Editor'] = array(
    'name' => 'Traffic Editor',
    'weight' => 34,
  );

  // Exported role: Training Editor.
  $roles['Training Editor'] = array(
    'name' => 'Training Editor',
    'weight' => 35,
  );

  // Exported role: Transit Editor.
  $roles['Transit Editor'] = array(
    'name' => 'Transit Editor',
    'weight' => 32,
  );

  // Exported role: Tribal Editor.
  $roles['Tribal Editor'] = array(
    'name' => 'Tribal Editor',
    'weight' => 33,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
