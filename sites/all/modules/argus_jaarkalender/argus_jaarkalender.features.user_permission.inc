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

  // Exported permission: 'create event_jaarkalender content'.
  $permissions['create event_jaarkalender content'] = array(
    'name' => 'create event_jaarkalender content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event_jaarkalender content'.
  $permissions['delete any event_jaarkalender content'] = array(
    'name' => 'delete any event_jaarkalender content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_jaarkalender content'.
  $permissions['delete own event_jaarkalender content'] = array(
    'name' => 'delete own event_jaarkalender content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_jaarkalender content'.
  $permissions['edit any event_jaarkalender content'] = array(
    'name' => 'edit any event_jaarkalender content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_jaarkalender content'.
  $permissions['edit own event_jaarkalender content'] = array(
    'name' => 'edit own event_jaarkalender content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
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
