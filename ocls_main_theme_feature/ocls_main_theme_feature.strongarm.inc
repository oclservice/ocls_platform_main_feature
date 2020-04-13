<?php

/**
 * @file
 * ocls_main_theme_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ocls_main_theme_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'designkit_color';
  $strongarm->value = array(
    'main' => '#f9f9f9',
    'header' => '#ffffff',
    'navigation' => '#266cac',
    'sidebars' => '#f1f1f1',
    'footer' => '#ffffff',
    'footer_top' => '#000000',
    'front_box' => '#000000',
    'menu_color' => '#000000',
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
  $strongarm->value = 'centennial: seneca: conestoga: fleming: loyalist: georgian: ir: loyalists: niagara:';
  $export['islandora_pids_allowed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_repository_pid';
  $strongarm->value = 'islandora:root';
  $export['islandora_repository_pid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'CORe';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'Colleges Object Repository';
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
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => 'sites/all/themes/ocls_theme/favicons/ocls_core_favicon.ico',
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
    'zen_rebuild_registry' => 0,
    'zen_wireframes' => 0,
    'ocls_custom_logo_url' => '',
    'ocls_custom_no_search_results_msg' => 'Sorry, but your search returned no results.',
    'ocls_theme_search_text' => '',
    'ocls_theme_search_heading' => 'Discover Ontario Colleges\' Digital Collections',
    'ocls_theme_collections_meta' => '0',
    'ocls_slideshow_pids' => 'islandora:root',
    'ocls_show_basic_record' => '0',
    'ocls_show_collection_search' => '1',
    'ocls_background_dsid' => 'front',
    'ocls_bio_label' => 'Biography',
    'ocls_meta_des' => 'Description',
    'designkit_color' => array(
      'main' => '#f9f9f9',
      'header' => '#ffffff',
      'navigation' => '#266cac',
      'sidebars' => '#f1f1f1',
      'footer' => '#ffffff',
      'footer_top' => '#000000',
      'front_box' => '#000000',
      'menu_color' => '#000000',
    ),
    'favicon_mimetype' => 'image/vnd.microsoft.icon',
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
