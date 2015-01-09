<?php
/**
 * @file
 * bf_roles_and_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bf_roles_and_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Admin.
  $roles['Admin'] = array(
    'name' => 'Admin',
    'weight' => 0,
  );

  // Exported role: Expert.
  $roles['Expert'] = array(
    'name' => 'Expert',
    'weight' => 3,
  );

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => 1,
  );

  // Exported role: Participant.
  $roles['Participant'] = array(
    'name' => 'Participant',
    'weight' => 2,
  );

  // Exported role: Project coordinator.
  $roles['Project coordinator'] = array(
    'name' => 'Project coordinator',
    'weight' => 6,
  );

  return $roles;
}
