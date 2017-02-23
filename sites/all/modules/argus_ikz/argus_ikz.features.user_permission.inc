<?php
/**
 * @file
 * argus_ikz.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_ikz_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_ikz_auditor'.
  $permissions['create field_ikz_auditor'] = array(
    'name' => 'create field_ikz_auditor',
    'roles' => array(
      'administrator' => 'administrator',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create ikz_afkortingen content'.
  $permissions['create ikz_afkortingen content'] = array(
    'name' => 'create ikz_afkortingen content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ikz_documenten content'.
  $permissions['create ikz_documenten content'] = array(
    'name' => 'create ikz_documenten content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ikz_formulier content'.
  $permissions['create ikz_formulier content'] = array(
    'name' => 'create ikz_formulier content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ikz_procedure content'.
  $permissions['create ikz_procedure content'] = array(
    'name' => 'create ikz_procedure content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ikz_afkortingen content'.
  $permissions['delete any ikz_afkortingen content'] = array(
    'name' => 'delete any ikz_afkortingen content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ikz_documenten content'.
  $permissions['delete any ikz_documenten content'] = array(
    'name' => 'delete any ikz_documenten content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ikz_formulier content'.
  $permissions['delete any ikz_formulier content'] = array(
    'name' => 'delete any ikz_formulier content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ikz_procedure content'.
  $permissions['delete any ikz_procedure content'] = array(
    'name' => 'delete any ikz_procedure content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ikz_afkortingen content'.
  $permissions['delete own ikz_afkortingen content'] = array(
    'name' => 'delete own ikz_afkortingen content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ikz_documenten content'.
  $permissions['delete own ikz_documenten content'] = array(
    'name' => 'delete own ikz_documenten content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ikz_formulier content'.
  $permissions['delete own ikz_formulier content'] = array(
    'name' => 'delete own ikz_formulier content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ikz_procedure content'.
  $permissions['delete own ikz_procedure content'] = array(
    'name' => 'delete own ikz_procedure content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ikz_afkortingen content'.
  $permissions['edit any ikz_afkortingen content'] = array(
    'name' => 'edit any ikz_afkortingen content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ikz_documenten content'.
  $permissions['edit any ikz_documenten content'] = array(
    'name' => 'edit any ikz_documenten content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ikz_formulier content'.
  $permissions['edit any ikz_formulier content'] = array(
    'name' => 'edit any ikz_formulier content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ikz_procedure content'.
  $permissions['edit any ikz_procedure content'] = array(
    'name' => 'edit any ikz_procedure content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_ikz_auditor'.
  $permissions['edit field_ikz_auditor'] = array(
    'name' => 'edit field_ikz_auditor',
    'roles' => array(
      'administrator' => 'administrator',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ikz_auditor'.
  $permissions['edit own field_ikz_auditor'] = array(
    'name' => 'edit own field_ikz_auditor',
    'roles' => array(
      'administrator' => 'administrator',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own ikz_afkortingen content'.
  $permissions['edit own ikz_afkortingen content'] = array(
    'name' => 'edit own ikz_afkortingen content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ikz_documenten content'.
  $permissions['edit own ikz_documenten content'] = array(
    'name' => 'edit own ikz_documenten content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ikz_formulier content'.
  $permissions['edit own ikz_formulier content'] = array(
    'name' => 'edit own ikz_formulier content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ikz_procedure content'.
  $permissions['edit own ikz_procedure content'] = array(
    'name' => 'edit own ikz_procedure content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish revisions of any ikz_procedure content'.
  $permissions['publish revisions of any ikz_procedure content'] = array(
    'name' => 'publish revisions of any ikz_procedure content',
    'roles' => array(
      'directeur' => 'directeur',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'publish revisions of own ikz_procedure content'.
  $permissions['publish revisions of own ikz_procedure content'] = array(
    'name' => 'publish revisions of own ikz_procedure content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'directeur' => 'directeur',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view field_ikz_auditor'.
  $permissions['view field_ikz_auditor'] = array(
    'name' => 'view field_ikz_auditor',
    'roles' => array(
      'administrator' => 'administrator',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ikz_auditor'.
  $permissions['view own field_ikz_auditor'] = array(
    'name' => 'view own field_ikz_auditor',
    'roles' => array(
      'administrator' => 'administrator',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view revisions of any ikz_procedure content'.
  $permissions['view revisions of any ikz_procedure content'] = array(
    'name' => 'view revisions of any ikz_procedure content',
    'roles' => array(
      'directeur' => 'directeur',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions of own ikz_procedure content'.
  $permissions['view revisions of own ikz_procedure content'] = array(
    'name' => 'view revisions of own ikz_procedure content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'directeur' => 'directeur',
      'kwaliteitscoördinator' => 'kwaliteitscoördinator',
    ),
    'module' => 'revisioning',
  );

  return $permissions;
}
