<?php
/**
 * @file
 * argus_wachtwoorden.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_wachtwoorden_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ict_account content'.
  $permissions['create ict_account content'] = array(
    'name' => 'create ict_account content',
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

  // Exported permission: 'delete any ict_account content'.
  $permissions['delete any ict_account content'] = array(
    'name' => 'delete any ict_account content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ict_account content'.
  $permissions['delete own ict_account content'] = array(
    'name' => 'delete own ict_account content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ict_account content'.
  $permissions['edit any ict_account content'] = array(
    'name' => 'edit any ict_account content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ict_account content'.
  $permissions['edit own ict_account content'] = array(
    'name' => 'edit own ict_account content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
