<?php
/**
 * @file
 * ocls_platform_main_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ocls_platform_main_feature_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
