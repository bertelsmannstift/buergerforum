<?php
/**
 * @file
 * bf_secure_share.default_secureshare_profiles.inc
 */

/**
 * Implements hook_default_secureshare_profile().
 */
function bf_secure_share_default_secureshare_profile() {
  $export = array();

  $profile = new stdClass();
  $profile->disabled = FALSE; /* Edit this to true to make a default profile disabled initially */
  $profile->api_version = 2;
  $profile->name = 'Info article';
  $profile->config = array(
    'css_path' => '',
    'info_link' => '',
    'txt_help' => '',
    'settings_perma' => '',
    'cookie_expires' => '365',
    'services' => array(
      'facebook' => array(
        'status' => 0,
        'dummy_img' => '',
        'txt_info' => '',
        'txt_fb_off' => 'off',
        'txt_fb_on' => 'on',
        'perma_option' => 0,
        'display_name' => 'Facebook',
        'language' => 'user',
        'language_static' => 'en',
        'action' => 'like',
      ),
      'twitter' => array(
        'status' => 0,
        'dummy_img' => '',
        'txt_info' => '',
        'txt_twitter_off' => '',
        'txt_twitter_on' => '',
        'perma_option' => 0,
        'display_name' => 'Twitter',
        'tweet_text' => 'default',
        'language' => 'user',
      ),
      'gplus' => array(
        'status' => 0,
        'dummy_img' => '',
        'txt_info' => '',
        'txt_gplus_off' => '',
        'txt_gplus_on' => '',
        'perma_option' => 0,
        'display_name' => 'Google+',
        'language' => 'user',
      ),
    ),
  );
  $export['Info article'] = $profile;

  $profile = new stdClass();
  $profile->disabled = FALSE; /* Edit this to true to make a default profile disabled initially */
  $profile->api_version = 2;
  $profile->name = 'Info article de';
  $profile->config = array(
    'css_path' => '',
    'info_link' => '',
    'txt_help' => '',
    'settings_perma' => '',
    'cookie_expires' => '365',
    'services' => array(
      'facebook' => array(
        'status' => 0,
        'dummy_img' => '',
        'txt_info' => '',
        'txt_fb_off' => 'off',
        'txt_fb_on' => 'on',
        'perma_option' => 0,
        'display_name' => 'Facebook',
        'language' => 'user',
        'language_static' => 'de',
        'action' => 'like',
      ),
      'twitter' => array(
        'status' => 0,
        'dummy_img' => '',
        'txt_info' => '',
        'txt_twitter_off' => '',
        'txt_twitter_on' => '',
        'perma_option' => 0,
        'display_name' => 'Twitter',
        'tweet_text' => 'default',
        'language' => 'user',
      ),
      'gplus' => array(
        'status' => 0,
        'dummy_img' => '',
        'txt_info' => '',
        'txt_gplus_off' => '',
        'txt_gplus_on' => '',
        'perma_option' => 0,
        'display_name' => 'Google+',
        'language' => 'user',
      ),
    ),
  );
  $export['Info article de'] = $profile;

  return $export;
}
