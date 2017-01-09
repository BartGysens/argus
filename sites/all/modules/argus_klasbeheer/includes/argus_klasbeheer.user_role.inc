<?php
/**
 * Custom function generates user roles.
 */

/**
 * Implements hook_user_default_roles().
 */
function _argus_klasbeheer_installed_user_roles() {
  $roles = array();

  // Exported role: hulpklastitularis.
  $roles['hulpklastitularis'] = array(
    'name' => 'hulpklastitularis',
    'weight' => 87,
  );

  // Exported role: klastitularis.
  $roles['klastitularis'] = array(
    'name' => 'klastitularis',
    'weight' => 88,
  );

  return $roles;
}
