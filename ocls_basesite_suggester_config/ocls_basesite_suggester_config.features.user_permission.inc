<?php
/**
 * @file
 * ocls_basesite_suggester_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ocls_basesite_suggester_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer islandora_solr_suggester'.
  $permissions['administer islandora_solr_suggester'] = array(
    'name' => 'administer islandora_solr_suggester',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_solr_suggester',
  );

  return $permissions;
}
