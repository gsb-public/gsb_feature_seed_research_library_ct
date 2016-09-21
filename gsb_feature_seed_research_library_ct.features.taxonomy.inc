<?php
/**
 * @file
 * gsb_feature_seed_research_library_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_seed_research_library_ct_taxonomy_default_vocabularies() {
  return array(
    'schools' => array(
      'name' => 'Schools',
      'machine_name' => 'schools',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'seed_award_type' => array(
      'name' => 'Seed Award Type',
      'machine_name' => 'seed_award_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'seed_status' => array(
      'name' => 'Seed Status',
      'machine_name' => 'seed_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
