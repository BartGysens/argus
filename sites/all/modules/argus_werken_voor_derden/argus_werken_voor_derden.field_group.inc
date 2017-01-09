<?php
/**
 * @file
 * argus_werken_voor_derden.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_werken_voor_derden_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_klant|node|werk_voor_derden|default';
  $field_group->group_name = 'group_klant';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'werk_voor_derden';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Klant',
    'weight' => '7',
    'children' => array(
      0 => 'field_telefoonnummer',
      1 => 'field_email',
      2 => 'field_gemeente',
      3 => 'field_busnummer',
      4 => 'field_huisnummer',
      5 => 'field_straat',
      6 => 'field_postcode',
      7 => 'field_wvd_naam',
      8 => 'field_contactpersoon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-klant field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_klant|node|werk_voor_derden|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_klant|node|werk_voor_derden|form';
  $field_group->group_name = 'group_klant';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'werk_voor_derden';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Klant',
    'weight' => '8',
    'children' => array(
      0 => 'field_telefoonnummer',
      1 => 'field_email',
      2 => 'field_gemeente',
      3 => 'field_busnummer',
      4 => 'field_huisnummer',
      5 => 'field_straat',
      6 => 'field_postcode',
      7 => 'field_wvd_naam',
      8 => 'field_contactpersoon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-klant field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_klant|node|werk_voor_derden|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Klant');

  return $field_groups;
}
