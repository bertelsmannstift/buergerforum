<?php

if (isset($form['ctools_trail'])) {
  print render($form['ctools_trail']);
}
?>
<?php if (isset($form['ctools_trail']['#current'])):?>
<fieldset class="title-fieldset">
  <div class="title-step"><?php print $form['ctools_trail']['#current']['title'];?></div>
  <div class="description-step"><?php print $form['ctools_trail']['#current']['description'];?></div>
  <?php endif;?>
</fieldset>
<fieldset class="register-fieldset">
  <?php print render($form['conference_change']);?>
  <?php print render($form['field_sex']);?>
  <?php print render($form['account']['name']);?>
  <?php print render($form['field_first_name']);?>
  <?php print render($form['field_last_name']);?>
  <?php print render($form['field_displayed_name']);?>
  <?php print render($form['account']['mail']);?>
  <?php print render($form['field_address']);?>
  <?php print render($form['field_zip']);?>
  <?php print render($form['field_city']);?>
  <?php print render($form['field_age']);?>
  <?php print render($form['field_phone']);?>
  <?php
  print drupal_render_children($form);
  ?>
  <?php if (strtotime(variable_get('bf_conference_date_day')) + 24*60*60 > time()): ?>
  <?php print render($form['account']['pass']);?>
  <?php print render($form['buttons']);?>
  <?php endif; ?>
</fieldset>