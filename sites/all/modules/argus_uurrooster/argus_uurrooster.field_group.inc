<?php
/**
 * @file
 * argus_uurrooster.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_uurrooster_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_untis|node|uurrooster_les|form';
  $field_group->group_name = 'group_untis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uurrooster_les';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GP Untis',
    'weight' => '10',
    'children' => array(
      0 => 'field_uurrooster_les_id_untis',
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
  $field_groups['group_untis|node|uurrooster_les|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_untis|node|uurrooster_periode|form';
  $field_group->group_name = 'group_untis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uurrooster_periode';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GP Untis',
    'weight' => '43',
    'children' => array(
      0 => 'field_uurrooster_periode_id',
      1 => 'field_uurrooster_periode_dag',
      2 => 'field_uurrooster_periode_periode',
      3 => 'field_uurrooster_periode_start',
      4 => 'field_uurrooster_periode_eind',
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
  $field_groups['group_untis|node|uurrooster_periode|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('GP Untis');

  return $field_groups;
}
