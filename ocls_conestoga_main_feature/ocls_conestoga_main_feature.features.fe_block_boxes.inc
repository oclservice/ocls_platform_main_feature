<?php

/**
 * @file
 * ocls_conestoga_main_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ocls_conestoga_main_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Submit to collection Anonymous';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'submit_to_collection_anonymous';
  $fe_block_boxes->body = '<a href="/user">|+| Submit to a collection</a>';

  $export['submit_to_collection_anonymous'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Submit to collection box';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'submit_to_collection_box';
  $fe_block_boxes->body = '<a href="/islandora/object/islandora%3Aroot">|+| Submit to a collection</a>';

  $export['submit_to_collection_box'] = $fe_block_boxes;

  return $export;
}
