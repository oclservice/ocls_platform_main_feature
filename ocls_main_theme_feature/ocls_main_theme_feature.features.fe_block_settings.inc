<?php

/**
 * @file
 * ocls_main_theme_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ocls_main_theme_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-f65d2f8c28209266357cd04e09a5cde4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'f65d2f8c28209266357cd04e09a5cde4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ocls_theme' => array(
        'region' => '',
        'status' => 0,
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-footer_view_primary-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'footer_view_primary-block',
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

  $export['views-partner_institutions-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'partner_institutions-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'uuid/node/0a369398-cae7-4655-970e-a083ddbf1df0',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ocls_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ocls_theme',
        'weight' => -32,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
