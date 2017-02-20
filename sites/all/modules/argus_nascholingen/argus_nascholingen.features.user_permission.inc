<?php
/**
 * @file
 * argus_nascholingen.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_nascholingen_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create event_nascholing content'.
  $permissions['create event_nascholing content'] = array(
    'name' => 'create event_nascholing content',
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

  // Exported permission: 'create field_ev_attest'.
  $permissions['create field_ev_attest'] = array(
    'name' => 'create field_ev_attest',
    'roles' => array(
      'administrator' => 'administrator',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'personeelssecretariaat' => 'personeelssecretariaat',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ev_feedback'.
  $permissions['create field_ev_feedback'] = array(
    'name' => 'create field_ev_feedback',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
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

  // Exported permission: 'delete any event_nascholing content'.
  $permissions['delete any event_nascholing content'] = array(
    'name' => 'delete any event_nascholing content',
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

  // Exported permission: 'delete own event_nascholing content'.
  $permissions['delete own event_nascholing content'] = array(
    'name' => 'delete own event_nascholing content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'personeelslid' => 'personeelslid',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_nascholing content'.
  $permissions['edit any event_nascholing content'] = array(
    'name' => 'edit any event_nascholing content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_ev_attest'.
  $permissions['edit field_ev_attest'] = array(
    'name' => 'edit field_ev_attest',
    'roles' => array(
      'administrator' => 'administrator',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'personeelssecretariaat' => 'personeelssecretariaat',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ev_feedback'.
  $permissions['edit field_ev_feedback'] = array(
    'name' => 'edit field_ev_feedback',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
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

  // Exported permission: 'edit own event_nascholing content'.
  $permissions['edit own event_nascholing content'] = array(
    'name' => 'edit own event_nascholing content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'personeelslid' => 'personeelslid',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_ev_attest'.
  $permissions['edit own field_ev_attest'] = array(
    'name' => 'edit own field_ev_attest',
    'roles' => array(
      'administrator' => 'administrator',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'personeelssecretariaat' => 'personeelssecretariaat',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ev_feedback'.
  $permissions['edit own field_ev_feedback'] = array(
    'name' => 'edit own field_ev_feedback',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
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

  // Exported permission: 'view field_ev_attest'.
  $permissions['view field_ev_attest'] = array(
    'name' => 'view field_ev_attest',
    'roles' => array(
      'administrator' => 'administrator',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'personeelslid' => 'personeelslid',
      'personeelssecretariaat' => 'personeelssecretariaat',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ev_feedback'.
  $permissions['view field_ev_feedback'] = array(
    'name' => 'view field_ev_feedback',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
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

  // Exported permission: 'view own field_ev_attest'.
  $permissions['view own field_ev_attest'] = array(
    'name' => 'view own field_ev_attest',
    'roles' => array(
      'administrator' => 'administrator',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'personeelslid' => 'personeelslid',
      'personeelssecretariaat' => 'personeelssecretariaat',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ev_feedback'.
  $permissions['view own field_ev_feedback'] = array(
    'name' => 'view own field_ev_feedback',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
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
