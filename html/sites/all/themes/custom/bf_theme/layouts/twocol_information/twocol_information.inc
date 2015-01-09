<?php

// Plugin definition
$plugin = array(
  'title' => t('Two column information'),
  'category' => t('Columns: 2'),
  'icon' => 'twocol_information.png',
  'theme' => 'panels_twocol_information',
  'css' => 'twocol_information.css',
  'regions' => array(
    'left' => t('Left side'),
    'right' => t('Right side')
  ),
);
