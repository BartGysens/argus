<?php
/**
 * @file
 * argus_volgkaarten_evaluaties.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_volgkaarten_evaluaties_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_msl_volgkaart_ev_1_zelfev|node|msl_volgkaart_evaluatie|form';
  $field_group->group_name = 'group_msl_volgkaart_ev_1_zelfev';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'msl_volgkaart_evaluatie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_msl_volgkaart_ev_gesprek1';
  $field_group->data = array(
    'label' => 'Zelfevaluatie door de leerling',
    'weight' => '8',
    'children' => array(
      0 => 'field_msl_volgkaart_ev_1_vkbij',
      1 => 'field_msl_volgkaart_ev_1_vkafg',
      2 => 'field_msl_volgkaart_ev_1_vkblfd',
      3 => 'field_msl_volgkaart_ev_1_vkafspr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-msl-volgkaart-ev-1-zelfev field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_msl_volgkaart_ev_1_zelfev|node|msl_volgkaart_evaluatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_msl_volgkaart_ev_2_zelfev|node|msl_volgkaart_evaluatie|form';
  $field_group->group_name = 'group_msl_volgkaart_ev_2_zelfev';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'msl_volgkaart_evaluatie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_msl_volgkaart_ev_gesprek2';
  $field_group->data = array(
    'label' => 'Zelfevaluatie door de leerling',
    'weight' => '15',
    'children' => array(
      0 => 'field_msl_volgkaart_ev_2_vkbij',
      1 => 'field_msl_volgkaart_ev_2_vkafg',
      2 => 'field_msl_volgkaart_ev_2_vkblfd',
      3 => 'field_msl_volgkaart_ev_2_vkafspr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-msl-volgkaart-ev-2-zelfev field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_msl_volgkaart_ev_2_zelfev|node|msl_volgkaart_evaluatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_msl_volgkaart_ev_3_zelfev|node|msl_volgkaart_evaluatie|form';
  $field_group->group_name = 'group_msl_volgkaart_ev_3_zelfev';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'msl_volgkaart_evaluatie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_msl_volgkaart_ev_gesprek3';
  $field_group->data = array(
    'label' => 'Zelfevaluatie door de leerling',
    'weight' => '17',
    'children' => array(
      0 => 'field_msl_volgkaart_ev_3_vkbij',
      1 => 'field_msl_volgkaart_ev_3_vkafg',
      2 => 'field_msl_volgkaart_ev_3_vkblfd',
      3 => 'field_msl_volgkaart_ev_3_vkafspr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-msl-volgkaart-ev-3-zelfev field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_msl_volgkaart_ev_3_zelfev|node|msl_volgkaart_evaluatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_msl_volgkaart_ev_gesprek1|node|msl_volgkaart_evaluatie|form';
  $field_group->group_name = 'group_msl_volgkaart_ev_gesprek1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'msl_volgkaart_evaluatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Evaluatiegesprek 1',
    'weight' => '3',
    'children' => array(
      0 => 'field_msl_volgkaart_ev_1_datum',
      1 => 'field_msl_volgkaart_ev_1_beschr',
      2 => 'group_msl_volgkaart_ev_1_zelfev',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Evaluatiegesprek 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-msl-volgkaart-ev-gesprek1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_msl_volgkaart_ev_gesprek1|node|msl_volgkaart_evaluatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_msl_volgkaart_ev_gesprek2|node|msl_volgkaart_evaluatie|form';
  $field_group->group_name = 'group_msl_volgkaart_ev_gesprek2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'msl_volgkaart_evaluatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Evaluatiegesprek 2',
    'weight' => '4',
    'children' => array(
      0 => 'field_msl_volgkaart_ev_2_datum',
      1 => 'field_msl_volgkaart_ev_2_beschr',
      2 => 'group_msl_volgkaart_ev_2_zelfev',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Evaluatiegesprek 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-msl-volgkaart-ev-gesprek2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_msl_volgkaart_ev_gesprek2|node|msl_volgkaart_evaluatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_msl_volgkaart_ev_gesprek3|node|msl_volgkaart_evaluatie|form';
  $field_group->group_name = 'group_msl_volgkaart_ev_gesprek3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'msl_volgkaart_evaluatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Evaluatiegesprek 3',
    'weight' => '5',
    'children' => array(
      0 => 'field_msl_volgkaart_ev_3_datum',
      1 => 'field_msl_volgkaart_ev_3_beschr',
      2 => 'group_msl_volgkaart_ev_3_zelfev',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Evaluatiegesprek 3',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-msl-volgkaart-ev-gesprek3 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_msl_volgkaart_ev_gesprek3|node|msl_volgkaart_evaluatie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_msl_volgkaart_ev_ilb|node|msl_volgkaart_evaluatie|form';
  $field_group->group_name = 'group_msl_volgkaart_ev_ilb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'msl_volgkaart_evaluatie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Driewekelijks overleg met ILB',
    'weight' => '6',
    'children' => array(
      0 => 'field_msl_volgkaart_ev_ilb_datum',
      1 => 'field_msl_volgkaart_ev_verlengd',
      2 => 'field_msl_volgkaart_ev_stopgezet',
      3 => 'field_msl_volgkaart_ev_motivatie',
      4 => 'field_msl_volgkaart_ev_handteken',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-msl-volgkaart-ev-ilb field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_msl_volgkaart_ev_ilb|node|msl_volgkaart_evaluatie|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Driewekelijks overleg met ILB');
  t('Evaluatiegesprek 1');
  t('Evaluatiegesprek 2');
  t('Evaluatiegesprek 3');
  t('Zelfevaluatie door de leerling');

  return $field_groups;
}
