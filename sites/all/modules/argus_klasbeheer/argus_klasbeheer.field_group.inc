<?php
/**
 * @file
 * argus_klasbeheer.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_klasbeheer_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_klas_group_argus_sms|node|klas|form';
  $field_group->group_name = 'group_klas_group_argus_sms';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'klas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extra gegevens uit Smartschool',
    'weight' => '12',
    'children' => array(
      0 => 'field_klas_sms_code',
      1 => 'field_klas_sms_id',
      2 => 'field_klas_sms_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-klas-group-argus-sms field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_klas_group_argus_sms|node|klas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sms|node|klas|default';
  $field_group->group_name = 'group_sms';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'klas';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Extra gegevens uit Smartschool',
    'weight' => '6',
    'children' => array(
      0 => 'field_klas_sms_code',
      1 => 'field_klas_sms_id',
      2 => 'field_klas_sms_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sms field-group-fieldset',
      ),
    ),
  );
  $export['group_sms|node|klas|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_so64|node|klas|default';
  $field_group->group_name = 'group_so64';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'klas';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Volgens SO64',
    'weight' => '5',
    'children' => array(
      0 => 'field_klas_graad',
      1 => 'field_klas_leerjaar',
      2 => 'field_klas_onderwijsvorm',
      3 => 'field_klas_structuuronderdeel',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-so64 field-group-fieldset',
      ),
    ),
  );
  $export['group_so64|node|klas|default'] = $field_group;

  return $export;
}
