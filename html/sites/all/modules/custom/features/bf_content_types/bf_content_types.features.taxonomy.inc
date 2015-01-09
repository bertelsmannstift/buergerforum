<?php
/**
 * @file
 * bf_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function bf_content_types_taxonomy_default_vocabularies() {
  return array(
    'bf_owl_carousel_slides' => array(
      'name' => 'BF Owl Carousel Slides',
      'machine_name' => 'bf_owl_carousel_slides',
      'description' => 'List of Owl Carousel Slides',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'newsletter' => array(
      'name' => 'Newsletter',
      'machine_name' => 'newsletter',
      'description' => 'Simplenews newsletter categories.',
      'hierarchy' => 0,
      'module' => 'simplenews',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'phase' => array(
      'name' => 'Phase',
      'machine_name' => 'phase',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
