<?php
/**
 * @file
 * argus_merken.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function argus_merken_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_merk_toepassingsdomein'.
  $field_bases['field_merk_toepassingsdomein'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_merk_toepassingsdomein',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'ICT' => 'ICT',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
