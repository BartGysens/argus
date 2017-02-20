<?php
/**
 * @file
 * argus_personeel_afwezigheden.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_personeel_afwezigheden_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_pers_afwezigheid_reden'.
  $permissions['create field_pers_afwezigheid_reden'] = array(
    'name' => 'create field_pers_afwezigheid_reden',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_pers_afwezigheid_redenand'.
  $permissions['create field_pers_afwezigheid_redenand'] = array(
    'name' => 'create field_pers_afwezigheid_redenand',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create personeel_afwezigheid content'.
  $permissions['create personeel_afwezigheid content'] = array(
    'name' => 'create personeel_afwezigheid content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any personeel_afwezigheid content'.
  $permissions['delete any personeel_afwezigheid content'] = array(
    'name' => 'delete any personeel_afwezigheid content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own personeel_afwezigheid content'.
  $permissions['delete own personeel_afwezigheid content'] = array(
    'name' => 'delete own personeel_afwezigheid content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any personeel_afwezigheid content'.
  $permissions['edit any personeel_afwezigheid content'] = array(
    'name' => 'edit any personeel_afwezigheid content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_pers_afwezigheid_reden'.
  $permissions['edit field_pers_afwezigheid_reden'] = array(
    'name' => 'edit field_pers_afwezigheid_reden',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pers_afwezigheid_redenand'.
  $permissions['edit field_pers_afwezigheid_redenand'] = array(
    'name' => 'edit field_pers_afwezigheid_redenand',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pers_afwezigheid_reden'.
  $permissions['edit own field_pers_afwezigheid_reden'] = array(
    'name' => 'edit own field_pers_afwezigheid_reden',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pers_afwezigheid_redenand'.
  $permissions['edit own field_pers_afwezigheid_redenand'] = array(
    'name' => 'edit own field_pers_afwezigheid_redenand',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own personeel_afwezigheid content'.
  $permissions['edit own personeel_afwezigheid content'] = array(
    'name' => 'edit own personeel_afwezigheid content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view field_pers_afwezigheid_reden'.
  $permissions['view field_pers_afwezigheid_reden'] = array(
    'name' => 'view field_pers_afwezigheid_reden',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_pers_afwezigheid_redenand'.
  $permissions['view field_pers_afwezigheid_redenand'] = array(
    'name' => 'view field_pers_afwezigheid_redenand',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pers_afwezigheid_reden'.
  $permissions['view own field_pers_afwezigheid_reden'] = array(
    'name' => 'view own field_pers_afwezigheid_reden',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pers_afwezigheid_redenand'.
  $permissions['view own field_pers_afwezigheid_redenand'] = array(
    'name' => 'view own field_pers_afwezigheid_redenand',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
