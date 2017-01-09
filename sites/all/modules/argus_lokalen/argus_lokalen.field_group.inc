<?php
/**
 * @file
 * argus_lokalen.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_lokalen_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_untis|node|lokaal|form';
  $field_group->group_name = 'group_untis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lokaal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GP Untis',
    'weight' => '9',
    'children' => array(
      0 => 'field_lokaal_id_untis',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-untis field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_untis|node|lokaal|form'] = $field_group;

  return $export;
}
