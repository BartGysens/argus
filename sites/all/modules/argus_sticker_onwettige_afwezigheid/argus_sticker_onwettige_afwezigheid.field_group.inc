<?php
/**
 * @file
 * argus_sticker_onwettige_afwezigheid.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_sticker_onwettige_afwezigheid_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_msl_oa_sticker_f1|node|msl_oa_sticker|default';
  $field_group->group_name = 'group_msl_oa_sticker_f1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'msl_oa_sticker';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fase 1',
    'weight' => '1',
    'children' => array(
      0 => 'field_msl_oa_sticker_f1_datum',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-msl-oa-sticker-f1 field-group-fieldset',
      ),
    ),
  );
  $export['group_msl_oa_sticker_f1|node|msl_oa_sticker|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_msl_oa_sticker_f1|node|msl_oa_sticker|form';
  $field_group->group_name = 'group_msl_oa_sticker_f1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'msl_oa_sticker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fase 1',
    'weight' => '4',
    'children' => array(
      0 => 'field_msl_oa_sticker_f1_datum',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-msl-oa-sticker-f1 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_msl_oa_sticker_f1|node|msl_oa_sticker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_msl_oa_sticker_f2|node|msl_oa_sticker|default';
  $field_group->group_name = 'group_msl_oa_sticker_f2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'msl_oa_sticker';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fase 2',
    'weight' => '3',
    'children' => array(
      0 => 'field_msl_oa_sticker_f2_datum',
      1 => 'field_msl_oa_sticker_f2_maatreg',
      2 => 'field_msl_oa_sticker_f2_m_datum',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-msl-oa-sticker-f2 field-group-fieldset',
      ),
    ),
  );
  $export['group_msl_oa_sticker_f2|node|msl_oa_sticker|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_msl_oa_sticker_f2|node|msl_oa_sticker|form';
  $field_group->group_name = 'group_msl_oa_sticker_f2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'msl_oa_sticker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fase 2',
    'weight' => '5',
    'children' => array(
      0 => 'field_msl_oa_sticker_f2_datum',
      1 => 'field_msl_oa_sticker_f2_maatreg',
      2 => 'field_msl_oa_sticker_f2_m_datum',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-msl-oa-sticker-f2 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_msl_oa_sticker_f2|node|msl_oa_sticker|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_msl_oa_sticker_f3|node|msl_oa_sticker|default';
  $field_group->group_name = 'group_msl_oa_sticker_f3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'msl_oa_sticker';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fase 3',
    'weight' => '4',
    'children' => array(
      0 => 'field_msl_oa_sticker_f3_datum',
      1 => 'field_msl_oa_sticker_f3_m_datum',
      2 => 'field_msl_oa_sticker_f3_maatreg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-msl-oa-sticker-f3 field-group-fieldset',
      ),
    ),
  );
  $export['group_msl_oa_sticker_f3|node|msl_oa_sticker|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_msl_oa_sticker_f3|node|msl_oa_sticker|form';
  $field_group->group_name = 'group_msl_oa_sticker_f3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'msl_oa_sticker';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fase 3',
    'weight' => '6',
    'children' => array(
      0 => 'field_msl_oa_sticker_f3_datum',
      1 => 'field_msl_oa_sticker_f3_m_datum',
      2 => 'field_msl_oa_sticker_f3_maatreg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-msl-oa-sticker-f3 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_msl_oa_sticker_f3|node|msl_oa_sticker|form'] = $field_group;

  return $export;
}
