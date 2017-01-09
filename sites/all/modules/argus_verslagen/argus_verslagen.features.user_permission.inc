<?php
/**
 * @file
 * argus_verslagen.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_verslagen_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create verslag content'.
  $permissions['create verslag content'] = array(
    'name' => 'create verslag content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any verslag content'.
  $permissions['delete any verslag content'] = array(
    'name' => 'delete any verslag content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own verslag content'.
  $permissions['delete own verslag content'] = array(
    'name' => 'delete own verslag content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any verslag content'.
  $permissions['edit any verslag content'] = array(
    'name' => 'edit any verslag content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own verslag content'.
  $permissions['edit own verslag content'] = array(
    'name' => 'edit own verslag content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
