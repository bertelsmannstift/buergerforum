<?php
/**
 * @file
 * Template for default Radix Brown.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display brown clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>


  <div class="container">
    <div class="row-fluid">
      <div class="span8 content panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['slider']; ?>
        </div>
      </div>
      <div class="span4 sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['slidergutter']; ?>
        </div>
      </div>
    </div>
  </div>

  <div class="container">
    <div class="row-fluid">
      <div class="span4 sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['column1']; ?>
        </div>
      </div>
      <div class="span4 sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['column2']; ?>
        </div>
      </div>
      <div class="span4 sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['column3']; ?>
        </div>
      </div>
    </div>
  </div>

  <div class="container">
    <div class="row-fluid">
      <div class="span4 sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['footercolumn1']; ?>
        </div>
      </div>
      <div class="span4 sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['footercolumn2']; ?>
        </div>
      </div>
      <div class="span4 sidebar panel-panel">
        <div class="panel-panel-inner">
          <?php print $content['footercolumn3']; ?>
        </div>
      </div>
    </div>
  </div>

</div><!-- /.brown -->
