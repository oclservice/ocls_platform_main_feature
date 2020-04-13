<?php

/**
 * @file
 * ocls_fleming_theme_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ocls_fleming_theme_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-496a16c08db34973df5b3a5ee22ab3e2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '496a16c08db34973df5b3a5ee22ab3e2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ocls_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ocls_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
