<?php
/**
 * @file
 * Pief field wrapper.
 */
?>
<div id="<?php echo $pief_id; ?>" class="pief<?php echo $style; ?>">
  <div class="pief-field-toolbar"><?php echo $edit_link; ?></div>
  <div class="pief-field-output">
    <?php if (!empty($title)): ?>
      <h2 class="pane-title"><?php echo t($title); ?></h2>
    <?php endif; ?>
    <?php echo $child; ?>
  </div>
  <div class="pief-field-editor"></div>
</div>