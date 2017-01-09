<?php
/**
 * @file
 * argus_uurrooster_vervanging.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_uurrooster_vervanging_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create uurrooster_vervanging content'.
  $permissions['create uurrooster_vervanging content'] = array(
    'name' => 'create uurrooster_vervanging content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any uurrooster_vervanging content'.
  $permissions['delete any uurrooster_vervanging content'] = array(
    'name' => 'delete any uurrooster_vervanging content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own uurrooster_vervanging content'.
  $permissions['delete own uurrooster_vervanging content'] = array(
    'name' => 'delete own uurrooster_vervanging content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any uurrooster_vervanging content'.
  $permissions['edit any uurrooster_vervanging content'] = array(
    'name' => 'edit any uurrooster_vervanging content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own uurrooster_vervanging content'.
  $permissions['edit own uurrooster_vervanging content'] = array(
    'name' => 'edit own uurrooster_vervanging content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
