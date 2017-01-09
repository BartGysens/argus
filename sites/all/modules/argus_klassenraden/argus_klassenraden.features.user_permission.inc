<?php
/**
 * @file
 * argus_klassenraden.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_klassenraden_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create lvs_klassenraad content'.
  $permissions['create lvs_klassenraad content'] = array(
    'name' => 'create lvs_klassenraad content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create lvs_klassenraad_notitie content'.
  $permissions['create lvs_klassenraad_notitie content'] = array(
    'name' => 'create lvs_klassenraad_notitie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any lvs_klassenraad content'.
  $permissions['delete any lvs_klassenraad content'] = array(
    'name' => 'delete any lvs_klassenraad content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any lvs_klassenraad_notitie content'.
  $permissions['delete any lvs_klassenraad_notitie content'] = array(
    'name' => 'delete any lvs_klassenraad_notitie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own lvs_klassenraad content'.
  $permissions['delete own lvs_klassenraad content'] = array(
    'name' => 'delete own lvs_klassenraad content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own lvs_klassenraad_notitie content'.
  $permissions['delete own lvs_klassenraad_notitie content'] = array(
    'name' => 'delete own lvs_klassenraad_notitie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any lvs_klassenraad content'.
  $permissions['edit any lvs_klassenraad content'] = array(
    'name' => 'edit any lvs_klassenraad content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any lvs_klassenraad_notitie content'.
  $permissions['edit any lvs_klassenraad_notitie content'] = array(
    'name' => 'edit any lvs_klassenraad_notitie content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own lvs_klassenraad content'.
  $permissions['edit own lvs_klassenraad content'] = array(
    'name' => 'edit own lvs_klassenraad content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own lvs_klassenraad_notitie content'.
  $permissions['edit own lvs_klassenraad_notitie content'] = array(
    'name' => 'edit own lvs_klassenraad_notitie content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
