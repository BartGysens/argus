<?php
/**
 * @file
 * argus_lokalen.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_lokalen_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create lokaal content'.
  $permissions['create lokaal content'] = array(
    'name' => 'create lokaal content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
      'uurroostercoördinator' => 'uurroostercoördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lokaal content'.
  $permissions['delete any lokaal content'] = array(
    'name' => 'delete any lokaal content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
      'uurroostercoördinator' => 'uurroostercoördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lokaal content'.
  $permissions['delete own lokaal content'] = array(
    'name' => 'delete own lokaal content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
      'uurroostercoördinator' => 'uurroostercoördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lokaal content'.
  $permissions['edit any lokaal content'] = array(
    'name' => 'edit any lokaal content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
      'uurroostercoördinator' => 'uurroostercoördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lokaal content'.
  $permissions['edit own lokaal content'] = array(
    'name' => 'edit own lokaal content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
      'uurroostercoördinator' => 'uurroostercoördinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
