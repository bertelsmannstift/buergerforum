<?php
/**
 * @file
 * bf_ckeditor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function bf_ckeditor_filter_default_formats() {
  $formats = array();

  // Exported format: Formatierbar.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Formatierbar',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: PHP code.
  $formats['php_code'] = array(
    'format' => 'php_code',
    'name' => 'PHP code',
    'cache' => 0,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'php_code' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Unformatiert.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Unformatiert',
    'cache' => 1,
    'status' => 1,
    'weight' => -8,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -39,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -38,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
