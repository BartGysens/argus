<?php
/**
 * @file
 * argus_pedagogische_activiteiten.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_pedagogische_activiteiten_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ev_vervoer|node|event_pedagogische_activiteit|form';
  $field_group->group_name = 'group_ev_vervoer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_pedagogische_activiteit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vervoer',
    'weight' => '14',
    'children' => array(
      0 => 'field_ev_vervoer',
      1 => 'field_ev_kostprijs_vervoer',
      2 => 'field_ev_afstand',
      3 => 'field_ev_kostprijs_schoolbusje',
      4 => 'field_ev_prijs_busje_lln',
      5 => 'field_ev_aantal_lln_busje',
      6 => 'field_ev_busje_betaald',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ev-vervoer field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ev_vervoer|node|event_pedagogische_activiteit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_verv_en_kost|node|event_pedagogische_activiteit|default';
  $field_group->group_name = 'group_verv_en_kost';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event_pedagogische_activiteit';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vervoer en kostprijs',
    'weight' => '13',
    'children' => array(
      0 => 'field_ev_vervoer',
      1 => 'field_ev_kostprijs_vervoer',
      2 => 'field_ev_afstand',
      3 => 'field_ev_kostprijs_activiteit',
      4 => 'field_ev_kostprijs_schoolbusje',
      5 => 'field_ev_tot_kostprijs_act',
      6 => 'field_ev_prijs_busje_lln',
      7 => 'field_ev_totale_kostprijs_ll',
      8 => 'field_ev_aantal_lln_busje',
      9 => 'field_ev_busje_betaald',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-verv-en-kost field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_verv_en_kost|node|event_pedagogische_activiteit|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Vervoer');
  t('Vervoer en kostprijs');

  return $field_groups;
}
