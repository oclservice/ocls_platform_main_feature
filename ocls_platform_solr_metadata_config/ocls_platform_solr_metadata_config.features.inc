<?php
/**
 * @file
 * ocls_platform_solr_metadata_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ocls_platform_solr_metadata_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function ocls_platform_solr_metadata_config_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'score',
    'field_type' => 'sort_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Relevance',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  1 => array(
    'solr_field' => 'catch_all_fields_mt',
    'field_type' => 'search_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Keyword',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  2 => array(
    'solr_field' => 'mods_titleInfo_title_ms',
    'field_type' => 'result_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => TRUE,
      'link_to_search' => FALSE,
    ),
  ),
  3 => array(
    'solr_field' => 'mods_name_personal_creator_ms',
    'field_type' => 'facet_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  4 => array(
    'solr_field' => 'mods_subject_topic_ms',
    'field_type' => 'facet_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Subject',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  5 => array(
    'solr_field' => 'mods_titleInfo_title_mt',
    'field_type' => 'search_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  6 => array(
    'solr_field' => 'mods_name_personal_author_ms',
    'field_type' => 'result_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Authors',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  7 => array(
    'solr_field' => 'mods_originInfo_dateIssued_dt',
    'field_type' => 'sort_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Date',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  8 => array(
    'solr_field' => 'mods_subject_topic_mt',
    'field_type' => 'search_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Subject',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  9 => array(
    'solr_field' => 'mods_originInfo_dateIssued_ms',
    'field_type' => 'result_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Date',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  10 => array(
    'solr_field' => 'fedora_datastream_latest_OBJ_MIMETYPE_ms',
    'field_type' => 'facet_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Format Type',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  11 => array(
    'solr_field' => 'mods_identifier_mt',
    'field_type' => 'search_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => 'Identifier',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  12 => array(
    'solr_field' => 'mods_subject_topic_ms',
    'field_type' => 'result_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => 'Subjects',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  13 => array(
    'solr_field' => 'mods_typeOfResource_ms',
    'field_type' => 'facet_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => 'Resource Type',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  14 => array(
    'solr_field' => 'mods_originInfo_dateIssued_ms',
    'field_type' => 'facet_fields',
    'weight' => 4,
    'solr_field_settings' => array(
      'label' => 'Date',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  15 => array(
    'solr_field' => 'mods_originInfo_dateIssued_mt',
    'field_type' => 'search_fields',
    'weight' => 4,
    'solr_field_settings' => array(
      'label' => 'Date',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  16 => array(
    'solr_field' => 'mods_language_languageTerm_text_ms',
    'field_type' => 'result_fields',
    'weight' => 4,
    'solr_field_settings' => array(
      'label' => 'Language',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  17 => array(
    'solr_field' => 'mods_typeOfResource_ms',
    'field_type' => 'result_fields',
    'weight' => 5,
    'solr_field_settings' => array(
      'label' => 'Type',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  18 => array(
    'solr_field' => 'RELS_EXT_isMemberOfCollection_uri_ms',
    'field_type' => 'facet_fields',
    'weight' => 5,
    'solr_field_settings' => array(
      'label' => 'Collection',
      'sort_by' => 'count',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  19 => array(
    'solr_field' => 'mods_physicalDescription_internetMediaType_mt',
    'field_type' => 'search_fields',
    'weight' => 5,
    'solr_field_settings' => array(
      'label' => 'Format',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  20 => array(
    'solr_field' => 'mods_identifier_ms',
    'field_type' => 'result_fields',
    'weight' => 6,
    'solr_field_settings' => array(
      'label' => 'Identifier',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  21 => array(
    'solr_field' => 'mods_name_personal_author_mt',
    'field_type' => 'search_fields',
    'weight' => 6,
    'solr_field_settings' => array(
      'label' => 'Author',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  22 => array(
    'solr_field' => 'mods_genre_mt',
    'field_type' => 'search_fields',
    'weight' => 7,
    'solr_field_settings' => array(
      'label' => 'Genre',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  23 => array(
    'solr_field' => 'mods_abstract_ms',
    'field_type' => 'result_fields',
    'weight' => 7,
    'solr_field_settings' => array(
      'label' => 'Description',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'whole_field_option',
      'maximum_length' => 200,
      'add_ellipsis' => 1,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  24 => array(
    'solr_field' => 'mods_language_languageTerm_text_mt',
    'field_type' => 'search_fields',
    'weight' => 8,
    'solr_field_settings' => array(
      'label' => 'Language',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  25 => array(
    'solr_field' => 'mods_typeOfResource_mt',
    'field_type' => 'search_fields',
    'weight' => 9,
    'solr_field_settings' => array(
      'label' => 'Type of Resource',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
);
}

/**
 * Implements hook_islandora_solr_metadata_configurations_default_fields().
 */
function ocls_platform_solr_metadata_config_islandora_solr_metadata_configurations_default_fields() {
 return array(
  'ocls_base_configuration' => array(
    'fields' => array(
      'mods_titleInfo_title_ms' => array(
        'solr_field' => 'mods_titleInfo_title_ms',
        'data' => 'a:5:{s:13:"display_label";s:5:"Title";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}s:11:"permissions";a:2:{s:18:"enable_permissions";i:0;s:11:"permissions";a:3:{i:1;s:1:"1";i:2;s:1:"2";i:3;s:1:"3";}}}',
        'weight' => 1,
        'display_label' => 'Title',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'permissions' => array(
          'enable_permissions' => 0,
          'permissions' => array(
            1 => 1,
            2 => 2,
            3 => 3,
          ),
        ),
      ),
      'mods_originInfo_dateIssued_ms' => array(
        'solr_field' => 'mods_originInfo_dateIssued_ms',
        'data' => 'a:5:{s:13:"display_label";s:4:"Date";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}s:11:"permissions";a:2:{s:18:"enable_permissions";i:0;s:11:"permissions";a:3:{i:1;s:1:"1";i:2;s:1:"2";i:3;s:1:"3";}}}',
        'weight' => 2,
        'display_label' => 'Date',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'permissions' => array(
          'enable_permissions' => 0,
          'permissions' => array(
            1 => 1,
            2 => 2,
            3 => 3,
          ),
        ),
      ),
      'mods_name_personal_creator_ms' => array(
        'solr_field' => 'mods_name_personal_creator_ms',
        'data' => 'a:5:{s:13:"display_label";s:7:"Creator";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}s:11:"permissions";a:2:{s:18:"enable_permissions";i:0;s:11:"permissions";a:3:{i:1;s:1:"1";i:2;s:1:"2";i:3;s:1:"3";}}}',
        'weight' => 3,
        'display_label' => 'Creator',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'permissions' => array(
          'enable_permissions' => 0,
          'permissions' => array(
            1 => 1,
            2 => 2,
            3 => 3,
          ),
        ),
      ),
      'mods_originInfo_publisher_ms' => array(
        'solr_field' => 'mods_originInfo_publisher_ms',
        'data' => 'a:5:{s:13:"display_label";s:9:"Publisher";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}s:11:"permissions";a:2:{s:18:"enable_permissions";i:0;s:11:"permissions";a:3:{i:1;s:1:"1";i:2;s:1:"2";i:3;s:1:"3";}}}',
        'weight' => 4,
        'display_label' => 'Publisher',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'permissions' => array(
          'enable_permissions' => 0,
          'permissions' => array(
            1 => 1,
            2 => 2,
            3 => 3,
          ),
        ),
      ),
      'mods_abstract_ms' => array(
        'solr_field' => 'mods_abstract_ms',
        'data' => 'a:5:{s:13:"display_label";s:11:"Description";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}s:11:"permissions";a:2:{s:18:"enable_permissions";i:0;s:11:"permissions";a:3:{i:1;s:1:"1";i:2;s:1:"2";i:3;s:1:"3";}}}',
        'weight' => 5,
        'display_label' => 'Description',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'permissions' => array(
          'enable_permissions' => 0,
          'permissions' => array(
            1 => 1,
            2 => 2,
            3 => 3,
          ),
        ),
      ),
      'mods_subject_topic_ms' => array(
        'solr_field' => 'mods_subject_topic_ms',
        'data' => 'a:5:{s:13:"display_label";s:10:"Subject(s)";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}s:11:"permissions";a:2:{s:18:"enable_permissions";i:0;s:11:"permissions";a:3:{i:1;s:1:"1";i:2;s:1:"2";i:3;s:1:"3";}}}',
        'weight' => 6,
        'display_label' => 'Subject(s)',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'permissions' => array(
          'enable_permissions' => 0,
          'permissions' => array(
            1 => 1,
            2 => 2,
            3 => 3,
          ),
        ),
      ),
      'mods_language_languageTerm_code_ms' => array(
        'solr_field' => 'mods_language_languageTerm_code_ms',
        'data' => 'a:5:{s:13:"display_label";s:8:"Language";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}s:11:"permissions";a:2:{s:18:"enable_permissions";i:0;s:11:"permissions";a:3:{i:1;s:1:"1";i:2;s:1:"2";i:3;s:1:"3";}}}',
        'weight' => 7,
        'display_label' => 'Language',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'permissions' => array(
          'enable_permissions' => 0,
          'permissions' => array(
            1 => 1,
            2 => 2,
            3 => 3,
          ),
        ),
      ),
      'mods_identifier_ms' => array(
        'solr_field' => 'mods_identifier_ms',
        'data' => 'a:5:{s:13:"display_label";s:10:"Identifier";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}s:11:"permissions";a:2:{s:18:"enable_permissions";i:0;s:11:"permissions";a:3:{i:1;s:1:"1";i:2;s:1:"2";i:3;s:1:"3";}}}',
        'weight' => 8,
        'display_label' => 'Identifier',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'permissions' => array(
          'enable_permissions' => 0,
          'permissions' => array(
            1 => 1,
            2 => 2,
            3 => 3,
          ),
        ),
      ),
      'mods_accessCondition_ms' => array(
        'solr_field' => 'mods_accessCondition_ms',
        'data' => 'a:5:{s:13:"display_label";s:6:"Rights";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}s:11:"permissions";a:2:{s:18:"enable_permissions";i:0;s:11:"permissions";a:3:{i:1;s:1:"1";i:2;s:1:"2";i:3;s:1:"3";}}}',
        'weight' => 9,
        'display_label' => 'Rights',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'permissions' => array(
          'enable_permissions' => 0,
          'permissions' => array(
            1 => 1,
            2 => 2,
            3 => 3,
          ),
        ),
      ),
      'mods_relatedItem_titleInfo_title_ms' => array(
        'solr_field' => 'mods_relatedItem_titleInfo_title_ms',
        'data' => 'a:5:{s:13:"display_label";s:8:"Relation";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}s:11:"permissions";a:2:{s:18:"enable_permissions";i:0;s:11:"permissions";a:3:{i:1;s:1:"1";i:2;s:1:"2";i:3;s:1:"3";}}}',
        'weight' => 10,
        'display_label' => 'Relation',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'permissions' => array(
          'enable_permissions' => 0,
          'permissions' => array(
            1 => 1,
            2 => 2,
            3 => 3,
          ),
        ),
      ),
      'mods_physicalDescription_extent_ms' => array(
        'solr_field' => 'mods_physicalDescription_extent_ms',
        'data' => 'a:5:{s:13:"display_label";s:6:"Extent";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}s:11:"permissions";a:2:{s:18:"enable_permissions";i:0;s:11:"permissions";a:3:{i:1;s:1:"1";i:2;s:1:"2";i:3;s:1:"3";}}}',
        'weight' => 11,
        'display_label' => 'Extent',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'permissions' => array(
          'enable_permissions' => 0,
          'permissions' => array(
            1 => 1,
            2 => 2,
            3 => 3,
          ),
        ),
      ),
      'mods_typeOfResource_ms' => array(
        'solr_field' => 'mods_typeOfResource_ms',
        'data' => 'a:5:{s:13:"display_label";s:4:"Type";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}s:11:"permissions";a:2:{s:18:"enable_permissions";i:0;s:11:"permissions";a:3:{i:1;s:1:"1";i:2;s:1:"2";i:3;s:1:"3";}}}',
        'weight' => 12,
        'display_label' => 'Type',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'permissions' => array(
          'enable_permissions' => 0,
          'permissions' => array(
            1 => 1,
            2 => 2,
            3 => 3,
          ),
        ),
      ),
      'mods_originInfo_dateOther_ms' => array(
        'solr_field' => 'mods_originInfo_dateOther_ms',
        'data' => 'a:5:{s:13:"display_label";s:11:"Other Dates";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}s:11:"permissions";a:2:{s:18:"enable_permissions";i:0;s:11:"permissions";a:3:{i:1;s:1:"1";i:2;s:1:"2";i:3;s:1:"3";}}}',
        'weight' => 13,
        'display_label' => 'Other Dates',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
        'permissions' => array(
          'enable_permissions' => 0,
          'permissions' => array(
            1 => 1,
            2 => 2,
            3 => 3,
          ),
        ),
      ),
    ),
    'cmodels' => array(
      'islandora:sp_pdf' => array(
        'cmodel' => 'islandora:sp_pdf',
      ),
      'islandora:sp-audioCModel' => array(
        'cmodel' => 'islandora:sp-audioCModel',
      ),
      'islandora:sp_videoCModel' => array(
        'cmodel' => 'islandora:sp_videoCModel',
      ),
      'islandora:sp_large_image_cmodel' => array(
        'cmodel' => 'islandora:sp_large_image_cmodel',
      ),
      'islandora:sp_basic_image' => array(
        'cmodel' => 'islandora:sp_basic_image',
      ),
      'islandora:bookCModel' => array(
        'cmodel' => 'islandora:bookCModel',
      ),
      'islandora:manuscriptPageCModel' => array(
        'cmodel' => 'islandora:manuscriptPageCModel',
      ),
      'islandora:collectionCModel' => array(
        'cmodel' => 'islandora:collectionCModel',
      ),
      'islandora:sp_document' => array(
        'cmodel' => 'islandora:sp_document',
      ),
      'islandora:pageCModel' => array(
        'cmodel' => 'islandora:pageCModel',
      ),
      'islandora:compoundCModel' => array(
        'cmodel' => 'islandora:compoundCModel',
      ),
    ),
    'description' => array(
      'description_field' => NULL,
      'description_label' => NULL,
      'description_data' => NULL,
    ),
    'name' => 'OCLS Base Configuration',
  ),
);
}
