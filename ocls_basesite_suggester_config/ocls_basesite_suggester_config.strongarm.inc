<?php
/**
 * @file
 * ocls_basesite_suggester_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ocls_basesite_suggester_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_suggester_settings';
  $strongarm->value = array(
    'simple_suggester' => 'suggest_all_mods',
    'advanced_suggester' => array(),
  );
  $export['islandora_solr_suggester_settings'] = $strongarm;

  return $export;
}
