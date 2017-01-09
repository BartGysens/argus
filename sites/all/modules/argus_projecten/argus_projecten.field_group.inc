<?php
/**
 * @file
 * argus_projecten.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_projecten_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_betrokkenen|node|project|default';
  $field_group->group_name = 'group_betrokkenen';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Betrokkenen',
    'weight' => '4',
    'children' => array(
      0 => 'field_leerlingen',
      1 => 'field_personeelsleden',
      2 => 'field_klassen',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-betrokkenen field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_betrokkenen|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_betrokkenen|node|project|form';
  $field_group->group_name = 'group_betrokkenen';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Betrokken personen & groepen',
    'weight' => '6',
    'children' => array(
      0 => 'field_leerlingen',
      1 => 'field_personeelsleden',
      2 => 'field_leerkracht',
      3 => 'field_klassen',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-betrokkenen field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_betrokkenen|node|project|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Betrokken personen & groepen');
  t('Betrokkenen');

  return $field_groups;
}
