<?php
/**
 * @file
 * argus_pedagogische_activiteiten.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_pedagogische_activiteiten_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_ev_busje_betaald'.
  $permissions['create field_ev_busje_betaald'] = array(
    'name' => 'create field_ev_busje_betaald',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'boekhouding' => 'boekhouding',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ev_goedkeuring'.
  $permissions['create field_ev_goedkeuring'] = array(
    'name' => 'create field_ev_goedkeuring',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ev_busje_betaald'.
  $permissions['edit field_ev_busje_betaald'] = array(
    'name' => 'edit field_ev_busje_betaald',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'boekhouding' => 'boekhouding',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ev_goedkeuring'.
  $permissions['edit field_ev_goedkeuring'] = array(
    'name' => 'edit field_ev_goedkeuring',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ev_busje_betaald'.
  $permissions['edit own field_ev_busje_betaald'] = array(
    'name' => 'edit own field_ev_busje_betaald',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'boekhouding' => 'boekhouding',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ev_goedkeuring'.
  $permissions['edit own field_ev_goedkeuring'] = array(
    'name' => 'edit own field_ev_goedkeuring',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ev_busje_betaald'.
  $permissions['view field_ev_busje_betaald'] = array(
    'name' => 'view field_ev_busje_betaald',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'boekhouding' => 'boekhouding',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ev_goedkeuring'.
  $permissions['view field_ev_goedkeuring'] = array(
    'name' => 'view field_ev_goedkeuring',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelslid' => 'personeelslid',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ev_busje_betaald'.
  $permissions['view own field_ev_busje_betaald'] = array(
    'name' => 'view own field_ev_busje_betaald',
    'roles' => array(
      'ICT-coördinator' => 'ICT-coördinator',
      'administrator' => 'administrator',
      'boekhouding' => 'boekhouding',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ev_goedkeuring'.
  $permissions['view own field_ev_goedkeuring'] = array(
    'name' => 'view own field_ev_goedkeuring',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelslid' => 'personeelslid',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
