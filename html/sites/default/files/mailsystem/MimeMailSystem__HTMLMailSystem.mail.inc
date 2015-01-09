<?php
class MimeMailSystem__HTMLMailSystem implements MailSystemInterface {
  protected $formatClass;
  protected $mailClass;
  public function __construct() {
    if (drupal_autoload_class('MimeMailSystem')) {
      $this->formatClass = new MimeMailSystem;
    }
    else {
      $this->formatClass = new DefaultMailSystem;
    }
    if (drupal_autoload_class('HTMLMailSystem')) {
      $this->mailClass = new HTMLMailSystem;
    }
    else {
      $this->mailClass = new DefaultMailSystem;
    }
  }
  public function format(array $message) {
    return $this->formatClass->format($message);
  }
  public function mail(array $message) {
    return $this->mailClass->mail($message);
  }
}
