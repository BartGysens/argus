<?php
/**
 * @file
 * argus_sleutelbeheer.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_sleutelbeheer_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_fullname|user|user|form';
  $field_group->group_name = 'group_user_fullname';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Volledige naam',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_sms_naam',
      1 => 'field_user_sms_voornaam',
      2 => 'field_user_organisatie',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-fullname field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_fullname|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Volledige naam');

  return $field_groups;
}
