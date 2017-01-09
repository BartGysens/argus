<?php
/**
 * @file
 * argus_aankoopdossiers.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_aankoopdossiers_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aankoop_begroting|node|aankoopdossier|default';
  $field_group->group_name = 'group_aankoop_begroting';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'aankoopdossier';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Begroting',
    'weight' => '2',
    'children' => array(
      0 => 'field_aankoop_vakgroep',
      1 => 'field_aankoop_budget',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-aankoop-begroting field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_aankoop_begroting|node|aankoopdossier|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aankoop_begroting|node|aankoopdossier|form';
  $field_group->group_name = 'group_aankoop_begroting';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'aankoopdossier';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Begroting',
    'weight' => '4',
    'children' => array(
      0 => 'field_aankoop_vakgroep',
      1 => 'field_aankoop_budget',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-aankoop-begroting field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_aankoop_begroting|node|aankoopdossier|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aankoop_prijsaanvraag|node|aankoopdossier|default';
  $field_group->group_name = 'group_aankoop_prijsaanvraag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'aankoopdossier';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Prijsaanvraag',
    'weight' => '3',
    'children' => array(
      0 => 'field_aankoop_leverancier',
      1 => 'field_aankoop_offerte',
      2 => 'field_aankoop_leveranciers',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Prijsaanvraag',
      'instance_settings' => array(
        'classes' => 'group-aankoop-prijsaanvraag field-group-fieldset pagebreaker-before',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_aankoop_prijsaanvraag|node|aankoopdossier|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aankoop_prijsvraag|node|aankoopdossier|form';
  $field_group->group_name = 'group_aankoop_prijsvraag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'aankoopdossier';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Prijsvraag',
    'weight' => '5',
    'children' => array(
      0 => 'field_aankoop_leverancier',
      1 => 'field_aankoop_offerte',
      2 => 'field_aankoop_leveranciers',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-aankoop-prijsvraag field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_aankoop_prijsvraag|node|aankoopdossier|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Begroting');
  t('Prijsaanvraag');
  t('Prijsvraag');

  return $field_groups;
}
