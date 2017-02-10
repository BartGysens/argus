<?php
/**
 * @file
 * argus_inventaris.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_inventaris_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inventaris|node|argus_inventaris|form';
  $field_group->group_name = 'group_inventaris';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'inventaris';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inventaris',
    'weight' => '2',
    'children' => array(
      0 => 'field_inventaris_categorie',
      1 => 'field_personeelslid',
      2 => 'field_klas_structuuronderdeel',
      3 => 'field_jaar',
      4 => 'field_factuurnummer',
      5 => 'field_lokaal',
      6 => 'field_inventaris_fir',
      7 => 'field_inventaris_bir',
      8 => 'field_inventaris_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-inventaris field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_inventaris|node|argus_inventaris|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inventaris|node|inventaris|default';
  $field_group->group_name = 'group_inventaris';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'inventaris';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inventaris',
    'weight' => '4',
    'children' => array(
      0 => 'field_inventaris_categorie',
      1 => 'field_klas_structuuronderdeel',
      2 => 'field_jaar',
      3 => 'field_factuurnummer',
      4 => 'field_lokaal',
      5 => 'field_inventaris_fir',
      6 => 'field_inventaris_bir',
      7 => 'field_inventaris_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-inventaris field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_inventaris|node|inventaris|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Inventaris');

  return $field_groups;
}
