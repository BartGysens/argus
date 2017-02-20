<?php
/**
 * @file
 * argus_feedbackgroepen.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_feedbackgroepen_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create feedbackgroep content'.
  $permissions['create feedbackgroep content'] = array(
    'name' => 'create feedbackgroep content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any feedbackgroep content'.
  $permissions['delete any feedbackgroep content'] = array(
    'name' => 'delete any feedbackgroep content',
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

  // Exported permission: 'delete own feedbackgroep content'.
  $permissions['delete own feedbackgroep content'] = array(
    'name' => 'delete own feedbackgroep content',
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

  // Exported permission: 'edit any feedbackgroep content'.
  $permissions['edit any feedbackgroep content'] = array(
    'name' => 'edit any feedbackgroep content',
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

  // Exported permission: 'edit own feedbackgroep content'.
  $permissions['edit own feedbackgroep content'] = array(
    'name' => 'edit own feedbackgroep content',
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

  return $permissions;
}
