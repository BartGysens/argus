<?php
/**
 * @file
 * argus_werken_voor_derden.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_werken_voor_derden_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create werk_voor_derden content'.
  $permissions['create werk_voor_derden content'] = array(
    'name' => 'create werk_voor_derden content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelslid' => 'personeelslid',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any werk_voor_derden content'.
  $permissions['delete any werk_voor_derden content'] = array(
    'name' => 'delete any werk_voor_derden content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own werk_voor_derden content'.
  $permissions['delete own werk_voor_derden content'] = array(
    'name' => 'delete own werk_voor_derden content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any werk_voor_derden content'.
  $permissions['edit any werk_voor_derden content'] = array(
    'name' => 'edit any werk_voor_derden content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own werk_voor_derden content'.
  $permissions['edit own werk_voor_derden content'] = array(
    'name' => 'edit own werk_voor_derden content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'personeelslid' => 'personeelslid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
