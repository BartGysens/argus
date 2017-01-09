<?php
/**
 * @file
 * argus_aankoopdossiers.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_aankoopdossiers_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create aankoopdossier content'.
  $permissions['create aankoopdossier content'] = array(
    'name' => 'create aankoopdossier content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any aankoopdossier content'.
  $permissions['delete any aankoopdossier content'] = array(
    'name' => 'delete any aankoopdossier content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own aankoopdossier content'.
  $permissions['delete own aankoopdossier content'] = array(
    'name' => 'delete own aankoopdossier content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any aankoopdossier content'.
  $permissions['edit any aankoopdossier content'] = array(
    'name' => 'edit any aankoopdossier content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own aankoopdossier content'.
  $permissions['edit own aankoopdossier content'] = array(
    'name' => 'edit own aankoopdossier content',
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
