<?php
/**
 * @file
 * argus_huisstijlhandboek.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function argus_huisstijlhandboek_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'huisstijl',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '006f0126-bc0e-4ef8-a3dd-db08be32f980',
    'vocabulary_machine_name' => 'tags',
  );
  return $terms;
}
