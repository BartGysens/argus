<?php
/**
 * @file
 * argus_verslagen.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_verslagen_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rollen|node|verslag|form';
  $field_group->group_name = 'group_rollen';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'verslag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rollen',
    'weight' => '8',
    'children' => array(
      0 => 'field_verslag_rollen',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-rollen field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_rollen|node|verslag|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Rollen');

  return $field_groups;
}
