<?php
/**
 * @file
 * argus_opruimkalender.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_opruimkalender_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear event_opruim_speelplaats feeds'.
  $permissions['clear event_opruim_speelplaats feeds'] = array(
    'name' => 'clear event_opruim_speelplaats feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create event_opruim_speelplaats content'.
  $permissions['create event_opruim_speelplaats content'] = array(
    'name' => 'create event_opruim_speelplaats content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event_opruim_speelplaats content'.
  $permissions['delete any event_opruim_speelplaats content'] = array(
    'name' => 'delete any event_opruim_speelplaats content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_opruim_speelplaats content'.
  $permissions['delete own event_opruim_speelplaats content'] = array(
    'name' => 'delete own event_opruim_speelplaats content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_opruim_speelplaats content'.
  $permissions['edit any event_opruim_speelplaats content'] = array(
    'name' => 'edit any event_opruim_speelplaats content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_opruim_speelplaats content'.
  $permissions['edit own event_opruim_speelplaats content'] = array(
    'name' => 'edit own event_opruim_speelplaats content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import event_opruim_speelplaats feeds'.
  $permissions['import event_opruim_speelplaats feeds'] = array(
    'name' => 'import event_opruim_speelplaats feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock event_opruim_speelplaats feeds'.
  $permissions['unlock event_opruim_speelplaats feeds'] = array(
    'name' => 'unlock event_opruim_speelplaats feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
