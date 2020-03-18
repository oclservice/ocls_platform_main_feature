<?php

/**
 * @file
 * ocls_main_theme_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ocls_main_theme_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ocls_main_footer_view_primary';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OCLS Main Footer View Primary';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Footer View Primary';
  $handler->display->display_options['css_class'] = 'footer-view-primary';
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
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['uuid']['value'] = 'e5173edc-e23d-49f2-8113-ce5f4bf30f58';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $translatables['ocls_main_footer_view_primary'] = array(
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
  $export['ocls_main_footer_view_primary'] = $view;

  $view = new view();
  $view->name = 'partner_institutions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Partner Institutions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partner Institutions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/islandora/object/[PID]">
  <img src="/islandora/object/[PID]/datastream/TN/view"/>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
    4 => 'AND',
    6 => 'AND',
    5 => 'AND',
    7 => 'AND',
  );
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'conestoga:root';
  $handler->display->display_options['filters']['PID']['group'] = 1;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_5']['id'] = 'PID_5';
  $handler->display->display_options['filters']['PID_5']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_5']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_5']['value'] = 'seneca:root';
  $handler->display->display_options['filters']['PID_5']['group'] = 2;
  $handler->display->display_options['filters']['PID_5']['expose']['identifier'] = 'pid_5';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_3']['id'] = 'PID_3';
  $handler->display->display_options['filters']['PID_3']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_3']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_3']['value'] = 'fleming:root';
  $handler->display->display_options['filters']['PID_3']['group'] = 3;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_2']['id'] = 'PID_2';
  $handler->display->display_options['filters']['PID_2']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_2']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_2']['value'] = 'georgian:root';
  $handler->display->display_options['filters']['PID_2']['group'] = 4;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_1']['id'] = 'PID_1';
  $handler->display->display_options['filters']['PID_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_1']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_1']['value'] = 'centennial:root';
  $handler->display->display_options['filters']['PID_1']['group'] = 5;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_4']['id'] = 'PID_4';
  $handler->display->display_options['filters']['PID_4']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_4']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_4']['value'] = 'loyalist:root';
  $handler->display->display_options['filters']['PID_4']['group'] = 6;
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID_6']['id'] = 'PID_6';
  $handler->display->display_options['filters']['PID_6']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID_6']['field'] = 'PID';
  $handler->display->display_options['filters']['PID_6']['value'] = 'islandora:root';
  $handler->display->display_options['filters']['PID_6']['group'] = 7;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['partner_institutions'] = array(
    t('Master'),
    t('Partner Institutions'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/islandora/object/[PID]">
  <img src="/islandora/object/[PID]/datastream/TN/view"/>
</a>'),
    t('Block'),
  );
  $export['partner_institutions'] = $view;

  return $export;
}
