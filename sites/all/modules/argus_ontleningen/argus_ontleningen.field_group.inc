<?php
/**
 * @file
 * argus_ontleningen.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_ontleningen_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ontleen_bij_inlevering|node|ontlening|form';
  $field_group->group_name = 'group_ontleen_bij_inlevering';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ontlening';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bij inlevering',
    'weight' => '2',
    'children' => array(
      0 => 'field_ontleen_terugop',
      1 => 'field_ontleen_staat',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ontleen-bij-inlevering field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ontleen_bij_inlevering|node|ontlening|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ontleen_opvoorhand|node|ontlening|form';
  $field_group->group_name = 'group_ontleen_opvoorhand';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ontlening';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Op voorhand',
    'weight' => '1',
    'children' => array(
      0 => 'field_ontleen_ontlener',
      1 => 'field_ontleen_periode',
      2 => 'field_ontleen_materiaal',
      3 => 'field_ontleen_inventarisnummer',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ontleen-opvoorhand field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ontleen_opvoorhand|node|ontlening|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bij inlevering');
  t('Op voorhand');

  return $field_groups;
}
