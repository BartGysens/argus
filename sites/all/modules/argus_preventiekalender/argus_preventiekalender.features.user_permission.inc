<?php
/**
 * @file
 * argus_preventiekalender.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_preventiekalender_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear events_preventiebeleid feeds'.
  $permissions['clear events_preventiebeleid feeds'] = array(
    'name' => 'clear events_preventiebeleid feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create event_preventiebeleid content'.
  $permissions['create event_preventiebeleid content'] = array(
    'name' => 'create event_preventiebeleid content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event_preventiebeleid content'.
  $permissions['delete any event_preventiebeleid content'] = array(
    'name' => 'delete any event_preventiebeleid content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_preventiebeleid content'.
  $permissions['delete own event_preventiebeleid content'] = array(
    'name' => 'delete own event_preventiebeleid content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_preventiebeleid content'.
  $permissions['edit any event_preventiebeleid content'] = array(
    'name' => 'edit any event_preventiebeleid content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_preventiebeleid content'.
  $permissions['edit own event_preventiebeleid content'] = array(
    'name' => 'edit own event_preventiebeleid content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import events_preventiebeleid feeds'.
  $permissions['import events_preventiebeleid feeds'] = array(
    'name' => 'import events_preventiebeleid feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock events_preventiebeleid feeds'.
  $permissions['unlock events_preventiebeleid feeds'] = array(
    'name' => 'unlock events_preventiebeleid feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
