<?php
/**
 * @file
 * argus_projectgroepen.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_projectgroepen_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create projectgroep content'.
  $permissions['create projectgroep content'] = array(
    'name' => 'create projectgroep content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any projectgroep content'.
  $permissions['delete any projectgroep content'] = array(
    'name' => 'delete any projectgroep content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own projectgroep content'.
  $permissions['delete own projectgroep content'] = array(
    'name' => 'delete own projectgroep content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any projectgroep content'.
  $permissions['edit any projectgroep content'] = array(
    'name' => 'edit any projectgroep content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own projectgroep content'.
  $permissions['edit own projectgroep content'] = array(
    'name' => 'edit own projectgroep content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
