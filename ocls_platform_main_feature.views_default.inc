<?php
/**
 * @file
 * ocls_platform_main_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ocls_platform_main_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clone_of_islandora_usage_stats_for_collections';
  $view->description = 'Usage Stats for Collections';
  $view->tag = 'default';
  $view->base_table = 'islandora_usage_stats_object_access_log';
  $view->human_name = 'Clone of Islandora Usage Stats for Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collection Usage Stats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'pid' => 'pid',
    'id' => 'id',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No view counts found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Islandora Usage Stats: Collection */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'islandora_usage_stats_object_access_log';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  /* Relationship: Islandora Usage Stats: Object */
  $handler->display->display_options['relationships']['pid_id']['id'] = 'pid_id';
  $handler->display->display_options['relationships']['pid_id']['table'] = 'islandora_usage_stats_object_access_log';
  $handler->display->display_options['relationships']['pid_id']['field'] = 'pid_id';
  /* Relationship: Islandora Usage Stats: Collection Object */
  $handler->display->display_options['relationships']['collection']['id'] = 'collection';
  $handler->display->display_options['relationships']['collection']['table'] = 'islandora_usage_stats_collection_access_log';
  $handler->display->display_options['relationships']['collection']['field'] = 'collection';
  $handler->display->display_options['relationships']['collection']['relationship'] = 'id';
  /* Relationship: Islandora Usage Stats: Object Collection Access */
  $handler->display->display_options['relationships']['object_access_id']['id'] = 'object_access_id';
  $handler->display->display_options['relationships']['object_access_id']['table'] = 'islandora_usage_stats_collection_access_log';
  $handler->display->display_options['relationships']['object_access_id']['field'] = 'object_access_id';
  $handler->display->display_options['relationships']['object_access_id']['relationship'] = 'id';
  /* Field: Islandora Usage Stats: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'pid_id';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Islandora Usage Stats: PID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['relationship'] = 'pid_id';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['pid']['alter']['text'] = '<a href="/islandora/object/[pid]" title="[label]">[label]</a>';
  $handler->display->display_options['fields']['pid']['alter']['path'] = 'islandora/object/[pid]';
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Islandora Usage Stats: Log ID) */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'islandora_usage_stats_object_access_log';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['text'] = '<span>([id])</span>';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Islandora Usage Stats: Log ID) */
  $handler->display->display_options['sorts']['object_access_id']['id'] = 'object_access_id';
  $handler->display->display_options['sorts']['object_access_id']['table'] = 'islandora_usage_stats_collection_access_log';
  $handler->display->display_options['sorts']['object_access_id']['field'] = 'object_access_id';
  $handler->display->display_options['sorts']['object_access_id']['relationship'] = 'id';
  $handler->display->display_options['sorts']['object_access_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['object_access_id']['order'] = 'DESC';
  /* Contextual filter: Islandora Usage Stats: PID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['relationship'] = 'collection';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['pid']['default_argument_options']['code'] = '$object = menu_get_object(\'islandora_object\', 2);
if (is_object($object) && in_array(\'islandora:collectionCModel\', $object->models)) {
  return $object->id;
};';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['pid']['limit'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'usage_stats');
  $handler->display->display_options['block_description'] = 'Usage Stats for Collections';
  $translatables['clone_of_islandora_usage_stats_for_collections'] = array(
    t('Master'),
    t('Collection Usage Stats'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No view counts found.'),
    t('Collection'),
    t('Object'),
    t('Collection Object'),
    t('Object Collection Access'),
    t('<a href="/islandora/object/[pid]" title="[label]">[label]</a>'),
    t('<span>([id])</span>'),
    t('.'),
    t(','),
    t('All'),
    t('Block'),
    t('Usage Stats for Collections'),
  );
  $export['clone_of_islandora_usage_stats_for_collections'] = $view;

  $view = new view();
  $view->name = 'footer_view_alternative';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Footer View Alternative';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['value'] = 'a6d6c869-916f-4501-873f-b2317d10b36c';
  $handler->display->display_options['filters']['uuid_1']['group'] = 1;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '475bee6d-bd30-4806-b3bb-b3aea9922460';
  $handler->display->display_options['filters']['uuid']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['footer_view_alternative'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['footer_view_alternative'] = $view;

  $view = new view();
  $view->name = 'footer_view_primary';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Footer View Primary';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Footer View Primary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image Block Link */
  $handler->display->display_options['fields']['field_image_block_link']['id'] = 'field_image_block_link';
  $handler->display->display_options['fields']['field_image_block_link']['table'] = 'field_data_field_image_block_link';
  $handler->display->display_options['fields']['field_image_block_link']['field'] = 'field_image_block_link';
  $handler->display->display_options['fields']['field_image_block_link']['label'] = '';
  $handler->display->display_options['fields']['field_image_block_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_block_link']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_image_block_link']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_block']['alter']['text'] = '<a title="[title]" href="[field_image_block_link]">[field_image_block]</a>';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '090ed506-39aa-4fcd-88e2-6eef73ac63aa';
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_2']['id'] = 'uuid_2';
  $handler->display->display_options['filters']['uuid_2']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_2']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_2']['value'] = 'e9dcbf18-166b-4650-bc8c-6e07cbf294a9';
  $handler->display->display_options['filters']['uuid_2']['group'] = 2;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['value'] = 'ee5f9e34-2230-45b0-9f61-821870695c7d';
  $handler->display->display_options['filters']['uuid_1']['group'] = 3;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  $translatables['footer_view_primary'] = array(
    t('Master'),
    t('Footer View Primary'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a title="[title]" href="[field_image_block_link]">[field_image_block]</a>'),
    t('Block'),
  );
  $export['footer_view_primary'] = $view;

  $view = new view();
  $view->name = 'frontpage_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Frontpage Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage Slideshow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'islandora:39';
  $handler->display->display_options['filters']['PID']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_1']['id'] = 'PID_1';
  $handler->display->display_options['filters']['PID_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_1']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_1']['value'] = 'islandora:38';
  $handler->display->display_options['filters']['PID_1']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['frontpage_slideshow'] = array(
    t('Master'),
    t('Frontpage Slideshow'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['frontpage_slideshow'] = $view;

  $view = new view();
  $view->name = 'recently_added_to_collection';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Recently Added to Collection';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recently Added';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['dc.title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['order'] = 'DESC';
  /* Contextual filter: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_action'] = 'default';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary_options']['items_per_page'] = '25';

  /* Display: Recently Added to collection */
  $handler = $view->new_display('block', 'Recently Added to collection', 'block');
  $translatables['recently_added_to_collection'] = array(
    t('Master'),
    t('Recently Added'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Recently Added to collection'),
  );
  $export['recently_added_to_collection'] = $view;

  $view = new view();
  $view->name = 'sort_by_title';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Sort By Title';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search Within Collection';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'clone_of_default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['alter']['text'] = '<a href="/islandora/object/[PID]"><img src="/islandora/object/[PID]/datastream/TN/view"/></a>';
  $handler->display->display_options['fields']['PID']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_type'] = 'div';
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Sort criterion: Islandora Solr: mods_titleInfo_title_t */
  $handler->display->display_options['sorts']['mods_titleInfo_title_t']['id'] = 'mods_titleInfo_title_t';
  $handler->display->display_options['sorts']['mods_titleInfo_title_t']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['mods_titleInfo_title_t']['field'] = 'mods_titleInfo_title_t';
  $handler->display->display_options['sorts']['mods_titleInfo_title_t']['order'] = 'DESC';
  $handler->display->display_options['sorts']['mods_titleInfo_title_t']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['mods_titleInfo_title_t']['expose']['label'] = 'Title';
  /* Contextual filter: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_action'] = 'default';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['dc.title']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['dc.title']['expose']['label'] = 'Search Text';
  $handler->display->display_options['filters']['dc.title']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['dc.title']['expose']['operator_label'] = 'Operator Label';
  $handler->display->display_options['filters']['dc.title']['expose']['identifier'] = 'dc_title';
  $handler->display->display_options['filters']['dc.title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'sort-by-title';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $translatables['sort_by_title'] = array(
    t('Master'),
    t('Search Within Collection'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<a href="/islandora/object/[PID]"><img src="/islandora/object/[PID]/datastream/TN/view"/></a>'),
    t('Title'),
    t('All'),
    t('Search Text'),
    t('Operator Label'),
    t('Page'),
    t('Block'),
  );
  $export['sort_by_title'] = $view;

  return $export;
}
