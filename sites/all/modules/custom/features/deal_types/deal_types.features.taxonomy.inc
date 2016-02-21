<?php
/**
 * @file
 * deal_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function deal_types_taxonomy_default_vocabularies() {
  return array(
    'deal_types' => array(
      'name' => 'Deal Types',
      'machine_name' => 'deal_types',
      'description' => 'Marketing Deal',
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
