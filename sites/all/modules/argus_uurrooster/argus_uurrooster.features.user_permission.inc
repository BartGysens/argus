<?php
/**
 * @file
 * argus_uurrooster.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_uurrooster_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create uurrooster_les content'.
  $permissions['create uurrooster_les content'] = array(
    'name' => 'create uurrooster_les content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create uurrooster_periode content'.
  $permissions['create uurrooster_periode content'] = array(
    'name' => 'create uurrooster_periode content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any uurrooster_les content'.
  $permissions['delete any uurrooster_les content'] = array(
    'name' => 'delete any uurrooster_les content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any uurrooster_periode content'.
  $permissions['delete any uurrooster_periode content'] = array(
    'name' => 'delete any uurrooster_periode content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own uurrooster_les content'.
  $permissions['delete own uurrooster_les content'] = array(
    'name' => 'delete own uurrooster_les content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own uurrooster_periode content'.
  $permissions['delete own uurrooster_periode content'] = array(
    'name' => 'delete own uurrooster_periode content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any uurrooster_les content'.
  $permissions['edit any uurrooster_les content'] = array(
    'name' => 'edit any uurrooster_les content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any uurrooster_periode content'.
  $permissions['edit any uurrooster_periode content'] = array(
    'name' => 'edit any uurrooster_periode content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own uurrooster_les content'.
  $permissions['edit own uurrooster_les content'] = array(
    'name' => 'edit own uurrooster_les content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own uurrooster_periode content'.
  $permissions['edit own uurrooster_periode content'] = array(
    'name' => 'edit own uurrooster_periode content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
