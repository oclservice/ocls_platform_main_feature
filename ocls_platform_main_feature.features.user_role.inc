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

  // Exported role: Content Contributor.
  $roles['Content Contributor'] = array(
    'name' => 'Content Contributor',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  return $roles;
}
