<?php
/**
 * @file
 * argus_hrm_overuren.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_hrm_overuren_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aanvraag|node|hrm_overuren|default';
  $field_group->group_name = 'group_aanvraag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hrm_overuren';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Aanvraag',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_hrm_overuren_uitv_aantal',
      2 => 'field_hrm_overuren_status',
      3 => 'field_datum',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-aanvraag field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_aanvraag|node|hrm_overuren|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hrm_overuren_terugname|node|hrm_overuren|form';
  $field_group->group_name = 'group_hrm_overuren_terugname';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hrm_overuren';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Terugname',
    'weight' => '2',
    'children' => array(
      0 => 'field_hrm_overuren_terug_aantal',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-hrm-overuren-terugname field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_hrm_overuren_terugname|node|hrm_overuren|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hrm_overuren_uitvoering|node|hrm_overuren|form';
  $field_group->group_name = 'group_hrm_overuren_uitvoering';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hrm_overuren';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Uitvoering',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_hrm_overuren_uitv_aantal',
      2 => 'field_hrm_overuren_status',
      3 => 'field_datum',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-hrm-overuren-uitvoering field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_hrm_overuren_uitvoering|node|hrm_overuren|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_terugname|node|hrm_overuren|default';
  $field_group->group_name = 'group_terugname';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hrm_overuren';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Terugname',
    'weight' => '2',
    'children' => array(
      0 => 'field_hrm_overuren_terug_aantal',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-terugname field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_terugname|node|hrm_overuren|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Aanvraag');
  t('Terugname');
  t('Uitvoering');

  return $field_groups;
}
