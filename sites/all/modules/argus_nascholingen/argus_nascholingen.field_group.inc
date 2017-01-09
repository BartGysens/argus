<?php
/**
 * @file
 * argus_nascholingen.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_nascholingen_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|event_nascholing|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_nascholing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_ev_datum',
      1 => 'field_ev_inrichter',
      2 => 'field_ev_kostprijs_nas',
      3 => 'field_ev_opleidingscheques',
      4 => 'field_ev_vakgroep',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_details|node|event_nascholing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|event_nascholing|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_nascholing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '5',
    'children' => array(
      0 => 'field_ev_datum',
      1 => 'field_ev_inrichter',
      2 => 'field_ev_kostprijs_nas',
      3 => 'field_ev_opleidingscheques',
      4 => 'field_ev_vakgroep',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-details field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_details|node|event_nascholing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_evaluatie|node|event_nascholing|form';
  $field_group->group_name = 'group_evaluatie';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_nascholing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Evaluatie',
    'weight' => '9',
    'children' => array(
      0 => 'field_ev_verwachtingen',
      1 => 'field_ev_zin_inhoud',
      2 => 'field_ev_toepasbaar',
      3 => 'field_ev_voorbeeld',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-evaluatie field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_evaluatie|node|event_nascholing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_status|node|event_nascholing|default';
  $field_group->group_name = 'group_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_nascholing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '5',
    'children' => array(
      0 => 'field_ev_attest',
      1 => 'field_ev_goedkeuring',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-status field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_status|node|event_nascholing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_status|node|event_nascholing|form';
  $field_group->group_name = 'group_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_nascholing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '6',
    'children' => array(
      0 => 'field_ev_attest',
      1 => 'field_ev_goedkeuring',
      2 => 'field_ev_feedback',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-status field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_status|node|event_nascholing|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Details');
  t('Evaluatie');
  t('Status');

  return $field_groups;
}
