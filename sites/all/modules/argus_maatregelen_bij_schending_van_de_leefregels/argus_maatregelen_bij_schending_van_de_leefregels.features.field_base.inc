<?php
/**
 * @file
 * argus_maatregelen_bij_schending_van_de_leefregels.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function argus_maatregelen_bij_schending_van_de_leefregels_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_maatregelen_categorie'.
  $field_bases['field_maatregelen_categorie'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_maatregelen_categorie',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Ordemaatregel - fase 1' => 'Ordemaatregel - fase 1',
        'Ordemaatregel - fase 2' => 'Ordemaatregel - fase 2',
        'Positieve gedragsbekrachtiging' => 'Positieve gedragsbekrachtiging',
        'Bewarende maatregel' => 'Bewarende maatregel',
        'Studiebegeleiding' => 'Studiebegeleiding',
        'Tuchtmaatregel' => 'Tuchtmaatregel',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_maatregelen_gewicht'.
  $field_bases['field_maatregelen_gewicht'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_maatregelen_gewicht',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_maatregelen_procedure'.
  $field_bases['field_maatregelen_procedure'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_maatregelen_procedure',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'title',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'ikz_procedure' => 'ikz_procedure',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
