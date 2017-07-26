<?php
/**
 * @file
 * ocls_platform_main_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ocls_platform_main_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_bg_color';
  $strongarm->value = '#F7F7F7';
  $export['back_to_top_bg_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_border_color';
  $strongarm->value = '#CCCCCC';
  $export['back_to_top_border_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_place';
  $strongarm->value = '3';
  $export['back_to_top_button_place'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_trigger';
  $strongarm->value = '100';
  $export['back_to_top_button_trigger'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_button_type';
  $strongarm->value = 'image';
  $export['back_to_top_button_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_hover_color';
  $strongarm->value = '#EEEEEE';
  $export['back_to_top_hover_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_in_admin';
  $strongarm->value = 1;
  $export['back_to_top_prevent_in_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_prevent_on_mobile';
  $strongarm->value = 1;
  $export['back_to_top_prevent_on_mobile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'back_to_top_text_color';
  $strongarm->value = '#333333';
  $export['back_to_top_text_color'] = $strongarm;

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
  $strongarm->name = 'imagemagick_convert';
  $strongarm->value = '/usr/bin/convert';
  $export['imagemagick_convert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_audio_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_jwplayer' => 'islandora_jwplayer',
    ),
    'default' => 'islandora_jwplayer',
  );
  $export['islandora_audio_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_basic_collection_default_view';
  $strongarm->value = 'grid';
  $export['islandora_basic_collection_default_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_book_metadata_display';
  $strongarm->value = 1;
  $export['islandora_book_metadata_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_book_page_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_openseadragon' => 'islandora_openseadragon',
    ),
    'default' => 'islandora_openseadragon',
  );
  $export['islandora_book_page_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_book_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_internet_archive_bookreader' => 'islandora_internet_archive_bookreader',
    ),
    'default' => 'islandora_internet_archive_bookreader',
  );
  $export['islandora_book_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_compound_object_compound_children';
  $strongarm->value = 0;
  $export['islandora_compound_object_compound_children'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_large_image_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_openseadragon' => 'islandora_openseadragon',
    ),
    'default' => 'islandora_openseadragon',
  );
  $export['islandora_large_image_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_newspaper_page_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_openseadragon' => 'islandora_openseadragon',
    ),
    'default' => 'islandora_openseadragon',
  );
  $export['islandora_newspaper_page_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_metadata_dedup_values';
  $strongarm->value = 1;
  $export['islandora_solr_metadata_dedup_values'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_metadata_omit_empty_values';
  $strongarm->value = 1;
  $export['islandora_solr_metadata_omit_empty_values'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_use_kakadu';
  $strongarm->value = 1;
  $export['islandora_use_kakadu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_video_viewers';
  $strongarm->value = array(
    'name' => array(
      'none' => 'none',
      'islandora_jwplayer' => 'islandora_jwplayer',
    ),
    'default' => 'islandora_jwplayer',
  );
  $export['islandora_video_viewers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_existing';
  $strongarm->value = 'skip';
  $export['node_export_existing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'OCLS';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'Managing Digital Content';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_amw_1';
  $strongarm->value = 0;
  $export['superfish_amw_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_arrow_1';
  $strongarm->value = 1;
  $export['superfish_arrow_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_bgf_1';
  $strongarm->value = 0;
  $export['superfish_bgf_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_clone_parent_1';
  $strongarm->value = 0;
  $export['superfish_clone_parent_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_delay_1';
  $strongarm->value = '800';
  $export['superfish_delay_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_depth_1';
  $strongarm->value = '-1';
  $export['superfish_depth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_dfirstlast_1';
  $strongarm->value = 0;
  $export['superfish_dfirstlast_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_dzebra_1';
  $strongarm->value = 0;
  $export['superfish_dzebra_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_expanded_1';
  $strongarm->value = 0;
  $export['superfish_expanded_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_firstlast_1';
  $strongarm->value = 1;
  $export['superfish_firstlast_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hhldescription_1';
  $strongarm->value = 0;
  $export['superfish_hhldescription_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hid_1';
  $strongarm->value = 1;
  $export['superfish_hid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hlclass_1';
  $strongarm->value = '';
  $export['superfish_hlclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldescription_1';
  $strongarm->value = 0;
  $export['superfish_hldescription_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldexclude_1';
  $strongarm->value = '';
  $export['superfish_hldexclude_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldmenus_1';
  $strongarm->value = '';
  $export['superfish_hldmenus_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemcounter_1';
  $strongarm->value = 1;
  $export['superfish_itemcounter_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemcount_1';
  $strongarm->value = 1;
  $export['superfish_itemcount_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemdepth_1';
  $strongarm->value = 1;
  $export['superfish_itemdepth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_liclass_1';
  $strongarm->value = '';
  $export['superfish_liclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_maxwidth_1';
  $strongarm->value = '27';
  $export['superfish_maxwidth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mcdepth_1';
  $strongarm->value = '1';
  $export['superfish_mcdepth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mcexclude_1';
  $strongarm->value = '';
  $export['superfish_mcexclude_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mclevels_1';
  $strongarm->value = '1';
  $export['superfish_mclevels_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_menu_1';
  $strongarm->value = 'main-menu:0';
  $export['superfish_menu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_minwidth_1';
  $strongarm->value = '12';
  $export['superfish_minwidth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_multicolumn_1';
  $strongarm->value = 0;
  $export['superfish_multicolumn_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_name_1';
  $strongarm->value = 'Superfish 1';
  $export['superfish_name_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_number';
  $strongarm->value = '4';
  $export['superfish_number'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathclass_1';
  $strongarm->value = 'active-trail';
  $export['superfish_pathclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathcss_1';
  $strongarm->value = '';
  $export['superfish_pathcss_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathlevels_1';
  $strongarm->value = '1';
  $export['superfish_pathlevels_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_shadow_1';
  $strongarm->value = 1;
  $export['superfish_shadow_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_slide_1';
  $strongarm->value = 'vertical';
  $export['superfish_slide_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_slp';
  $strongarm->value = 'sites/all/libraries/superfish/jquery.hoverIntent.minified.js
sites/all/libraries/superfish/jquery.bgiframe.min.js
sites/all/libraries/superfish/superfish.js
sites/all/libraries/superfish/supersubs.js
sites/all/libraries/superfish/supposition.js
sites/all/libraries/superfish/sftouchscreen.js
sites/all/libraries/superfish/sfsmallscreen.js';
  $export['superfish_slp'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallabt_1';
  $strongarm->value = '1';
  $export['superfish_smallabt_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallact_1';
  $strongarm->value = '1';
  $export['superfish_smallact_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallamt_1';
  $strongarm->value = '';
  $export['superfish_smallamt_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallasa_1';
  $strongarm->value = 0;
  $export['superfish_smallasa_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallbpu_1';
  $strongarm->value = 'px';
  $export['superfish_smallbpu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallbp_1';
  $strongarm->value = '768';
  $export['superfish_smallbp_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallchc_1';
  $strongarm->value = 0;
  $export['superfish_smallchc_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallcmc_1';
  $strongarm->value = 0;
  $export['superfish_smallcmc_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallech_1';
  $strongarm->value = '';
  $export['superfish_smallech_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallecm_1';
  $strongarm->value = '';
  $export['superfish_smallecm_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallich_1';
  $strongarm->value = '';
  $export['superfish_smallich_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallicm_1';
  $strongarm->value = '';
  $export['superfish_smallicm_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallset_1';
  $strongarm->value = '';
  $export['superfish_smallset_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallual_1';
  $strongarm->value = '';
  $export['superfish_smallual_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smalluam_1';
  $strongarm->value = '0';
  $export['superfish_smalluam_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_smallua_1';
  $strongarm->value = '0';
  $export['superfish_smallua_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_small_1';
  $strongarm->value = '2';
  $export['superfish_small_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_speed_1';
  $strongarm->value = 'fast';
  $export['superfish_speed_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_spp_1';
  $strongarm->value = 1;
  $export['superfish_spp_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_style_1';
  $strongarm->value = 'none';
  $export['superfish_style_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_supersubs_1';
  $strongarm->value = 1;
  $export['superfish_supersubs_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_supersubs_emm_1';
  $strongarm->value = 0;
  $export['superfish_supersubs_emm_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchbh_1';
  $strongarm->value = '2';
  $export['superfish_touchbh_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchbpu_1';
  $strongarm->value = 'px';
  $export['superfish_touchbpu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchbp_1';
  $strongarm->value = '768';
  $export['superfish_touchbp_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchdh_1';
  $strongarm->value = 0;
  $export['superfish_touchdh_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchual_1';
  $strongarm->value = '';
  $export['superfish_touchual_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchuam_1';
  $strongarm->value = '0';
  $export['superfish_touchuam_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchua_1';
  $strongarm->value = '0';
  $export['superfish_touchua_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touch_1';
  $strongarm->value = '0';
  $export['superfish_touch_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_type_1';
  $strongarm->value = 'horizontal';
  $export['superfish_type_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_ulclass_1';
  $strongarm->value = '';
  $export['superfish_ulclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_use_item_theme_1';
  $strongarm->value = 1;
  $export['superfish_use_item_theme_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_use_link_theme_1';
  $strongarm->value = 1;
  $export['superfish_use_link_theme_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wraphlt_1';
  $strongarm->value = '';
  $export['superfish_wraphlt_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wraphl_1';
  $strongarm->value = '';
  $export['superfish_wraphl_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wrapmul_1';
  $strongarm->value = '';
  $export['superfish_wrapmul_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wrapul_1';
  $strongarm->value = '';
  $export['superfish_wrapul_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_zebra_1';
  $strongarm->value = 1;
  $export['superfish_zebra_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'ocls_theme';
  $export['theme_default'] = $strongarm;

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
    'ocls_theme_search_text' => '',
    'ocls_theme_search_heading' => 'Discover OCLS Collections',
    'ocls_theme_collections_meta' => '0',
    'ocls_slideshow_pids' => 'islandora:root',
    'ocls_show_basic_record' => '1',
    'ocls_show_collection_search' => '1',
    'ocls_background_dsid' => 'TN',
    'ocls_bio_label' => 'Biography',
    'ocls_meta_des' => 'Description',
    'ocls_collection_items_details' => '0',
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
