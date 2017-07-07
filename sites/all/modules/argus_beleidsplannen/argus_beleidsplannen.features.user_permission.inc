<?php
/**
 * @file
 * argus_beleidsplannen.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_beleidsplannen_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create beleidsplan content'.
  $permissions['create beleidsplan content'] = array(
    'name' => 'create beleidsplan content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any beleidsplan content'.
  $permissions['delete any beleidsplan content'] = array(
    'name' => 'delete any beleidsplan content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own beleidsplan content'.
  $permissions['delete own beleidsplan content'] = array(
    'name' => 'delete own beleidsplan content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any beleidsplan content'.
  $permissions['edit any beleidsplan content'] = array(
    'name' => 'edit any beleidsplan content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own beleidsplan content'.
  $permissions['edit own beleidsplan content'] = array(
    'name' => 'edit own beleidsplan content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
