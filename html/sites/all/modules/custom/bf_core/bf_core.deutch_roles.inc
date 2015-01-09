<?php
/**
 * @file bf_core.deutch_roles.inc
 * Administrative interface for Change deutch roles
 */


/**
 * Theme function for the file admin overview form.
 */
function theme_bf_core_deutch_roles_edit_form($variables) {
  $form = $variables['form'];
  $headers = array(t('Title'), t('Location'), t('Actions'));
  $rows = array();
  if (!empty($form['rules'])) {
    foreach (element_children($form['rules']) as $crid) {
      $row = array();
      $rule = $form['rules'][$crid]['#rule'];
      $row[] = check_plain($rule['title']);
      $row[] = drupal_render($form['rules'][$crid]);
      $rows[] = $row;
    }
  }

  $link = l(t('Create a new rule'), 'admin/config/development/css-injector/add');
  $row = array();
  if (empty($rows)) {
    $row[] = array(
      'data'    => t('No CSS injection rules have been set up yet. !url.', array('!url' => $link)),
      'colspan' => 3,
    );
  }
  else {
    $row[] = array(
      'data'    => t('!url.', array('!url' => $link)),
      'colspan' => 3,
    );
  }
  $rows[] = $row;

  $output = theme('table', array('header' => $headers, 'rows' => $rows));
  $output .= drupal_render_children($form);
  return $output;
}


function bf_core_deutch_roles_form($form, &$form_state) {

  $path = drupal_get_path('module', 'bf_core') . '/';
  $form = array();
  $form['#tree'] = TRUE;

  // Adding css stylesheet for icons.
  $form['#attached']['css'] = array(
    drupal_get_path('module', 'bf_core') . '/css/css_injector.css',
  );

  return $form;
}

/**
 * Form builder function for  file "Sizes photo" edit form.
 */
function bf_core_deutch_roles_edit_form($form, $form_state, $crid = NULL) {
  $rule = array(
    'title'           => '',
    'rule_type'       => INJECTOR_PAGES_NOTLISTED,
    'rule_themes'     => '',
    'rule_conditions' => '',
    'media'           => 'all',
    'preprocess'      => 1,
    'css_text'        => '',
    'enabled'         => 1,
    'path'            => ''
  );
  // }
  $form['#attached']['css'] = array(
    drupal_get_path('module', 'bf_core') . '/css/css_injector.css',
  );

  $path = drupal_get_path('module', 'bf_core') . '/includes/deutch_roles/feminine.inc';
  if (arg(3) && arg(3) == 'neutral') {
    $path = drupal_get_path('module', 'bf_core') . '/includes/deutch_roles/neutral.inc';
  }
  if (file_exists($path)) {
    $rule['css_text'] = file_get_contents($path);
    $rule['path'] = $path;
  }
  else {
    $rule['css_text'] = '';
  }
  // Adding css stylesheet for icons.
  $form['#attached']['js'] = array(
    drupal_get_path('module', 'bf_core') . '/js/ace/ace.js',
    drupal_get_path('module', 'bf_core') . '/js/syntax_highlighter.js',
  );

  $form['#attached']['css'] = array(
    drupal_get_path('module', 'bf_core') . '/css/syntax_highlighter.css',
  );

  if (isset($crid)) {
    $form['crid'] = array(
      '#type'  => 'value',
      '#value' => $crid,
    );
  }

  $form['css_text'] = array(
    '#type'          => 'textarea',
    '#rows'          => 10,
    '#default_value' => $rule['css_text'],
    '#required'      => TRUE,
  );
  $form['path'] = array(
    '#type'  => 'hidden',
    '#value' => $rule['path']
  );
  $form['css_text_ace'] = array(
    '#prefix' => '<span class="disable-ace">Disable syntax highlighter</span>',
    '#markup' => '<div class="ace-editor"><div id="editor">' . $rule['css_text'] . '</div></div>',
  );
  $form['css_text_ace']['#suffix'] = '<div>' . t('Role names masculine:') . '</div>';
  $form['css_text_ace']['#suffix'] .= '
    <ol>
      <li>Technische Administrator</li>
      <li>Forum-Administrator</li>
      <li>Teilnehmer Auftaktwerkstatt</li>
      <li>Teilnehmer</li>
      <li>Experte</li>
      <li>Projektkoordinator</li>
      <li>Bürgerredakteur</li>
      <li>Redakteur für</li>
    </ol>';
  $form['buttons']['save'] = array(
    '#type'   => 'submit',
    '#value'  => t('Save'),
    '#submit' => array('bf_core_deutch_roles_edit_save'),
  );

  return $form;
}

/**
 * Validation callback for the file "Sizes photo" edit form.
 */
function bf_core_deutch_roles_edit_validate($form, &$form_state) {
  $directory = drupal_get_path('module', 'bf_core');
  if (!file_prepare_directory($directory, FILE_CREATE_DIRECTORY | FILE_MODIFY_PERMISSIONS)) {
    form_error($form, t('The directory %directory is not writable', array('%directory' => $directory)));
  }
}

/**
 * Submit button callback for the file "Sizes photo"edit form.
 */
function bf_core_deutch_roles_edit_save($form, &$form_state) {
  //$themes = implode('//', $form_state['values']['themes']);
  $rule = $form_state['values'];
  $crid = !empty($form_state['values']['crid']) ? $form_state['values']['crid'] : NULL;
  // Serialize themes list before inserting to databse.
  // Unserialize themes list for form state.
  file_unmanaged_save_data($rule['css_text'], $rule['path'], FILE_EXISTS_REPLACE);
  drupal_set_message(t('Your file roles was saved.'));
  // $form_state['redirect'] = 'admin/config/development/size-edit';
}
