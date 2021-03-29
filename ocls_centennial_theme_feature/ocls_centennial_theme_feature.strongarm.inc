<?php

/**
 * @file
 * ocls_centennial_theme_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ocls_centennial_theme_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'designkit_color';
  $strongarm->value = array(
    'footer' => '#ffffff',
    'footer_top' => '#000000',
    'front_box' => '#000000',
    'header' => '#d4df38',
    'main' => '#f9f9f9',
    'menu_color' => '#000000',
    'navigation' => '#303030',
    'sidebars' => '#f1f1f1',
  );
  $export['designkit_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_namespace_restriction_enforced';
  $strongarm->value = 1;
  $export['islandora_namespace_restriction_enforced'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_pids_allowed';
  $strongarm->value = 'centennial: ir:';
  $export['islandora_pids_allowed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_repository_pid';
  $strongarm->value = 'centennial:root';
  $export['islandora_repository_pid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_namespace_restriction';
  $strongarm->value = 'centennial';
  $export['islandora_solr_namespace_restriction'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Centennial College';
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
    'default_favicon' => 1,
    'default_logo' => 0,
    'designkit_color' => array(
      'footer' => '#ffffff',
      'footer_top' => '#000000',
      'front_box' => '#000000',
      'header' => '#d4df38',
      'main' => '#f9f9f9',
      'menu_color' => '#000000',
      'navigation' => '#303030',
      'sidebars' => '#f1f1f1',
    ),
    'favicon_path' => '',
    'favicon_upload' => '',
    'logo_path' => 'sites/all/themes/ocls_theme/logos/centennial_libraries-wordmark-CC-logo-final-2018.jpg',
    'logo_upload' => '',
    'ocls_background_dsid' => 'front',
    'ocls_bio_label' => 'Biography',
    'ocls_custom_logo_url' => '',
    'ocls_custom_no_search_results_msg' => 'Sorry, but your search returned no results.',
    'ocls_meta_des' => 'Description',
    'ocls_show_basic_record' => '0',
    'ocls_show_collection_search' => '0',
    'ocls_slideshow_pids' => 'centennial:52,centennial:53,centennial:54,centennial:55',
    'ocls_theme_collections_meta' => '0',
    'ocls_theme_search_heading' => 'Discover Centennial College\'s CORe',
    'ocls_theme_search_text' => 'Welcome to Centennial College\'s CORe institutional repository. 

Search CORe and discover a history of faculty and student research, and more. This site continues to grow - new materials are welcome. 
',
    'toggle_comment_user_picture' => 1,
    'toggle_favicon' => 1,
    'toggle_logo' => 1,
    'toggle_main_menu' => 0,
    'toggle_name' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_secondary_menu' => 0,
    'toggle_slogan' => 0,
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_home' => 1,
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_title' => 0,
    'zen_breadcrumb_trailing' => 0,
    'zen_html5_respond_meta' => array(
      'html5' => 'html5',
      'meta' => 'meta',
      'respond' => 'respond',
    ),
    'zen_rebuild_registry' => 0,
    'zen_skip_link_anchor' => 'main-menu',
    'zen_skip_link_text' => 'Jump to navigation',
    'zen_wireframes' => 0,
  );
  $export['theme_ocls_theme_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'default_favicon' => 1,
    'default_logo' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'logo_path' => '',
    'logo_upload' => '',
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_logo' => 1,
    'toggle_main_menu' => 0,
    'toggle_name' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_secondary_menu' => 0,
    'toggle_slogan' => 0,
  );
  $export['theme_settings'] = $strongarm;

  return $export;
}
