<?php
/**
 * @file
 * argus_technische_meldingen.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_technische_meldingen_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tm_opvolging|node|technische_melding|form';
  $field_group->group_name = 'group_tm_opvolging';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'technische_melding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Opvolging',
    'weight' => '9',
    'children' => array(
      0 => 'field_tm_opgevolgd_door',
      1 => 'field_tm_deadline',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Opvolging',
      'instance_settings' => array(
        'required_fields' => '1',
        'classes' => 'group-tm-opvolging field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_tm_opvolging|node|technische_melding|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Opvolging');

  return $field_groups;
}
