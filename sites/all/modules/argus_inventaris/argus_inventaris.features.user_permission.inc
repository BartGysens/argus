<?php
/**
 * @file
 * argus_inventaris.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_inventaris_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create inventaris content'.
  $permissions['create inventaris content'] = array(
    'name' => 'create inventaris content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'magazijnier' => 'magazijnier',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any inventaris content'.
  $permissions['delete any inventaris content'] = array(
    'name' => 'delete any inventaris content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'magazijnier' => 'magazijnier',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own inventaris content'.
  $permissions['delete own inventaris content'] = array(
    'name' => 'delete own inventaris content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'magazijnier' => 'magazijnier',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any inventaris content'.
  $permissions['edit any inventaris content'] = array(
    'name' => 'edit any inventaris content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'magazijnier' => 'magazijnier',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own inventaris content'.
  $permissions['edit own inventaris content'] = array(
    'name' => 'edit own inventaris content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'magazijnier' => 'magazijnier',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'personeelslid' => 'personeelslid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
