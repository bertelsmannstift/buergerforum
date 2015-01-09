<?php

/**
 * A handler to provide a field that is completely custom by the administrator.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_pm_recipient extends views_handler_field {
  function construct() {
    parent::construct();
  }

  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  function render($values) {

    // Render recipient link.
    $uid = $values->pm_index_pm_message_recipient;
    $author = user_load($uid);
    $link = l(bf_core_display_name($author), 'user/' . $uid . '/edit');
    return $link;
  }
}