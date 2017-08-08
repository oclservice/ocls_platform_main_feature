<?php
/**
 * @file
 * ocls_conestoga_theme_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ocls_conestoga_theme_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Conestoga College';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = '';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_ocls_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 0,
    'logo_path' => 'sites/all/themes/ocls_theme/logos/conestoga-logo.jpg',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_trailing' => 0,
    'zen_breadcrumb_title' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_html5_respond_meta' => array(
      'respond' => 'respond',
      'html5' => 'html5',
      'meta' => 'meta',
    ),
    'zen_rebuild_registry' => 1,
    'zen_wireframes' => 0,
    'ocls_theme_search_text' => 'Conestoga College Institute of Technology and Advanced Learning is a public college based in Kitchener, Ontario, Canada, with an enrollment of 11,000 full-time students, 30,000 part-time students, 3,300 apprenticeship students.',
    'ocls_theme_search_heading' => 'Conestoga College',
    'ocls_theme_collections_meta' => '0',
    'ocls_slideshow_pids' => 'islandora:root',
    'ocls_show_basic_record' => '0',
    'ocls_show_collection_search' => '1',
    'ocls_background_dsid' => 'TN',
    'ocls_bio_label' => 'Biography',
    'ocls_meta_des' => 'Description',
    'ocls_collection_items_details' => '0',
    'designkit_color' => array(
      'main' => '#f9f9f9',
      'header' => '#000000',
      'navigation' => '#2d2d2d',
      'sidebars' => '#f1f1f1',
      'footer' => '#2c2c2c',
      'footer_top' => '#3f3f3f',
      'front_box' => '#000000',
      'menu_color' => '#000000',
    ),
  );
  $export['theme_ocls_theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  );
  $export['theme_settings'] = $strongarm;

  return $export;
}
