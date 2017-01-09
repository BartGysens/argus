<?php
/**
 * @file
 * argus_oudercontacten.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_oudercontacten_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create oudercontact content'.
  $permissions['create oudercontact content'] = array(
    'name' => 'create oudercontact content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any oudercontact content'.
  $permissions['delete any oudercontact content'] = array(
    'name' => 'delete any oudercontact content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own oudercontact content'.
  $permissions['delete own oudercontact content'] = array(
    'name' => 'delete own oudercontact content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any oudercontact content'.
  $permissions['edit any oudercontact content'] = array(
    'name' => 'edit any oudercontact content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'hulpklastitularis' => 'hulpklastitularis',
      'interne leerlingbegeleider' => 'interne leerlingbegeleider',
      'klastitularis' => 'klastitularis',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'ondersteunend personeelslid' => 'ondersteunend personeelslid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own oudercontact content'.
  $permissions['edit own oudercontact content'] = array(
    'name' => 'edit own oudercontact content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur' => 'technisch adviseur',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
