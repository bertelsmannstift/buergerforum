<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 */
?>
<header id="header" class="header" role="header">
  <div class="container-header">
    <div id="navigation">
      <div class="navbar container">
        <div class="navbar-inner clearfix">
          <!-- .btn-navbar is used as the toggle for collapsed navbar content -->
          <a class="btn btn-navbar btn-navbar-menu" data-toggle="collapse" data-target=".nav-menu-collapse">
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
            <span class="icon-bar"></span>
          </a>
          <!-- .btn-navbar-search for collapsed search form -->
          <?php if ($search_form): ?>
            <a class="btn btn-navbar btn-navbar-search" data-toggle="collapse" data-target=".nav-search-collapse">
              <span class="icon-search"></span>
            </a>
          <?php endif; ?>


          <div class="nav-collapse nav-menu-collapse">
            <div class="inner">
              <?php if ($main_menu): ?>
                <nav id="main-menu" class="main-menu pull-left" role="navigation">
                  <?php print render($main_menu); ?>
                </nav> <!-- /#main-menu -->
              <?php endif; ?>
            </div>
          </div>

          <div class="nav-collapse nav-user-menu-collapse pull-right">
            <div class="inner">
              <?php if ($page['header']): ?>
                <?php print render($page['header']); ?>
              <?php endif; ?>
            </div>
          </div>


          <div class="nav-collapse nav-search-collapse">
            <div class="inner">
              <?php if ($search_form): ?>
                <?php print $search_form; ?>
              <?php endif; ?>
            </div>
          </div>

      </div>
    </div> 
  </div> <!-- /#navigation -->

    <?php
    if ($logo): ?>
      <div id="logo" class="logobar">
        <div class="inner container">
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo" class="pull-left brand">
            <img class="site-logo-img" src="<?php print $logo; ?>" alt="">
          </a>
          <div class="sitename"><?php print $site_name; ?></div>
          <div class="siteslogan"><?php print $site_slogan; ?></div>
          <?php if ($second_logo): ?>
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="second-logo-path" class="pull-left brand">
              <img class="site-second-logo-img" src="<?php print $second_logo; ?>" alt="">
            </a>
          <?php endif; ?>
        </div>
      </div>
    <?php endif; ?>

</header>

<div id="main-wrapper">
  <div id="main" class="main container">
    <?php if ($breadcrumb): ?>
      <div id="breadcrumb" class="visible-desktop">
        <div class="container">
          <?php print $breadcrumb; ?>
        </div>
      </div>
    <?php endif; ?>
    <?php if ($messages): ?>
      <div id="messages">
        <div class="container">
          <?php print $messages; ?>
        </div>
      </div>
    <?php endif; ?>
    <div id="content">
      <a id="main-content"></a>
      <div id="page-header">
          <div class="container">
            <?php if ($title): ?>
              <div class="page-header">
                <h1 class="title"><?php print t("$title"); ?></h1>
              </div>
            <?php endif; ?>
            <?php if ($tabs): ?>
              <div class="tabs">
                <?php print render($tabs); ?>
              </div>
            <?php endif; ?>
            <?php if ($action_links): ?>
              <ul class="nav nav-pills action-links">
                <?php print render($action_links); ?>
              </ul>
            <?php endif; ?>
          </div>
      </div>
      <?php print render($page['content']); ?>
    </div>
  </div>
</div> <!-- /#main-wrapper -->

<footer id="footer" class="footer" role="footer">
  <div class="container">
    <?php if ($page['footer']): ?>
    <?php print render($page['footer']); ?>
    <?php endif; ?>
  </div>
</footer>