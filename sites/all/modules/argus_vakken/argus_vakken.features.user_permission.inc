<?php
/**
 * @file
 * argus_vakken.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_vakken_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create vak content'.
  $permissions['create vak content'] = array(
    'name' => 'create vak content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vak content'.
  $permissions['delete any vak content'] = array(
    'name' => 'delete any vak content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vak content'.
  $permissions['delete own vak content'] = array(
    'name' => 'delete own vak content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vak content'.
  $permissions['edit any vak content'] = array(
    'name' => 'edit any vak content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vak content'.
  $permissions['edit own vak content'] = array(
    'name' => 'edit own vak content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
