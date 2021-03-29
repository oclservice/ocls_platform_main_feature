<?php

/**
 * @file
 * ocls_niagara_theme_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ocls_niagara_theme_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'designkit_color';
  $strongarm->value = array(
    'footer' => '#ffffff',
    'footer_top' => '#404040',
    'front_box' => '#404040',
    'header' => '#000000',
    'main' => '#f9f9f9',
    'menu_color' => '#ffffff',
    'navigation' => '#404040',
    'sidebars' => '#ffffff',
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
  $strongarm->value = 'niagara: ir:';
  $export['islandora_pids_allowed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_repository_pid';
  $strongarm->value = 'niagara:root';
  $export['islandora_repository_pid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_namespace_restriction';
  $strongarm->value = 'niagara';
  $export['islandora_solr_namespace_restriction'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Niagara College Digital Archive';
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
    'default_favicon' => 0,
    'default_logo' => 0,
    'designkit_color' => array(
      'footer' => '#ffffff',
      'footer_top' => '#404040',
      'front_box' => '#404040',
      'header' => '#000000',
      'main' => '#f9f9f9',
      'menu_color' => '#ffffff',
      'navigation' => '#404040',
      'sidebars' => '#ffffff',
    ),
    'favicon_mimetype' => 'image/png',
    'favicon_path' => 'sites/all/themes/ocls_theme/favicons/niagara_favicon.png',
    'favicon_upload' => '',
    'logo_path' => 'sites/all/themes/ocls_theme/logos/niagaracollege.png',
    'logo_upload' => '',
    'ocls_background_dsid' => 'OBJ',
    'ocls_bio_label' => 'Biography',
    'ocls_custom_logo_url' => '',
    'ocls_custom_no_search_results_msg' => 'Sorry, but your search returned no results.',
    'ocls_meta_des' => 'Description',
    'ocls_show_basic_record' => '0',
    'ocls_show_collection_search' => '1',
    'ocls_slideshow_pids' => 'niagara:root',
    'ocls_theme_collections_meta' => '0',
    'ocls_theme_search_heading' => 'Niagara College Digital Archive',
    'ocls_theme_search_text' => '',
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
    'designkit_color' => array(
      'footer' => '#ffffff',
      'footer_top' => '#404040',
      'front_box' => '#404040',
      'header' => '#000000',
      'main' => '#f9f9f9',
      'menu_color' => '#ffffff',
      'navigation' => '#404040',
      'sidebars' => '#ffffff',
    ),
    'favicon_path' => '',
    'favicon_upload' => '',
    'logo_path' => 'public://090117_niagaracollege_feature.jpg',
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
