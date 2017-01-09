<?php
/**
 * @file
 * argus_examens.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_examens_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create examen content'.
  $permissions['create examen content'] = array(
    'name' => 'create examen content',
    'roles' => array(
      'administrator' => 'administrator',
      'leerkracht' => 'leerkracht',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_examen_modeloplossingen'.
  $permissions['create field_examen_modeloplossingen'] = array(
    'name' => 'create field_examen_modeloplossingen',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerkracht' => 'leerkracht',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_examen_vragen'.
  $permissions['create field_examen_vragen'] = array(
    'name' => 'create field_examen_vragen',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerkracht' => 'leerkracht',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any examen content'.
  $permissions['delete any examen content'] = array(
    'name' => 'delete any examen content',
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

  // Exported permission: 'delete own examen content'.
  $permissions['delete own examen content'] = array(
    'name' => 'delete own examen content',
    'roles' => array(
      'administrator' => 'administrator',
      'pedagogische coördinator' => 'pedagogische coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any examen content'.
  $permissions['edit any examen content'] = array(
    'name' => 'edit any examen content',
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

  // Exported permission: 'edit field_examen_modeloplossingen'.
  $permissions['edit field_examen_modeloplossingen'] = array(
    'name' => 'edit field_examen_modeloplossingen',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_examen_vragen'.
  $permissions['edit field_examen_vragen'] = array(
    'name' => 'edit field_examen_vragen',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own examen content'.
  $permissions['edit own examen content'] = array(
    'name' => 'edit own examen content',
    'roles' => array(
      'administrator' => 'administrator',
      'leerkracht' => 'leerkracht',
      'pedagogische coördinator' => 'pedagogische coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_examen_modeloplossingen'.
  $permissions['edit own field_examen_modeloplossingen'] = array(
    'name' => 'edit own field_examen_modeloplossingen',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_examen_vragen'.
  $permissions['edit own field_examen_vragen'] = array(
    'name' => 'edit own field_examen_vragen',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_examen_modeloplossingen'.
  $permissions['view field_examen_modeloplossingen'] = array(
    'name' => 'view field_examen_modeloplossingen',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_examen_vragen'.
  $permissions['view field_examen_vragen'] = array(
    'name' => 'view field_examen_vragen',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_examen_modeloplossingen'.
  $permissions['view own field_examen_modeloplossingen'] = array(
    'name' => 'view own field_examen_modeloplossingen',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_examen_vragen'.
  $permissions['view own field_examen_vragen'] = array(
    'name' => 'view own field_examen_vragen',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'leerlingsecretariaat' => 'leerlingsecretariaat',
      'pedagogische coördinator' => 'pedagogische coördinator',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
