<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */

?>
<div class="profile"<?php print $attributes; ?>>
  <div class="user-picture">
    <?php print $user_profile['picture']; ?>
  </div>
  <div class="wrapper-info-user">
    <div class="user-name"><?php print $user_profile['name']; ?></div>
    <?php if (isset($user_profile['expert'])): ?>
      <div class="user-extra-role"><?php print bf_core_get_gender_role($user_profile['expert'],$user_profile['gender']); ?></div>
    <?php endif;?>
    <?php if (isset($user_profile['commitee']) && !empty($user_profile['commitee'])): ?>
      <div class="user-commitee">
        <div class="field-label"><?php print t('Member of the Committee');?>:</div>
          <div class="user-commitee"><?php print $user_profile['commitee']; ?></div>
      </div>
    <?php endif;?>
    <?php if (isset($user_profile['editor_article']) && !empty($user_profile['editor_article'])): ?>
      <div class="user-editor-articles">
        <div class="field-label"><?php print bf_core_get_gender_role(t('Editor for'),$user_profile['gender']);?>:</div>
        <?php
        foreach ($user_profile['editor_article'] as $article):?>
          <div class="user-editor-articles"><a href="<?php print url($article->link,
              array('absolute' => TRUE)); ?>"><?php print $article->title;
              ?></a>
          </div>
        <?php endforeach;?>
      </div>
    <?php endif;?>
  </div>
  <div class="field field-name-field-first-name field-type-text field-label-above">
    <div class="field-label"><?php print t('Member since')?>:</div>
    <div class="field-items">
      <div class="field-item even"><?php print $user_profile['register_date']?></div>
    </div>
  </div>
<?php foreach ($user_profile['additional_information'] as $key=>$addition_field) {
  print render($user_profile['additional_information'][$key]);
}
?>
</div>
