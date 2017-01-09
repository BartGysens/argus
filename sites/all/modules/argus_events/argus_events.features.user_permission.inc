<?php
/**
 * @file
 * argus_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create event_jaarkalender content'.
  $permissions['create event_jaarkalender content'] = array(
    'name' => 'create event_jaarkalender content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event_pedagogische_activiteit content'.
  $permissions['create event_pedagogische_activiteit content'] = array(
    'name' => 'create event_pedagogische_activiteit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any event_jaarkalender content'.
  $permissions['delete any event_jaarkalender content'] = array(
    'name' => 'delete any event_jaarkalender content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event_pedagogische_activiteit content'.
  $permissions['delete any event_pedagogische_activiteit content'] = array(
    'name' => 'delete any event_pedagogische_activiteit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_jaarkalender content'.
  $permissions['delete own event_jaarkalender content'] = array(
    'name' => 'delete own event_jaarkalender content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_pedagogische_activiteit content'.
  $permissions['delete own event_pedagogische_activiteit content'] = array(
    'name' => 'delete own event_pedagogische_activiteit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_jaarkalender content'.
  $permissions['edit any event_jaarkalender content'] = array(
    'name' => 'edit any event_jaarkalender content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_pedagogische_activiteit content'.
  $permissions['edit any event_pedagogische_activiteit content'] = array(
    'name' => 'edit any event_pedagogische_activiteit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_jaarkalender content'.
  $permissions['edit own event_jaarkalender content'] = array(
    'name' => 'edit own event_jaarkalender content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_pedagogische_activiteit content'.
  $permissions['edit own event_pedagogische_activiteit content'] = array(
    'name' => 'edit own event_pedagogische_activiteit content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
