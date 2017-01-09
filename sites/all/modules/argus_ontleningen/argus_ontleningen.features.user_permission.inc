<?php
/**
 * @file
 * argus_ontleningen.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_ontleningen_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ontlening content'.
  $permissions['create ontlening content'] = array(
    'name' => 'create ontlening content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ontlening content'.
  $permissions['delete any ontlening content'] = array(
    'name' => 'delete any ontlening content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ontlening content'.
  $permissions['delete own ontlening content'] = array(
    'name' => 'delete own ontlening content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ontlening content'.
  $permissions['edit any ontlening content'] = array(
    'name' => 'edit any ontlening content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ontlening content'.
  $permissions['edit own ontlening content'] = array(
    'name' => 'edit own ontlening content',
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
