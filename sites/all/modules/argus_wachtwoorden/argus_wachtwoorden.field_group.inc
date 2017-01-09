<?php
/**
 * @file
 * argus_wachtwoorden.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_wachtwoorden_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ict_account_or|node|ict_account|form';
  $field_group->group_name = 'group_ict_account_or';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ict_account';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Óf gebruikt bij, óf hardware',
    'weight' => '3',
    'children' => array(
      0 => 'field_ict_account_hardware',
      1 => 'field_ict_account_voor',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Óf gebruikt bij, óf hardware',
      'instance_settings' => array(
        'required_fields' => '1',
        'id' => '',
        'classes' => 'group-ict-account-or field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ict_account_or|node|ict_account|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Óf gebruikt bij, óf hardware');

  return $field_groups;
}
