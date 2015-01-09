<?php
/**
 * Create callback for standard ctools registration wizard.
 * */

function bf_register_form_ctools_wizard($step = 'register') {
// Include required ctools files. ctools_include('wizard');
  ctools_include('object-cache');
  ctools_include('wizard');
  $form_info = array(
// Specify unique form id for this form.
    'id'              => 'multistep_registration',
//Specify the path for this form. It is important to include space for the $step argument to be passed.
    'path'            => "user/register/%step",
// Show breadcrumb trail.
    'show trail'      => TRUE,
    'show back'       => TRUE,
    'show return'     => FALSE,
// Callback to use when the 'next' button is clicked.
    'next callback'   => 'bf_register_form_subtask_next',
// Callback to use when entire form is completed.
    'finish callback' => 'bf_register_form_subtask_finish',
// Callback to use when user clicks final submit button.
    'return callback' => 'bf_register_form_subtask_finish',
// Callback to use when user cancels wizard.
    'cancel callback' => 'bf_register_form_subtask_cancel',
// Specify the order that the child forms will appear in, as well as their page titles.
    'order'           => array(
      'register'                   => t('Personal Information'),
      'organizational_information' => t('Additional Information'),
      'interests'                  => t('Area of ​​Interest'),
      'verify_data'                => t('Verify your data'),
    ),
// Define the child forms. Be sure to use the same keys here that were user in the 'order' section of this array.
    'forms'           => array(
      'register'                   => array('form id' => 'user_register_form'),
      'organizational_information' => array('form id' => 'user_register_form'),
      'interests'                  => array(
        'form id' => 'user_register_form',
// Be sure to load the required include file if the form callback is not defined in the .module file.
      ),
      'verify_data'                => array('form id' => 'user_register_form')
    ),
  ); // Make cached data available within each step's $form_state array.

  $form_state['signup_object'] = bf_register_form_get_page_cache('signup'); // Return the form as a Ctools multi-step form.
  if (!bf_conference_change_access()) {
    unset($form_info['forms']['interests']);
    unset($form_info['order']['interests']);
  }
  $output = ctools_wizard_multistep_form($form_info, $step, $form_state);
  return $output;
}

/**
 * Retreives an object from the cache.
 *
 * @param string $name
 *    The name of the cached object to retreive.
 */
function bf_register_form_get_page_cache($name) {
  ctools_include('object-cache');
  $cache = ctools_object_cache_get('bf_register_form', $name);
// If the cached object doesn't exist yet, create an empty object.
  if (!$cache) {
    $cache = new stdClass();
    $cache->locked = ctools_object_cache_test('bf_register_form', $name);
  }
  return $cache;
}

/**
 * Creates or updates an object in the cache.
 *
 * @param string $name
 *    The name of the object to cache.
 * @param object $data
 *    The object to be cached.
 */
function bf_register_form_set_page_cache($name, $data) {
  ctools_include('object-cache');
  $cache = ctools_object_cache_set('bf_register_form', $name, $data);
}

/**
 * Removes an item from the object cache.
 * @param string $name
 *    The name of the object to destroy. */
function bf_register_form_clear_page_cache($name) {
  ctools_include('object-cache');
  ctools_object_cache_clear('bf_register_form', $name);
}

/**
 * Callback executed when the 'next' button is clicked.
 */
function bf_register_form_subtask_next(&$form_state) {
// Store submitted data in a ctools cache object, namespaced 'signup'.

  if (isset($form_state['values']['form_id'])) {
    if (!isset(bf_register_form_get_page_cache('signup')->locked)) {
      $cache = array_merge(bf_register_form_get_page_cache('signup'), $form_state['values']);
    }
    else {
      $cache = $form_state['values'];
    }
    bf_register_form_set_page_cache('signup', $cache);
  }
}


/**
 * Callback executed when the 'cancel' button is clicked.
 */
function bf_register_form_subtask_cancel(&$form_state) {
// Clear our ctools cache object. It's good housekeeping.
  bf_register_form_clear_page_cache('signup');
}

/**
 * Callback executed when the entire form submission is finished.
 */
function bf_register_form_subtask_finish(&$form_state) {
// Clear our Ctool cache object.
  bf_register_form_clear_page_cache('signup');
// Redirect the user to the front page.
  drupal_goto('<front>');
}
