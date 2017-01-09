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
      'pedagogische coördinator' => 'pedagogische coördinator',
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
      'pedagogische coördinator' => 'pedagogische coördinator',
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
      'pedagogische coördinator' => 'pedagogische coördinator',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own personeel_afwezigheid content'.
  $permissions['edit own personeel_afwezigheid content'] = array(
    'name' => 'edit own personeel_afwezigheid content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
