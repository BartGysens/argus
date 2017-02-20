<?php
/**
 * @file
 * argus_vakken.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_vakken_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_technical|node|vak|default';
  $field_group->group_name = 'group_technical';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vak';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Technische gegevens',
    'weight' => '3',
    'children' => array(
      0 => 'field_vak_untis_id',
      1 => 'field_vak_skore_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Technische gegevens',
      'instance_settings' => array(
        'classes' => 'group-technical field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_technical|node|vak|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_untis|node|vak|form';
  $field_group->group_name = 'group_untis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vak';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GP Untis',
    'weight' => '8',
    'children' => array(
      0 => 'field_vak_untis_id',
      1 => 'field_vak_skore_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-untis field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_untis|node|vak|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('GP Untis');
  t('Technische gegevens');

  return $field_groups;
}
