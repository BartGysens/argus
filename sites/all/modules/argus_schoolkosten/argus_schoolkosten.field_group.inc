<?php
/**
 * @file
 * argus_schoolkosten.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_schoolkosten_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boek|node|schoolkost_item|default';
  $field_group->group_name = 'group_boek';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'schoolkost_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Boek',
    'weight' => '5',
    'children' => array(
      0 => 'field_schoolkost_item_isbn',
      1 => 'field_schoolkost_item_uitgeverij',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-boek field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_boek|node|schoolkost_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_boek|node|schoolkost_item|form';
  $field_group->group_name = 'group_boek';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'schoolkost_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Boek',
    'weight' => '7',
    'children' => array(
      0 => 'field_schoolkost_item_isbn',
      1 => 'field_schoolkost_item_uitgeverij',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-boek field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_boek|node|schoolkost_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emaima|node|schoolkost_item|default';
  $field_group->group_name = 'group_emaima';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'schoolkost_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'EMA/IMA',
    'weight' => '6',
    'children' => array(
      0 => 'field_schoolkost_item_locatie',
      1 => 'field_schoolkost_item_ema_doelst',
      2 => 'field_schoolkost_item_vervoermid',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-emaima field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_emaima|node|schoolkost_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_emaima|node|schoolkost_item|form';
  $field_group->group_name = 'group_emaima';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'schoolkost_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'EMA/IMA',
    'weight' => '10',
    'children' => array(
      0 => 'field_schoolkost_item_locatie',
      1 => 'field_schoolkost_item_ema_doelst',
      2 => 'field_schoolkost_item_vervoermid',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-emaima field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_emaima|node|schoolkost_item|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Boek');
  t('EMA/IMA');

  return $field_groups;
}
