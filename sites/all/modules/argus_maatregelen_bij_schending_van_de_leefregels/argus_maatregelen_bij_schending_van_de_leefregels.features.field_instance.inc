<?php
/**
 * @file
 * argus_maatregelen_bij_schending_van_de_leefregels.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function argus_maatregelen_bij_schending_van_de_leefregels_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-maatregelen-field_maatregelen_categorie'
  $field_instances['node-maatregelen-field_maatregelen_categorie'] = array(
    'bundle' => 'maatregelen',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_maatregelen_categorie',
    'label' => 'Categorie',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-maatregelen-field_maatregelen_gewicht'
  $field_instances['node-maatregelen-field_maatregelen_gewicht'] = array(
    'bundle' => 'maatregelen',
    'default_value' => array(
      0 => array(
        'value' => '1.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_maatregelen_gewicht',
    'label' => 'Gewicht',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorie');
  t('Gewicht');

  return $field_instances;
}
