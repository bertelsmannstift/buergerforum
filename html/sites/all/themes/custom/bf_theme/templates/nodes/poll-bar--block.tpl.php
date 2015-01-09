<?php

/**
 * @file
 * Default theme implementation to display the bar for a single choice in a
 * poll.
 *
 * Variables available:
 * - $title: The title of the poll.
 * - $votes: The number of votes for this choice
 * - $total_votes: The number of votes for this choice
 * - $percentage: The percentage of votes for this choice.
 * - $vote: The choice number of the current user's vote.
 * - $voted: Set to TRUE if the user voted for this choice.
 *
 * @see template_preprocess_poll_bar()
 */
$colors = bf_poll_default_colors();
if (isset($colors[$variables['id']-1])) {
  $color = $colors[$variables['id']-1];
} else {
  $color = reset($colors);
}
?>

<div class="text"><?php print $title; ?></div>
<div class="bar">
  <div style="width: <?php print $percentage; ?>%;background: <?php print $color ;?>" class="foreground"></div>
</div>
<div class="percent">
  <?php print $percentage; ?>%
</div>
