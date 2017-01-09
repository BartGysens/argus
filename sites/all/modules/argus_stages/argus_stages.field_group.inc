<?php
/**
 * @file
 * argus_stages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_stages_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_soort|node|stageperiode|form';
  $field_group->group_name = 'group_soort';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stageperiode';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Soort stage',
    'weight' => '3',
    'children' => array(
      0 => 'field_aantal_dagen_alternerende_',
      1 => 'field_aantal_dagen_blokstage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-soort field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_soort|node|stageperiode|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stagebezoek|node|stagebezoek|default';
  $field_group->group_name = 'group_stagebezoek';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stagebezoek';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stagebezoek',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_tijdstip',
      2 => 'field_stageverslag',
      3 => 'field_stage_evaluatie',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-stagebezoek field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_stagebezoek|node|stagebezoek|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stageregister|node|stagebezoek|form';
  $field_group->group_name = 'group_stageregister';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stagebezoek';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stageregister',
    'weight' => '0',
    'children' => array(
      0 => 'field_stage',
      1 => 'field_tijdstip',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-stageregister field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_stageregister|node|stagebezoek|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Soort stage');
  t('Stagebezoek');
  t('Stageregister');

  return $field_groups;
}
