<?php
/**
 * @file
 * argus_hrm.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function argus_hrm_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access argus_hrm content'.
  $permissions['access argus_hrm content'] = array(
    'name' => 'access argus_hrm content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'argus_hrm',
  );

  // Exported permission: 'create hrm_evaluatiegesprek content'.
  $permissions['create hrm_evaluatiegesprek content'] = array(
    'name' => 'create hrm_evaluatiegesprek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create hrm_flitsbezoek content'.
  $permissions['create hrm_flitsbezoek content'] = array(
    'name' => 'create hrm_flitsbezoek content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create hrm_functioneringsgesprek content'.
  $permissions['create hrm_functioneringsgesprek content'] = array(
    'name' => 'create hrm_functioneringsgesprek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create hrm_klasbezoek content'.
  $permissions['create hrm_klasbezoek content'] = array(
    'name' => 'create hrm_klasbezoek content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create hrm_planningsgesprek content'.
  $permissions['create hrm_planningsgesprek content'] = array(
    'name' => 'create hrm_planningsgesprek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hrm_evaluatiegesprek content'.
  $permissions['delete any hrm_evaluatiegesprek content'] = array(
    'name' => 'delete any hrm_evaluatiegesprek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hrm_flitsbezoek content'.
  $permissions['delete any hrm_flitsbezoek content'] = array(
    'name' => 'delete any hrm_flitsbezoek content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any hrm_functioneringsgesprek content'.
  $permissions['delete any hrm_functioneringsgesprek content'] = array(
    'name' => 'delete any hrm_functioneringsgesprek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hrm_klasbezoek content'.
  $permissions['delete any hrm_klasbezoek content'] = array(
    'name' => 'delete any hrm_klasbezoek content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any hrm_planningsgesprek content'.
  $permissions['delete any hrm_planningsgesprek content'] = array(
    'name' => 'delete any hrm_planningsgesprek content',
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

  // Exported permission: 'delete own hrm_evaluatiegesprek content'.
  $permissions['delete own hrm_evaluatiegesprek content'] = array(
    'name' => 'delete own hrm_evaluatiegesprek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hrm_flitsbezoek content'.
  $permissions['delete own hrm_flitsbezoek content'] = array(
    'name' => 'delete own hrm_flitsbezoek content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own hrm_functioneringsgesprek content'.
  $permissions['delete own hrm_functioneringsgesprek content'] = array(
    'name' => 'delete own hrm_functioneringsgesprek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hrm_klasbezoek content'.
  $permissions['delete own hrm_klasbezoek content'] = array(
    'name' => 'delete own hrm_klasbezoek content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own hrm_planningsgesprek content'.
  $permissions['delete own hrm_planningsgesprek content'] = array(
    'name' => 'delete own hrm_planningsgesprek content',
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

  // Exported permission: 'edit any hrm_evaluatiegesprek content'.
  $permissions['edit any hrm_evaluatiegesprek content'] = array(
    'name' => 'edit any hrm_evaluatiegesprek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any hrm_flitsbezoek content'.
  $permissions['edit any hrm_flitsbezoek content'] = array(
    'name' => 'edit any hrm_flitsbezoek content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any hrm_functioneringsgesprek content'.
  $permissions['edit any hrm_functioneringsgesprek content'] = array(
    'name' => 'edit any hrm_functioneringsgesprek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any hrm_klasbezoek content'.
  $permissions['edit any hrm_klasbezoek content'] = array(
    'name' => 'edit any hrm_klasbezoek content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any hrm_planningsgesprek content'.
  $permissions['edit any hrm_planningsgesprek content'] = array(
    'name' => 'edit any hrm_planningsgesprek content',
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

  // Exported permission: 'edit own hrm_evaluatiegesprek content'.
  $permissions['edit own hrm_evaluatiegesprek content'] = array(
    'name' => 'edit own hrm_evaluatiegesprek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hrm_flitsbezoek content'.
  $permissions['edit own hrm_flitsbezoek content'] = array(
    'name' => 'edit own hrm_flitsbezoek content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own hrm_functioneringsgesprek content'.
  $permissions['edit own hrm_functioneringsgesprek content'] = array(
    'name' => 'edit own hrm_functioneringsgesprek content',
    'roles' => array(
      'administrator' => 'administrator',
      'directeur' => 'directeur',
      'directielid' => 'directielid',
      'personeelssecretariaat' => 'personeelssecretariaat',
      'technisch adviseur-coördinator' => 'technisch adviseur-coördinator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hrm_klasbezoek content'.
  $permissions['edit own hrm_klasbezoek content'] = array(
    'name' => 'edit own hrm_klasbezoek content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own hrm_planningsgesprek content'.
  $permissions['edit own hrm_planningsgesprek content'] = array(
    'name' => 'edit own hrm_planningsgesprek content',
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

  return $permissions;
}
