<?php
/**
 * @file
 * argus_register_van_feiten_door_derden.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_register_van_feiten_door_derden_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|register_van_feiten_door_derden|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'register_van_feiten_door_derden';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_vormen',
      1 => 'field_uitingen',
      2 => 'field_intensiteit',
      3 => 'field_gevolgen',
      4 => 'field_categorie',
      5 => 'field_aanleiding_van_de_agressie',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_details|node|register_van_feiten_door_derden|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|register_van_feiten_door_derden|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'register_van_feiten_door_derden';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_vormen',
      1 => 'field_uitingen',
      2 => 'field_intensiteit',
      3 => 'field_gevolgen',
      4 => 'field_categorie',
      5 => 'field_aanleiding_van_de_agressie',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_details|node|register_van_feiten_door_derden|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gegevens|node|register_van_feiten_door_derden|default';
  $field_group->group_name = 'group_gegevens';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'register_van_feiten_door_derden';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gegevens',
    'weight' => '0',
    'children' => array(
      0 => 'field_plaats',
      1 => 'field_datum_en_tijd',
      2 => 'field_priv_',
      3 => 'field_hoedanigheid_betrokkene_de',
      4 => 'field_tijdens_de_werkuren_',
      5 => 'field_betrokkene_derde_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gegevens field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_gegevens|node|register_van_feiten_door_derden|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gegevens|node|register_van_feiten_door_derden|form';
  $field_group->group_name = 'group_gegevens';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'register_van_feiten_door_derden';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gegevens',
    'weight' => '0',
    'children' => array(
      0 => 'field_plaats',
      1 => 'field_datum_en_tijd',
      2 => 'field_priv_',
      3 => 'field_hoedanigheid_betrokkene_de',
      4 => 'field_tijdens_de_werkuren_',
      5 => 'field_betrokkene_derde_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gegevens field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_gegevens|node|register_van_feiten_door_derden|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_schade|node|register_van_feiten_door_derden|default';
  $field_group->group_name = 'group_schade';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'register_van_feiten_door_derden';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Schade',
    'weight' => '2',
    'children' => array(
      0 => 'field_persoonlijke_schade',
      1 => 'field_aangifte',
      2 => 'field_materi_le_schade',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-schade field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_schade|node|register_van_feiten_door_derden|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_schade|node|register_van_feiten_door_derden|form';
  $field_group->group_name = 'group_schade';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'register_van_feiten_door_derden';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Schade',
    'weight' => '2',
    'children' => array(
      0 => 'field_persoonlijke_schade',
      1 => 'field_aangifte',
      2 => 'field_materi_le_schade',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-schade field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_schade|node|register_van_feiten_door_derden|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Details');
  t('Gegevens');
  t('Schade');

  return $field_groups;
}
