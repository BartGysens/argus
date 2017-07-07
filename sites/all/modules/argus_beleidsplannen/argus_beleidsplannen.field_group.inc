<?php
/**
 * @file
 * argus_beleidsplannen.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_beleidsplannen_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_beleidsplan_situering|node|argus_beleidsplan|form';
  $field_group->group_name = 'group_beleidsplan_situering';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'beleidsplan';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Situering',
    'weight' => '6',
    'children' => array(
      0 => 'field_beleidsplan_niveau',
      1 => 'field_ikz_auditor',
      2 => 'field_ikz_revisie',
      3 => 'field_ikz_nummer',
      4 => 'field_beleidsplan_overkoepelend',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-beleidsplan-situering field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_beleidsplan_situering|node|argus_beleidsplan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_beleidsplan_team|node|argus_beleidsplan|form';
  $field_group->group_name = 'group_beleidsplan_team';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'beleidsplan';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Team',
    'weight' => '5',
    'children' => array(
      0 => 'field_personeelsleden',
      1 => 'field_voorzitter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-beleidsplan-team field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_beleidsplan_team|node|argus_beleidsplan|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_situering|node|argus_beleidsplan|default';
  $field_group->group_name = 'group_situering';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'beleidsplan';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Situering',
    'weight' => '5',
    'children' => array(
      0 => 'field_beleidsplan_niveau',
      1 => 'field_ikz_auditor',
      2 => 'field_ikz_revisie',
      3 => 'field_ikz_nummer',
      4 => 'field_beleidsplan_overkoepelend',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-situering field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_situering|node|argus_beleidsplan|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_team|node|argus_beleidsplan|default';
  $field_group->group_name = 'group_team';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'beleidsplan';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Team',
    'weight' => '4',
    'children' => array(
      0 => 'field_personeelsleden',
      1 => 'field_voorzitter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-team field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_team|node|argus_beleidsplan|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Situering');
  t('Team');

  return $field_groups;
}
