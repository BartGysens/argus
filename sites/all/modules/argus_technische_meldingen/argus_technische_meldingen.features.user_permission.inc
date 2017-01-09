<?php
/**
 * @file
 * argus_technische_meldingen.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_technische_meldingen_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create technische_melding content'.
  $permissions['create technische_melding content'] = array(
    'name' => 'create technische_melding content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelslid' => 'personeelslid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any technische_melding content'.
  $permissions['delete any technische_melding content'] = array(
    'name' => 'delete any technische_melding content',
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

  // Exported permission: 'delete own technische_melding content'.
  $permissions['delete own technische_melding content'] = array(
    'name' => 'delete own technische_melding content',
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

  // Exported permission: 'edit any technische_melding content'.
  $permissions['edit any technische_melding content'] = array(
    'name' => 'edit any technische_melding content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'MVD-personeelslid' => 'MVD-personeelslid',
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own technische_melding content'.
  $permissions['edit own technische_melding content'] = array(
    'name' => 'edit own technische_melding content',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'MVD-personeelslid' => 'MVD-personeelslid',
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
