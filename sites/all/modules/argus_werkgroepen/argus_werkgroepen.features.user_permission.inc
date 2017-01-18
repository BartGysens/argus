<?php
/**
 * @file
 * argus_werkgroepen.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_werkgroepen_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create werkgroep content'.
  $permissions['create werkgroep content'] = array(
    'name' => 'create werkgroep content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any werkgroep content'.
  $permissions['delete any werkgroep content'] = array(
    'name' => 'delete any werkgroep content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own werkgroep content'.
  $permissions['delete own werkgroep content'] = array(
    'name' => 'delete own werkgroep content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any werkgroep content'.
  $permissions['edit any werkgroep content'] = array(
    'name' => 'edit any werkgroep content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own werkgroep content'.
  $permissions['edit own werkgroep content'] = array(
    'name' => 'edit own werkgroep content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
