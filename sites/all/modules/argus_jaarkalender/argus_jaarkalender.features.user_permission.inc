<?php
/**
 * @file
 * argus_jaarkalender.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_jaarkalender_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear events_jaarkalender feeds'.
  $permissions['clear events_jaarkalender feeds'] = array(
    'name' => 'clear events_jaarkalender feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import events_jaarkalender feeds'.
  $permissions['import events_jaarkalender feeds'] = array(
    'name' => 'import events_jaarkalender feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock events_jaarkalender feeds'.
  $permissions['unlock events_jaarkalender feeds'] = array(
    'name' => 'unlock events_jaarkalender feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
