<?php
/**
 * @file
 * argus_maatregelen_bij_schending_van_de_leefregels.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_maatregelen_bij_schending_van_de_leefregels_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create maatregelen content'.
  $permissions['create maatregelen content'] = array(
    'name' => 'create maatregelen content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any maatregelen content'.
  $permissions['delete any maatregelen content'] = array(
    'name' => 'delete any maatregelen content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own maatregelen content'.
  $permissions['delete own maatregelen content'] = array(
    'name' => 'delete own maatregelen content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any maatregelen content'.
  $permissions['edit any maatregelen content'] = array(
    'name' => 'edit any maatregelen content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own maatregelen content'.
  $permissions['edit own maatregelen content'] = array(
    'name' => 'edit own maatregelen content',
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
