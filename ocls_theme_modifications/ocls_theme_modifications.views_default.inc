<?php
/**
 * @file
 * ocls_theme_modifications.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ocls_theme_modifications_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'collection_item_details_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Collection Item Details View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collection Item Details View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = 'Title';
  $handler->display->display_options['fields']['dc.title']['element_type'] = 'div';
  $handler->display->display_options['fields']['dc.title']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Islandora Solr: fgs_createdDate_mt */
  $handler->display->display_options['fields']['fgs_createdDate_mt']['id'] = 'fgs_createdDate_mt';
  $handler->display->display_options['fields']['fgs_createdDate_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_createdDate_mt']['field'] = 'fgs_createdDate_mt';
  $handler->display->display_options['fields']['fgs_createdDate_mt']['label'] = 'Created Date';
  $handler->display->display_options['fields']['fgs_createdDate_mt']['element_type'] = 'div';
  $handler->display->display_options['fields']['fgs_createdDate_mt']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['fgs_createdDate_mt']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.type */
  $handler->display->display_options['fields']['dc.type']['id'] = 'dc.type';
  $handler->display->display_options['fields']['dc.type']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.type']['field'] = 'dc.type';
  $handler->display->display_options['fields']['dc.type']['label'] = 'Type';
  $handler->display->display_options['fields']['dc.type']['link_to_object'] = 0;
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'islandora/object/%/test-collection-view';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['collection_item_details_view'] = array(
    t('Master'),
    t('Collection Item Details View'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('Created Date'),
    t('Type'),
    t('All'),
    t('Page'),
    t('Block'),
  );
  $export['collection_item_details_view'] = $view;

  return $export;
}
