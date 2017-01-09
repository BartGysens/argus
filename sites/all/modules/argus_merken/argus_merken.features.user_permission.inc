<?php
/**
 * @file
 * argus_merken.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_merken_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create merk content'.
  $permissions['create merk content'] = array(
    'name' => 'create merk content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'boekhouding' => 'boekhouding',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any merk content'.
  $permissions['delete any merk content'] = array(
    'name' => 'delete any merk content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own merk content'.
  $permissions['delete own merk content'] = array(
    'name' => 'delete own merk content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'boekhouding' => 'boekhouding',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any merk content'.
  $permissions['edit any merk content'] = array(
    'name' => 'edit any merk content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own merk content'.
  $permissions['edit own merk content'] = array(
    'name' => 'edit own merk content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'boekhouding' => 'boekhouding',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
