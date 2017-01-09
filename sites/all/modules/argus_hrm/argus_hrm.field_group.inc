<?php
/**
 * @file
 * argus_hrm.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_hrm_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g1|node|hrm_evaluatiegesprek|form';
  $field_group->group_name = 'group_g1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hrm_evaluatiegesprek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '1. Plannen en voorbereiden van de lessen',
    'weight' => '3',
    'children' => array(
      0 => 'field_eg1_positieve_observaties',
      1 => 'field_eg1_werkpunten_afspraken',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_g1|node|hrm_evaluatiegesprek|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g2|node|hrm_evaluatiegesprek|form';
  $field_group->group_name = 'group_g2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hrm_evaluatiegesprek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '2. Efficiënt en leerlinggericht lesgeven',
    'weight' => '4',
    'children' => array(
      0 => 'field_eg2_positieve_observaties',
      1 => 'field_eg2_werkpunten_afspraken',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g2 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_g2|node|hrm_evaluatiegesprek|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g3|node|hrm_evaluatiegesprek|form';
  $field_group->group_name = 'group_g3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hrm_evaluatiegesprek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '3. Begeleiden van de leerlingen',
    'weight' => '5',
    'children' => array(
      0 => 'field_eg3_positieve_observaties',
      1 => 'field_eg3_werkpunten_afspraken',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g3 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_g3|node|hrm_evaluatiegesprek|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g4|node|hrm_evaluatiegesprek|form';
  $field_group->group_name = 'group_g4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hrm_evaluatiegesprek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '4. Evalueren van de leerlingen',
    'weight' => '6',
    'children' => array(
      0 => 'field_eg4_positieve_observaties',
      1 => 'field_eg4_werkpunten_afspraken',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g4 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_g4|node|hrm_evaluatiegesprek|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g5|node|hrm_evaluatiegesprek|form';
  $field_group->group_name = 'group_g5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hrm_evaluatiegesprek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '5. Opvoeden van de leerlingen',
    'weight' => '7',
    'children' => array(
      0 => 'field_eg5_positieve_observaties',
      1 => 'field_eg5_werkpunten_afspraken',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g5 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_g5|node|hrm_evaluatiegesprek|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g6|node|hrm_evaluatiegesprek|form';
  $field_group->group_name = 'group_g6';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hrm_evaluatiegesprek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '6. Meewerken aan de uitbouw van de school als organisatie',
    'weight' => '8',
    'children' => array(
      0 => 'field_eg6_positieve_observaties',
      1 => 'field_eg6_werkpunten_afspraken',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g6 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_g6|node|hrm_evaluatiegesprek|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g7|node|hrm_evaluatiegesprek|form';
  $field_group->group_name = 'group_g7';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hrm_evaluatiegesprek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '7. Overleggen en samenwerken',
    'weight' => '9',
    'children' => array(
      0 => 'field_eg7_positieve_observaties',
      1 => 'field_eg7_werkpunten_afspraken',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g7 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_g7|node|hrm_evaluatiegesprek|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g8|node|hrm_evaluatiegesprek|form';
  $field_group->group_name = 'group_g8';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hrm_evaluatiegesprek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '8. Uitvoeren van administratieve taken',
    'weight' => '10',
    'children' => array(
      0 => 'field_eg8_positieve_observaties',
      1 => 'field_eg8_werkpunten_afspraken',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g8 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_g8|node|hrm_evaluatiegesprek|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g9|node|hrm_evaluatiegesprek|form';
  $field_group->group_name = 'group_g9';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hrm_evaluatiegesprek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '9. Nascholing',
    'weight' => '11',
    'children' => array(
      0 => 'field_eg9_positieve_observaties',
      1 => 'field_eg9_werkpunten_afspraken',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g9 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_g9|node|hrm_evaluatiegesprek|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('1. Plannen en voorbereiden van de lessen');
  t('2. Efficiënt en leerlinggericht lesgeven');
  t('3. Begeleiden van de leerlingen');
  t('4. Evalueren van de leerlingen');
  t('5. Opvoeden van de leerlingen');
  t('6. Meewerken aan de uitbouw van de school als organisatie');
  t('7. Overleggen en samenwerken');
  t('8. Uitvoeren van administratieve taken');
  t('9. Nascholing');

  return $field_groups;
}
