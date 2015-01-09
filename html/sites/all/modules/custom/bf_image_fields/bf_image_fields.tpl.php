<?php
/**
 * $image - contains the image html rendered by Drupal
 * $caption - contains the image field caption string
 */
?>
<?php print $image; ?>
<?php if (!empty($caption_url)): ?>
  <div>
    <a target="_blank" href="<?php print $caption_url; ?>" class="image-field-caption-url">
      <?php print $caption; ?>
    </a>
  </div>
<?php else: ?>
  <div>
    <span class="image-field-caption">
      <?php print $caption; ?>
    </span>
  </div>
<?php endif; ?>