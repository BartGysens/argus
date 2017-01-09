<?php
/**
 * @file
 * argus_hardware.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_hardware_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ict_hardware content'.
  $permissions['create ict_hardware content'] = array(
    'name' => 'create ict_hardware content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ict_hardware content'.
  $permissions['delete any ict_hardware content'] = array(
    'name' => 'delete any ict_hardware content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ict_hardware content'.
  $permissions['delete own ict_hardware content'] = array(
    'name' => 'delete own ict_hardware content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ict_hardware content'.
  $permissions['edit any ict_hardware content'] = array(
    'name' => 'edit any ict_hardware content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ict_hardware content'.
  $permissions['edit own ict_hardware content'] = array(
    'name' => 'edit own ict_hardware content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
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
