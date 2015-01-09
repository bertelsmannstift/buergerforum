<?php

/**
 * A handler to provide a field that is completely custom by the administrator.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_pm_timestamp extends views_handler_field {
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

    // Render date send message.
    $datestamp = $values->pm_message_timestamp;
    return date('d.m.Y H:i:s',$datestamp);
  }
}