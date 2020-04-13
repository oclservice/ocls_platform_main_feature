<?php

/**
 * @file
 * ocls_fleming_main_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ocls_fleming_main_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ocls_repositories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OCLS Repositories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OCLS Repositories';
  $handler->display->display_options['css_class'] = 'inst_list_view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Namespace */
  $handler->display->display_options['fields']['field_repository_namespace']['id'] = 'field_repository_namespace';
  $handler->display->display_options['fields']['field_repository_namespace']['table'] = 'field_data_field_repository_namespace';
  $handler->display->display_options['fields']['field_repository_namespace']['field'] = 'field_repository_namespace';
  $handler->display->display_options['fields']['field_repository_namespace']['label'] = '';
  $handler->display->display_options['fields']['field_repository_namespace']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_repository_namespace']['element_label_colon'] = FALSE;
  /* Field: Content: Repository URL */
  $handler->display->display_options['fields']['field_repository_url']['id'] = 'field_repository_url';
  $handler->display->display_options['fields']['field_repository_url']['table'] = 'field_data_field_repository_url';
  $handler->display->display_options['fields']['field_repository_url']['field'] = 'field_repository_url';
  $handler->display->display_options['fields']['field_repository_url']['label'] = '';
  $handler->display->display_options['fields']['field_repository_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_repository_url']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['path'] = '[field_repository_url]';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Repository Name */
  $handler->display->display_options['fields']['field_repository_name']['id'] = 'field_repository_name';
  $handler->display->display_options['fields']['field_repository_name']['table'] = 'field_data_field_repository_name';
  $handler->display->display_options['fields']['field_repository_name']['field'] = 'field_repository_name';
  $handler->display->display_options['fields']['field_repository_name']['label'] = '';
  $handler->display->display_options['fields']['field_repository_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_repository_name']['alter']['path'] = '[field_repository_url]';
  $handler->display->display_options['fields']['field_repository_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'institution' => 'institution',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ocls-repositories';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['ocls_repositories'] = array(
    t('Master'),
    t('OCLS Repositories'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Block'),
  );
  $export['ocls_repositories'] = $view;

  return $export;
}
