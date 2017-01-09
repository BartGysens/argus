<?php
/**
 * @file
 * argus_ikz.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function argus_ikz_taxonomy_default_vocabularies() {
  return array(
    'ikz' => array(
      'name' => 'IKZ',
      'machine_name' => 'ikz',
      'description' => 'trefwoorden m.b.t. IKZ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
