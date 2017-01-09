<?php
/**
 * @file
 * argus_volgkaarten_evaluaties.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_volgkaarten_evaluaties_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create msl_volgkaart_evaluatie content'.
  $permissions['create msl_volgkaart_evaluatie content'] = array(
    'name' => 'create msl_volgkaart_evaluatie content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any msl_volgkaart_evaluatie content'.
  $permissions['delete any msl_volgkaart_evaluatie content'] = array(
    'name' => 'delete any msl_volgkaart_evaluatie content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own msl_volgkaart_evaluatie content'.
  $permissions['delete own msl_volgkaart_evaluatie content'] = array(
    'name' => 'delete own msl_volgkaart_evaluatie content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any msl_volgkaart_evaluatie content'.
  $permissions['edit any msl_volgkaart_evaluatie content'] = array(
    'name' => 'edit any msl_volgkaart_evaluatie content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own msl_volgkaart_evaluatie content'.
  $permissions['edit own msl_volgkaart_evaluatie content'] = array(
    'name' => 'edit own msl_volgkaart_evaluatie content',
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
