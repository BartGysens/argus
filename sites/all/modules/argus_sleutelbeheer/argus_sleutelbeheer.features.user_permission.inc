<?php
/**
 * @file
 * argus_sleutelbeheer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_sleutelbeheer_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create sleutel content'.
  $permissions['create sleutel content'] = array(
    'name' => 'create sleutel content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any sleutel content'.
  $permissions['delete any sleutel content'] = array(
    'name' => 'delete any sleutel content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own sleutel content'.
  $permissions['delete own sleutel content'] = array(
    'name' => 'delete own sleutel content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any sleutel content'.
  $permissions['edit any sleutel content'] = array(
    'name' => 'edit any sleutel content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own sleutel content'.
  $permissions['edit own sleutel content'] = array(
    'name' => 'edit own sleutel content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
