<?php
/**
 * @file
 * argus_leerplichtbegeleiding.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function argus_leerplichtbegeleiding_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clb|node|leerplichtbegeleiding|form';
  $field_group->group_name = 'group_clb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lvs_leerplichtbegeleiding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CLB',
    'weight' => '3',
    'children' => array(
      0 => 'field_gebruiker',
      1 => 'field_datum',
      2 => 'field_lb_clb_contact_via',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-clb field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_clb|node|leerplichtbegeleiding|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clb|node|lvs_leerplichtbegeleiding|default';
  $field_group->group_name = 'group_clb';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lvs_leerplichtbegeleiding';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CLB',
    'weight' => '3',
    'children' => array(
      0 => 'field_gebruiker',
      1 => 'field_datum',
      2 => 'field_lb_clb_contact_via',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-clb field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_clb|node|lvs_leerplichtbegeleiding|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lln|node|leerplichtbegeleiding|form';
  $field_group->group_name = 'group_lln';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lvs_leerplichtbegeleiding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacten met de leerling',
    'weight' => '2',
    'children' => array(
      0 => 'field_lb_lln_datum',
      1 => 'field_lb_lln_contact_via',
      2 => 'field_lb_lln_afspraken',
      3 => 'field_lb_lln_resultaten',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-lln field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_lln|node|leerplichtbegeleiding|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lln|node|lvs_leerplichtbegeleiding|default';
  $field_group->group_name = 'group_lln';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lvs_leerplichtbegeleiding';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacten met de leerling',
    'weight' => '2',
    'children' => array(
      0 => 'field_lb_lln_datum',
      1 => 'field_lb_lln_contact_via',
      2 => 'field_lb_lln_afspraken',
      3 => 'field_lb_lln_resultaten',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-lln field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_lln|node|lvs_leerplichtbegeleiding|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ouders|node|leerplichtbegeleiding|form';
  $field_group->group_name = 'group_ouders';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lvs_leerplichtbegeleiding';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacten met de ouders / voogd',
    'weight' => '1',
    'children' => array(
      0 => 'field_lb_ouders_contact_via',
      1 => 'field_lb_ouders_datum',
      2 => 'field_lb_ouders_afspraken',
      3 => 'field_lb_ouders_resultaten',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ouders field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ouders|node|leerplichtbegeleiding|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ouders|node|lvs_leerplichtbegeleiding|default';
  $field_group->group_name = 'group_ouders';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'lvs_leerplichtbegeleiding';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacten met de ouders / voogd',
    'weight' => '1',
    'children' => array(
      0 => 'field_lb_ouders_contact_via',
      1 => 'field_lb_ouders_datum',
      2 => 'field_lb_ouders_afspraken',
      3 => 'field_lb_ouders_resultaten',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ouders field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ouders|node|lvs_leerplichtbegeleiding|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('CLB');
  t('Contacten met de leerling');
  t('Contacten met de ouders / voogd');

  return $field_groups;
}
