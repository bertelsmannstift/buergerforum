<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
// Chapters
$query = db_select('comment', 'c')
  ->condition('c.uid', $fields['uid']->content);
$query->addExpression('MAX(created)');
$post_date = $query->execute()->fetchField();
$gender = $fields['field_sex']->content;
if (isset($fields['field_editors']->content)) {
  $fields['field_editors']->content = str_replace('Bürgerredakteur','Editor',$fields['field_editors']->content);
}
if (isset($fields['rid']->content)) {
  $fields['rid']->content = str_replace('Teilnehmer','Member',$fields['rid']->content);
}

?>

<div class="user-block<?php echo strpos($fields['rid']->content, 'Expert') === FALSE ? '' : ' user-expert'; ?>">
  <div class="column">
    <div class="field-content field-image">
      <?php  print $fields['picture']->content; ?>
    </div>
  </div>
  <div class="column">
    <div class="field-content field-display-name"><?php  print $fields['field_displayed_name']->content; ?></div>
    <div class="field-content field-committee"><?php  print $fields['field_committee']->content; ?></div>
    <div class="field-content field-roles">
      <?php
      print bf_core_get_gender_role($fields['rid']->content,$gender); ?>
    </div>
    <div class="field-content field-editor">
      <?php
      print isset($fields['field_editors'])?bf_core_get_gender_role($fields['field_editors']->content,$gender):''; ?>
    </div>
    <?php if (!empty($post_date)): ?>
      <div class="field-content field-last-comment">
        <?php print t('Last comment: @date', array('@date' => date('d.m.Y H:i', $post_date))); ?>
      </div>
    <?php endif; ?>
  </div>
</div>