<?php
ctools_include('ajax');
ctools_include('modal');
/**
 * @file
 * Default theme implementation for comments.
 *
 * Available variables:
 * - $author: Comment author. Can be link or plain text.
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $created: Formatted date and time for when the comment was created.
 *   Preprocess functions can reformat it by calling format_date() with the
 *   desired parameters on the $comment->created variable.
 * - $changed: Formatted date and time for when the comment was last changed.
 *   Preprocess functions can reformat it by calling format_date() with the
 *   desired parameters on the $comment->changed variable.
 * - $new: New comment marker.
 * - $permalink: Comment permalink.
 * - $submitted: Submission information created from $author and $created during
 *   template_preprocess_comment().
 * - $picture: Authors picture.
 * - $signature: Authors signature.
 * - $status: Comment status. Possible values are:
 *   comment-unpublished, comment-published or comment-preview.
 * - $title: Linked title.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - comment: The current template type, i.e., "theming hook".
 *   - comment-by-anonymous: Comment by an unregistered user.
 *   - comment-by-node-author: Comment by the author of the parent node.
 *   - comment-preview: When previewing a new or edited comment.
 *   The following applies only to viewers who are registered users:
 *   - comment-unpublished: An unpublished comment visible only to administrators.
 *   - comment-by-viewer: Comment by the user currently viewing the page.
 *   - comment-new: New comment since last the visit.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * These two variables are provided for context:
 * - $comment: Full comment object.
 * - $node: Node object the comments are attached to.
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_comment()
 * @see template_process()
 * @see theme_comment()
 *
 * @ingroup themeable
 */
// Build form.
?>
<?php if ($comment->pid == 0) : ?>

  <div class="<?php print $classes; ?> clearfix proposal-comment"<?php print $attributes; ?>>
    <fieldset class="comment-collapsible comment-collapsed">
      <legend>
        <?php print $picture ?>
        <div class="comment-data">
          <?php print render($title_prefix); ?>
          <h3 class="fieldset-comment-legend media-heading" <?php print $title_attributes; ?>><?php print $title ?></h3>

          <?php print render($title_suffix); ?>
          <div class="submitted c-both">
            <?php print $submitted; ?>
          </div>
        </div>
        <?php if ($use_complaint): ?>
          <?php print ctools_modal_text_button('', 'comment-abuse/nojs/complaint-popup/' . $comment->cid,
              t('Complaint comment'), 'ctools-modal-comment-abuse-modal-style comment-abuse-' . $comment->cid
          ) . '<div id="modal-message">&nbsp</div>'; ?>
        <?php endif; ?>
        <?php print render($content['links']); ?>
        <div class="comment-count">
          <div class="count-answers"><?php print t('@count Answers', array('@count' => $children_comments->count)); ?></div>
          <?php if ($children_comments->count != 0): ?>
            <div class="last-post-comment">
              <?php print t('(Last change: @last)', array('@last' => date('d.m.Y H:i', $children_comments->created))); ?>
            </div>
          <?php endif; ?>
        </div>

      </legend>
      <div class="fieldset-comment-wrapper">
        <div class="content"<?php print $content_attributes; ?>>
          <?php
          // We hide the comments and links now so that we can render them later.
          hide($content['links']);
          hide($content['custom']);?>
          <?php print render($content); ?>
          <?php if ($signature): ?>
            <div class="user-signature clearfix">
              <?php print $signature ?>
            </div>
          <?php endif; ?>
        </div>
        <?php if (!user_is_anonymous()): ?>
          <?php echo $form_reply; ?>
        <?php endif; ?>
        <?php if ($comment_close): ?>
          <div class="comment-close-block">
            <div class="comment-close-info-text"><?php print t(variable_get('bf_comment_close_text', '')); ?></div>
            <?php print flag_create_link('bf_comment_close', $comment->cid);?>
          </div>
        <?php endif; ?>
      </div>
    </fieldset>
  </div>

<?php else : ?>

  <div class="<?php print $classes; ?> clearfix proposal-children-comment"<?php print $attributes; ?>>
    <?php print $picture ?>
    <?php if ($use_complaint): ?>
      <?php print ctools_modal_text_button('', 'comment-abuse/nojs/complaint-popup/' . $comment->cid,
        t('Complaint comment'), 'ctools-modal-comment-abuse-modal-style comment-abuse-' . $comment->cid
      ) . '<div id="modal-message">&nbsp</div>'; ?>
    <?php endif; ?>
    <?php if (!user_is_anonymous()): ?>
      <?php print render($content['links']); ?>
    <?php endif; ?>
    <div class="submitted"><?php print $submitted; ?></div>
    <div class="supported"><?php print $supported; ?></div>
    <div class="content"<?php print $content_attributes; ?>>
      <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['links']);?>
      <?php if ($vote_close): ?>
        <div class="comment-vote-count comment-vote-close"><?php print $flag_vote_count; ?></div>
        <?php hide($content['flag_bf_comment_vote']);?>
      <?php endif; ?>
      <?php if(!$vote_close): ?>
        <div class="flag-outer flag-outer-bf-comment-vote">
        <span class="flag-wrapper flag-bf-comment-vote flag-bf-comment-vote-<?php print $comment->cid; ?>">
          <?php print l($flag_vote_count, 'flag/'.$vote_action.'/bf_comment_vote/'.$comment->cid, array('attributes' => array('class' => 'use-ajax flag '.$vote_action.'-action'))); ?>
        </span>
        </div>
        <?php hide($content['flag_bf_comment_vote']);?>
      <?php endif; ?>
      <?php print render($content); ?>
      <?php if ($signature): ?>
        <div class="user-signature clearfix">
          <?php print $signature; ?>
        </div>
      <?php endif; ?>
    </div>
    <?php if ($comment_close): ?>
      <div class="comment-close-block">
        <div class="comment-close-info-text"><?php print t(variable_get('bf_comment_close_text', '')); ?></div>
        <?php print flag_create_link('bf_comment_close', $comment->pid);?>
      </div>
    <?php endif; ?>
  </div>
<?php endif; ?>