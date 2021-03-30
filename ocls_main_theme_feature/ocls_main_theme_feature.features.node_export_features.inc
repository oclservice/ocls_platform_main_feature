<?php

/**
 * @file
 * ocls_main_theme_feature.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ocls_main_theme_feature_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => FALSE,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Partner Institutions\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'0a369398-cae7-4655-970e-a083ddbf1df0\',
      \'vid\' => NULL,
      \'vuuid\' => \'7d1a1822-ffa6-4391-887b-396d2c80bf25\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>The Colleges Object Repository (CORe) is a collaborative initiative aimed at creating access to unique digital content by Ontario colleges.</p>\\r\\n\\r\\n<p>Its foundation is a shared, multi-institution repository built, managed, and supported by Ontario Colleges Library Service (OCLS) and its <a href=\\"https://core.ocls.ca/ocls-repositories\\">partner institutions.</a></p>\\r\\n\\r\\n<p>The power of CORe includes:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Ability to search for digital assets across 6 partner institutions using one search box</li>\\r\\n\\t<li>Robust storage and display of digital files and metadata</li>\\r\\n\\t<li>Opportunities to showcase the scholarship and activities of Ontario college faculty, staff, and students</li>\\r\\n\\t<li>Facilitated knowledge-sharing between members</li>\\r\\n</ul>\\r\\n\\r\\n<p>CORe is built on Islandora, an open-source software framework with Canadian roots. Assistance with theming and implementation was provided by DiscoveryGarden and the BC Electronic Library Network (BC-ELN).</p>\\r\\n\\r\\n<p>For more information about CORe, please see the <a href=\\"https://core.ocls.ca/node/5\\">FAQ</a> or get in touch with us at <a href=\\"mailto:rt@ocls.ca\\">rt@ocls.ca</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The Colleges Object Repository (CORe) is a collaborative initiative aimed at creating access to unique digital content by Ontario colleges.</p>\\n<p>Its foundation is a shared, multi-institution repository built, managed, and supported by Ontario Colleges Library Service (OCLS) and its <a href=\\"https://core.ocls.ca/ocls-repositories\\">partner institutions.</a></p>\\n<p>The power of CORe includes:</p>\\n<ul><li>Ability to search for digital assets across 6 partner institutions using one search box</li>\\n<li>Robust storage and display of digital files and metadata</li>\\n<li>Opportunities to showcase the scholarship and activities of Ontario college faculty, staff, and students</li>\\n<li>Facilitated knowledge-sharing between members</li>\\n</ul><p>CORe is built on Islandora, an open-source software framework with Canadian roots. Assistance with theming and implementation was provided by DiscoveryGarden and the BC Electronic Library Network (BC-ELN).</p>\\n<p>For more information about CORe, please see the <a href=\\"https://core.ocls.ca/node/5\\">FAQ</a> or get in touch with us at <a href=\\"mailto:rt@ocls.ca\\">rt@ocls.ca</a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/8\',
        \'alias\' => \'about-CORe\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'About CORe\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'0b89286a-52c3-4790-ac42-0ff9d217c334\',
      \'vid\' => NULL,
      \'vuuid\' => \'38f82f7b-9981-42c5-bf95-b184c9a6d86a\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'68133\',
            \'uid\' => \'1\',
            \'filename\' => \'seneca-libraries-logo.png\',
            \'uri\' => \'public://seneca-libraries-logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'9403\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610053835\',
            \'uuid\' => \'75976fae-13fc-4be4-91f2-2388f37dede9\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1100\',
            \'height\' => \'120\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Seneca Libraries\',
            \'format\' => NULL,
            \'safe_value\' => \'Seneca Libraries\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'seneca\',
            \'format\' => NULL,
            \'safe_value\' => \'seneca\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://seneca.core.ocls.ca/islandora\',
            \'format\' => NULL,
            \'safe_value\' => \'https://seneca.core.ocls.ca/islandora\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Seneca\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'0e43a73f-bc80-4c58-ac61-5ec1c76dfd5c\',
      \'vid\' => NULL,
      \'vuuid\' => \'84dbec21-b900-4954-9377-4a0001c22d91\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'68134\',
            \'uid\' => \'1\',
            \'filename\' => \'ncc_web_onwhite.png\',
            \'uri\' => \'public://ncc_web_onwhite.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'40131\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610053835\',
            \'uuid\' => \'82e12458-86f5-4798-9687-ba7e07060f11\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'500\',
            \'height\' => \'270\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Niagara College\',
            \'format\' => NULL,
            \'safe_value\' => \'Niagara College\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'niagara\',
            \'format\' => NULL,
            \'safe_value\' => \'niagara\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://niagara.core.ocls.ca/islandora\',
            \'format\' => NULL,
            \'safe_value\' => \'https://niagara.core.ocls.ca/islandora\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Niagara\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'1440a960-47c7-4e09-9a3a-d4be4b5ba966\',
      \'vid\' => NULL,
      \'vuuid\' => \'3b8c7326-6d1f-4c34-832a-026a1ae74266\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'68135\',
            \'uid\' => \'1\',
            \'filename\' => \'fleming_png.png\',
            \'uri\' => \'public://fleming_png.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'14922\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610053835\',
            \'uuid\' => \'3709d6f8-34ef-41c3-b8a8-8a2e81b2cc17\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1000\',
            \'height\' => \'146\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Fleming\',
            \'format\' => NULL,
            \'safe_value\' => \'Fleming\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'fleming\',
            \'format\' => NULL,
            \'safe_value\' => \'fleming\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://fleming.core.ocls.ca/islandora\',
            \'format\' => NULL,
            \'safe_value\' => \'https://fleming.core.ocls.ca/islandora\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Fleming College\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'301da6dd-7482-43f8-a12d-8353194b2d24\',
      \'vid\' => NULL,
      \'vuuid\' => \'ee03b509-8a9c-4d51-87c0-77ca40d28434\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Input some text to encourage people to register</p>\\r\\n\\r\\n<p><a href=\\"https://core.ocls.ca/user/register\\">Register</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Input some text to encourage people to register</p>\\n<p><a href=\\"https://core.ocls.ca/user/register\\">Register</a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'264\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/30\',
        \'alias\' => \'denied\',
        \'language\' => \'en\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'0\',
      \'sticky\' => \'0\',
      \'title\' => \'Custom Access Denied\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'3e7138f9-49f0-4935-8c37-7b119fd4f390\',
      \'vid\' => NULL,
      \'vuuid\' => \'118b84aa-0d65-4bfb-b834-211abf9ca145\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div>\\r\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus eget elit semper, hendrerit ligula vehicula, tincidunt orci. Duis lacinia, enim eget posuere aliquam, felis lorem aliquet dui, non blandit nibh justo a quam. Integer volutpat porta velit, in pretium nulla consequat at. Etiam in vulputate ex. Integer elit tortor, gravida ac erat ut, tempus tincidunt ligula. Phasellus augue ligula, dictum tincidunt finibus eu, maximus tempus nibh. Morbi sed risus at erat lobortis lacinia.</p>\\r\\n\\r\\n<p>Donec lobortis faucibus nulla. Cras a lectus risus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Maecenas euismod, urna in consectetur ultricies, mauris tortor feugiat lorem, et rutrum enim erat eget libero. Quisque dapibus semper lorem, nec egestas dolor venenatis a. Nulla non pulvinar erat, id facilisis libero. Aenean a nisi faucibus, fermentum nisl aliquet, laoreet risus. Quisque nec lectus turpis. Quisque sagittis mauris vel ante dictum aliquet.</p>\\r\\n\\r\\n<p>Ut eget condimentum leo. Phasellus ut nibh suscipit, bibendum ante eu, posuere libero. Donec a varius ante, nec laoreet ex. Nullam odio lectus, vestibulum id ipsum eget, luctus cursus justo. Mauris in placerat quam, eu imperdiet ipsum. Nunc vel sodales est. Aliquam nisl neque, sagittis id tincidunt vitae, efficitur quis ipsum. In feugiat porttitor sem, in feugiat sem convallis a. Quisque feugiat luctus ex, pretium facilisis ipsum sagittis sit amet.</p>\\r\\n\\r\\n<p>Nulla semper gravida mi nec aliquam. Proin consequat vestibulum luctus. Donec eleifend urna vitae enim tincidunt ultrices. Nam ultricies sed mi maximus ultricies. Donec ultrices tempor lacus commodo volutpat. Proin posuere facilisis quam, eget sagittis elit rutrum nec. Vivamus finibus, lectus eu volutpat sagittis, neque lorem mattis lacus, eu finibus nisi nisi eget purus. Integer scelerisque, lorem tristique feugiat pretium, ipsum eros ullamcorper nunc, nec semper justo est eu dolor. Pellentesque egestas sagittis urna eu malesuada. Fusce aliquet, ipsum eleifend semper suscipit, diam ex convallis leo, sit amet fringilla odio leo id lectus. Donec blandit nunc et dignissim dapibus. Curabitur vitae elementum odio. Vivamus posuere tincidunt lacinia. Donec ac enim eu felis imperdiet placerat.</p>\\r\\n\\r\\n<p>Aliquam ac dapibus quam. Phasellus sodales erat at congue tempor. Aenean varius, risus id porttitor ornare, massa tortor efficitur orci, ac eleifend ipsum purus eu erat. Donec in sem ipsum. Curabitur ut nunc sed erat dapibus varius. Aenean ut odio vestibulum, tempus dui a, fermentum ligula. Donec vitae neque at nunc lacinia blandit tempor sit amet mi. Ut a vestibulum neque. Cras ornare vehicula ipsum eu interdum. Morbi vestibulum sed urna vel consequat. In sit amet urna purus. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus convallis metus sapien, sit amet elementum nunc venenatis vel.</p>\\r\\n</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus eget elit semper, hendrerit ligula vehicula, tincidunt orci. Duis lacinia, enim eget posuere aliquam, felis lorem aliquet dui, non blandit nibh justo a quam. Integer volutpat porta velit, in pretium nulla consequat at. Etiam in vulputate ex. Integer elit tortor, gravida ac erat ut, tempus tincidunt ligula. Phasellus augue ligula, dictum tincidunt finibus eu, maximus tempus nibh. Morbi sed risus at erat lobortis lacinia.</p>\\n<p>Donec lobortis faucibus nulla. Cras a lectus risus. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Maecenas euismod, urna in consectetur ultricies, mauris tortor feugiat lorem, et rutrum enim erat eget libero. Quisque dapibus semper lorem, nec egestas dolor venenatis a. Nulla non pulvinar erat, id facilisis libero. Aenean a nisi faucibus, fermentum nisl aliquet, laoreet risus. Quisque nec lectus turpis. Quisque sagittis mauris vel ante dictum aliquet.</p>\\n<p>Ut eget condimentum leo. Phasellus ut nibh suscipit, bibendum ante eu, posuere libero. Donec a varius ante, nec laoreet ex. Nullam odio lectus, vestibulum id ipsum eget, luctus cursus justo. Mauris in placerat quam, eu imperdiet ipsum. Nunc vel sodales est. Aliquam nisl neque, sagittis id tincidunt vitae, efficitur quis ipsum. In feugiat porttitor sem, in feugiat sem convallis a. Quisque feugiat luctus ex, pretium facilisis ipsum sagittis sit amet.</p>\\n<p>Nulla semper gravida mi nec aliquam. Proin consequat vestibulum luctus. Donec eleifend urna vitae enim tincidunt ultrices. Nam ultricies sed mi maximus ultricies. Donec ultrices tempor lacus commodo volutpat. Proin posuere facilisis quam, eget sagittis elit rutrum nec. Vivamus finibus, lectus eu volutpat sagittis, neque lorem mattis lacus, eu finibus nisi nisi eget purus. Integer scelerisque, lorem tristique feugiat pretium, ipsum eros ullamcorper nunc, nec semper justo est eu dolor. Pellentesque egestas sagittis urna eu malesuada. Fusce aliquet, ipsum eleifend semper suscipit, diam ex convallis leo, sit amet fringilla odio leo id lectus. Donec blandit nunc et dignissim dapibus. Curabitur vitae elementum odio. Vivamus posuere tincidunt lacinia. Donec ac enim eu felis imperdiet placerat.</p>\\n<p>Aliquam ac dapibus quam. Phasellus sodales erat at congue tempor. Aenean varius, risus id porttitor ornare, massa tortor efficitur orci, ac eleifend ipsum purus eu erat. Donec in sem ipsum. Curabitur ut nunc sed erat dapibus varius. Aenean ut odio vestibulum, tempus dui a, fermentum ligula. Donec vitae neque at nunc lacinia blandit tempor sit amet mi. Ut a vestibulum neque. Cras ornare vehicula ipsum eu interdum. Morbi vestibulum sed urna vel consequat. In sit amet urna purus. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus convallis metus sapien, sit amet elementum nunc venenatis vel.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/9\',
        \'alias\' => \'partner-institutions\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Partner Institutions\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'44f02515-37d0-4b1a-a424-9da6ba05e3f9\',
      \'vid\' => NULL,
      \'vuuid\' => \'18563d3e-46f7-4071-be89-29b9a902924b\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Collection and object statistics</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li><a href=\\"/all-collections\\" target=\\"_blank\\">List all collections</a></li>\\r\\n\\t<li><a href=\\"/all-objects\\" target=\\"_blank\\">List all objects</a></li>\\r\\n\\t<li><a href=\\"/objects-by-dsid\\" target=\\"_blank\\">Objects with or without selected datastreams</a></li>\\r\\n\\t<li><a href=\\"/admin/islandora/tools/simple_workflow/list\\" target=\\"_blank\\">List all inactive objects</a></li>\\r\\n</ul>\\r\\n\\r\\n<p>Usage statistics</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li><a href=\\"/admin/reports/islandora_usage_stats_report\\" target=\\"_blank\\">Detailed view&nbsp;statistics</a></li>\\r\\n\\t<li><a href=\\"/download_stats\\" target=\\"_blank\\">Detailed download statistics</a></li>\\r\\n</ul>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Collection and object statistics</p>\\n<ul><li><a href=\\"/all-collections\\" target=\\"_blank\\">List all collections</a></li>\\n<li><a href=\\"/all-objects\\" target=\\"_blank\\">List all objects</a></li>\\n<li><a href=\\"/objects-by-dsid\\" target=\\"_blank\\">Objects with or without selected datastreams</a></li>\\n<li><a href=\\"/admin/islandora/tools/simple_workflow/list\\" target=\\"_blank\\">List all inactive objects</a></li>\\n</ul><p>Usage statistics</p>\\n<ul><li><a href=\\"/admin/reports/islandora_usage_stats_report\\" target=\\"_blank\\">Detailed view statistics</a></li>\\n<li><a href=\\"/download_stats\\" target=\\"_blank\\">Detailed download statistics</a></li>\\n</ul>",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'5159\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/31\',
        \'alias\' => \'collection-stats\',
        \'language\' => \'en\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Collection Statistics\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'48665676-4ef3-43a4-9b25-396e1ea2acce\',
      \'vid\' => NULL,
      \'vuuid\' => \'f45672a1-9f36-4116-81bb-ec69c508ba79\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div>\\r\\n<p>For information on how to join CORe as a partner institution, please contact Jana Purmalis at <a href=\\"mailto:tguignard@ocls.ca\\">jpurmalis@ocls.ca</a></p>\\r\\n\\r\\n<p>For general inquiries and technical support, please contact Guita Lamsechi at&nbsp;<a href=\\"mailto:glamsechi@ocls.ca\\">glamsechi@ocls.ca</a></p>\\r\\n\\r\\n<p>For questions related to content from specific colleges, please contact your college’s library:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li><a href=\\"https://centennial.core.ocls.ca/node/2\\">Centennial</a></li>\\r\\n\\t<li><a href=\\"https://conestoga.core.ocls.ca/node/2\\">Conestoga</a></li>\\r\\n\\t<li><a href=\\"https://fleming.core.ocls.ca/node/2\\">Fleming</a></li>\\r\\n\\t<li><a href=\\"https://georgian.core.ocls.ca/node/2\\">Georgian</a></li>\\r\\n\\t<li><a href=\\"https://loyalist.core.ocls.ca/node/2\\">Loyalist</a></li>\\r\\n\\t<li><a href=\\"https://seneca.core.ocls.ca/node/2\\">Seneca</a></li>\\r\\n</ul>\\r\\n</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<div>\\n<p>For information on how to join CORe as a partner institution, please contact Jana Purmalis at <a href=\\"mailto:tguignard@ocls.ca\\">jpurmalis@ocls.ca</a></p>\\n<p>For general inquiries and technical support, please contact Guita Lamsechi at <a href=\\"mailto:glamsechi@ocls.ca\\">glamsechi@ocls.ca</a></p>\\n<p>For questions related to content from specific colleges, please contact your college’s library:</p>\\n<ul><li><a href=\\"https://centennial.core.ocls.ca/node/2\\">Centennial</a></li>\\n<li><a href=\\"https://conestoga.core.ocls.ca/node/2\\">Conestoga</a></li>\\n<li><a href=\\"https://fleming.core.ocls.ca/node/2\\">Fleming</a></li>\\n<li><a href=\\"https://georgian.core.ocls.ca/node/2\\">Georgian</a></li>\\n<li><a href=\\"https://loyalist.core.ocls.ca/node/2\\">Loyalist</a></li>\\n<li><a href=\\"https://seneca.core.ocls.ca/node/2\\">Seneca</a></li>\\n</ul></div>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/6\',
        \'alias\' => \'contact\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Contact\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'4d8b6a52-aebb-4386-b2f2-4799f5d940ce\',
      \'vid\' => NULL,
      \'vuuid\' => \'9dea58ec-1d94-4244-a6d9-35d3bc379d40\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'22\',
            \'uid\' => \'1\',
            \'filename\' => \'CORe-logo.jpg\',
            \'uri\' => \'public://CORe-logo_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5406\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610053835\',
            \'uuid\' => \'c2c6b09b-c25c-400e-b3fa-864bae1330b7\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'206\',
            \'height\' => \'76\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'CORe\',
            \'format\' => NULL,
            \'safe_value\' => \'CORe\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'islandora\',
            \'format\' => NULL,
            \'safe_value\' => \'islandora\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://core.ocls.ca/islandora\',
            \'format\' => NULL,
            \'safe_value\' => \'https://core.ocls.ca/islandora\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => "Colleges\' Object Repository",
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'7620f194-7864-4617-abf3-2b2ab1601147\',
      \'vid\' => NULL,
      \'vuuid\' => \'4043a656-af6b-4ba1-bc64-606d506ba646\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<ol>\\r\\n\\t<li>\\r\\n\\t<h3><strong>What does CORe stand for?</strong></h3>\\r\\n\\r\\n\\t<p>CORe stands for the Colleges Object Repository, a collaborative initiative aimed at creating access to unique digital content by Ontario colleges.</p>\\r\\n\\t</li>\\r\\n\\t<li>\\r\\n\\t<h3><strong>What is the purpose of CORe?</strong></h3>\\r\\n\\r\\n\\t<p>The purpose of CORe is to have a shared digital repository system that makes it easy and cost-effective for Ontario college libraries to manage and display unique digital objects that don’t fit in a traditional library catalogue. This sharing model allows for wider discovery of hidden collections and allows members to leverage the cumulative expertise of a province-wide network of colleagues.</p>\\r\\n\\t</li>\\r\\n\\t<li>\\r\\n\\t<h3><strong>What types of collaboration do CORe members engage in?</strong></h3>\\r\\n\\r\\n\\t<p>CORe members work together to develop and share knowledge about workflows, best practices, and techniques for working with digital assets. Ontario Colleges Library Service (OCLS) participates in this process by providing hosting, maintenance, training, and technical support to members.</p>\\r\\n\\t</li>\\r\\n\\t<li>\\r\\n\\t<h3><strong>What software does CORe use? What is its architecture?</strong></h3>\\r\\n\\r\\n\\t<p>CORe is built using Islandora, an open-source software framework. It is set up using a multi-site architecture which allows participating colleges to share one repository while each maintaining a separate, customizable front-end interface.</p>\\r\\n\\r\\n\\t<p>Visitors can use the search box on CORe’s main site to find content from all participating colleges simultaneously, or they can visit individual colleges’ sites to search for materials specific to one college.</p>\\r\\n\\r\\n\\t<p>Assistance with theming and implementation was provided by DiscoveryGarden and the BC Electronic Library Network (BC-ELN).</p>\\r\\n\\t</li>\\r\\n\\t<li>\\r\\n\\t<h3><strong>Is CORe still in development?</strong></h3>\\r\\n\\r\\n\\t<p>CORe continues to be developed and improved as new needs and requirements arise.</p>\\r\\n\\t</li>\\r\\n\\t<li>\\r\\n\\t<h3><strong>Which institutions are currently participating in CORe?</strong></h3>\\r\\n\\r\\n\\t<p>A list of institutions that are currently participating in CORe can be found on the <a href=\\"https://core.ocls.ca/ocls-repositories\\">Partner Institutions</a> page.</p>\\r\\n\\t</li>\\r\\n\\t<li>\\r\\n\\t<h3><strong>Can my institution join CORe?</strong></h3>\\r\\n\\r\\n\\t<p>For information on joining CORe, please contact Thomas Guignard at tguignard@ocls.ca</p>\\r\\n\\t</li>\\r\\n\\t<li>\\r\\n\\t<h3><strong>What can I find in CORe?</strong></h3>\\r\\n\\r\\n\\t<p>CORe is home to a variety of different content types such as photographs, artwork, newsletters, essays, sound recordings, datasets, maps, videos, and more. It is up to each participating college to decide exactly how they will use CORe and what they will put inside. To find out more, contact your college’s library.</p>\\r\\n\\t</li>\\r\\n\\t<li>\\r\\n\\t<h3><strong>How can I submit my content to CORe?</strong></h3>\\r\\n\\r\\n\\t<p>If you want to submit content that is related to a participating college, please contact your college’s library.</p>\\r\\n\\t</li>\\r\\n</ol>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<ol><li>\\n\\t<strong>What does CORe stand for?</strong>\\n<p>\\tCORe stands for the Colleges Object Repository, a collaborative initiative aimed at creating access to unique digital content by Ontario colleges.\\n\\t</p></li>\\n<li>\\n\\t<strong>What is the purpose of CORe?</strong>\\n<p>\\tThe purpose of CORe is to have a shared digital repository system that makes it easy and cost-effective for Ontario college libraries to manage and display unique digital objects that don’t fit in a traditional library catalogue. This sharing model allows for wider discovery of hidden collections and allows members to leverage the cumulative expertise of a province-wide network of colleagues.\\n\\t</p></li>\\n<li>\\n\\t<strong>What types of collaboration do CORe members engage in?</strong>\\n<p>\\tCORe members work together to develop and share knowledge about workflows, best practices, and techniques for working with digital assets. Ontario Colleges Library Service (OCLS) participates in this process by providing hosting, maintenance, training, and technical support to members.\\n\\t</p></li>\\n<li>\\n\\t<strong>What software does CORe use? What is its architecture?</strong>\\n<p>\\tCORe is built using Islandora, an open-source software framework. It is set up using a multi-site architecture which allows participating colleges to share one repository while each maintaining a separate, customizable front-end interface.</p>\\n<p>\\tVisitors can use the search box on CORe’s main site to find content from all participating colleges simultaneously, or they can visit individual colleges’ sites to search for materials specific to one college.</p>\\n<p>\\tAssistance with theming and implementation was provided by DiscoveryGarden and the BC Electronic Library Network (BC-ELN).\\n\\t</p></li>\\n<li>\\n\\t<strong>Is CORe still in development?</strong>\\n<p>\\tCORe continues to be developed and improved as new needs and requirements arise.\\n\\t</p></li>\\n<li>\\n\\t<strong>Which institutions are currently participating in CORe?</strong>\\n<p>\\tA list of institutions that are currently participating in CORe can be found on the <a href=\\"https://core.ocls.ca/ocls-repositories\\">Partner Institutions</a> page.\\n\\t</p></li>\\n<li>\\n\\t<strong>Can my institution join CORe?</strong>\\n<p>\\tFor information on joining CORe, please contact Thomas Guignard at <a href=\\"mailto:tguignard@ocls.ca\\">tguignard@ocls.ca</a>\\n\\t</p></li>\\n<li>\\n\\t<strong>What can I find in CORe?</strong>\\n<p>\\tCORe is home to a variety of different content types such as photographs, artwork, newsletters, essays, sound recordings, datasets, maps, videos, and more. It is up to each participating college to decide exactly how they will use CORe and what they will put inside. To find out more, contact your college’s library.\\n\\t</p></li>\\n<li>\\n\\t<strong>How can I submit my content to CORe?</strong>\\n<p>\\tIf you want to submit content that is related to a participating college, please contact your college’s library.\\n\\t</p></li>\\n</ol>",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/5\',
        \'alias\' => \'FAQ\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'FAQs\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'7ab584f0-6372-4520-9283-42064a546a08\',
      \'vid\' => NULL,
      \'vuuid\' => \'639fca39-89dd-4521-a55e-4cb872fe16e0\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'68136\',
            \'uid\' => \'1\',
            \'filename\' => \'conestoga-logo.jpg\',
            \'uri\' => \'public://conestoga-logo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25163\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610053835\',
            \'uuid\' => \'8610b875-cc69-463c-9720-0377b4c3c627\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'295\',
            \'height\' => \'61\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Conestoga Collections\',
            \'format\' => NULL,
            \'safe_value\' => \'Conestoga Collections\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'conestoga\',
            \'format\' => NULL,
            \'safe_value\' => \'conestoga\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://conestoga.core.ocls.ca/islandora\',
            \'format\' => NULL,
            \'safe_value\' => \'https://conestoga.core.ocls.ca/islandora\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Conestoga College\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'7bd4f9f6-8bd2-4e21-a351-95004e22743b\',
      \'vid\' => NULL,
      \'vuuid\' => \'6bcd8b8c-e5af-4304-bb74-ff717dcdb28e\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>The Colleges Object Repository (CORe) is a collaborative initiative by Ontario college libraries, managed by <a href=\\"https://www.ocls.ca\\">OCLS</a>.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The Colleges Object Repository (CORe) is a collaborative initiative by Ontario college libraries, managed by <a href=\\"https://www.ocls.ca\\">OCLS</a>.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'CORe-logo.jpg\',
            \'uri\' => \'public://CORe-logo_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5406\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610053835\',
            \'uuid\' => \'c2c6b09b-c25c-400e-b3fa-864bae1330b7\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'206\',
            \'height\' => \'76\',
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_image_block_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'/\',
            \'format\' => NULL,
            \'safe_value\' => \'/\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Footer Data\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'acd7b71d-dd6a-4e60-992d-30083926a6e7\',
      \'vid\' => NULL,
      \'vuuid\' => \'367eb381-a02f-4d37-aa27-8fa060d8d1c5\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/7\',
        \'alias\' => \'advanced-search\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Advanced Search\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'acfef6c2-4809-4226-9ad6-cc547a3555ed\',
      \'vid\' => NULL,
      \'vuuid\' => \'b18c68e9-eeee-4d59-a95c-79ca96835f98\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div>\\r\\n<p>The <strong>Colleges Object Repository (CORe) </strong>is a collaborative initiative aimed at creating access to unique digital content by Ontario colleges.</p>\\r\\n\\r\\n<p>Its foundation is a shared, multi-institution repository built, managed, and supported by <a href=\\"https://www.ocls.ca/\\">Ontario Colleges Library Service (OCLS)</a> and its <a href=\\"https://core.ocls.ca/ocls-repositories\\">partner institutions.</a></p>\\r\\n\\r\\n<p>The power of CORe includes:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Ability to search for digital assets across 7&nbsp;partner institutions using one search box</li>\\r\\n\\t<li>Robust storage and display of digital files and metadata</li>\\r\\n\\t<li>Opportunities to showcase the scholarship and activities of Ontario college faculty, staff, and students</li>\\r\\n\\t<li>Facilitated knowledge-sharing between members</li>\\r\\n</ul>\\r\\n\\r\\n<p>CORe is built on Islandora, an open-source software framework with Canadian roots. Assistance with theming and implementation was provided by <a href=\\"http://www.discoverygarden.ca/\\">DiscoveryGarden</a> and the <a href=\\"http://bceln.ca/\\">BC Electronic Library Network (BC-ELN)</a>.</p>\\r\\n\\r\\n<p>For more information about CORe, please see the <a href=\\"https://core.ocls.ca/node/5\\">FAQ</a> or get in touch with us at <a href=\\"mailto:rt@ocls.ca\\">rt@ocls.ca</a></p>\\r\\n</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>The <strong>Colleges Object Repository (CORe) </strong>is a collaborative initiative aimed at creating access to unique digital content by Ontario colleges.</p>\\n<p>Its foundation is a shared, multi-institution repository built, managed, and supported by <a href=\\"https://www.ocls.ca/\\">Ontario Colleges Library Service (OCLS)</a> and its <a href=\\"https://core.ocls.ca/ocls-repositories\\">partner institutions.</a></p>\\n<p>The power of CORe includes:</p>\\n<ul><li>Ability to search for digital assets across 7 partner institutions using one search box</li>\\n<li>Robust storage and display of digital files and metadata</li>\\n<li>Opportunities to showcase the scholarship and activities of Ontario college faculty, staff, and students</li>\\n<li>Facilitated knowledge-sharing between members</li>\\n</ul><p>CORe is built on Islandora, an open-source software framework with Canadian roots. Assistance with theming and implementation was provided by <a href=\\"http://www.discoverygarden.ca/\\">DiscoveryGarden</a> and the <a href=\\"http://bceln.ca/\\">BC Electronic Library Network (BC-ELN)</a>.</p>\\n<p>For more information about CORe, please see the <a href=\\"https://core.ocls.ca/node/5\\">FAQ</a> or get in touch with us at <a href=\\"mailto:rt@ocls.ca\\">rt@ocls.ca</a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/4\',
        \'alias\' => \'about\',
        \'language\' => \'und\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'About\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'ba136a9c-72d6-40c6-8b25-d30491032211\',
      \'vid\' => NULL,
      \'vuuid\' => \'9f1d9e52-bc1d-440c-82f5-d58763c6e233\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Input some introductory text for your external submitters</p>\\r\\n\\r\\n<p><a href=\\"https://core-ocls-ca.eztest.ocls.ca/islandora/object/islandora%3A1027/manage/overview/ingest\\">Submit Objects</a></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Input some introductory text for your external submitters</p>\\n<p><a href=\\"https://core-ocls-ca.eztest.ocls.ca/islandora/object/islandora%3A1027/manage/overview/ingest\\">Submit Objects</a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:1;}\',
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'264\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/29\',
        \'alias\' => \'submit\',
        \'language\' => \'en\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Submit Objects\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'dfe198d8-fce5-442c-812c-8935fcf2aa82\',
      \'vid\' => NULL,
      \'vuuid\' => \'0786f8a1-c6fd-4e8b-92d1-916d307698f9\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam sagittis leo est, at vestibulum elit ullamcorper sit amet. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Aliquam eu lacinia purus. Duis cursus elementum ligula in commodo.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam sagittis leo est, at vestibulum elit ullamcorper sit amet. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Aliquam eu lacinia purus. Duis cursus elementum ligula in commodo.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'CORe-logo.jpg\',
            \'uri\' => \'public://CORe-logo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5406\',
            \'status\' => \'1\',
            \'timestamp\' => \'1502218413\',
            \'uuid\' => \'1b17d50a-2b79-4114-9ca7-3c050ee2a0b4\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'206\',
            \'height\' => \'76\',
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_image_block_link\' => array(
        \'und\' => array(
          array(
            \'value\' => \'/\',
            \'format\' => NULL,
            \'safe_value\' => \'/\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Footer Data\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'e5173edc-e23d-49f2-8113-ce5f4bf30f58\',
      \'vid\' => NULL,
      \'vuuid\' => \'a953c853-57c3-4a26-8ef1-b5de517abd38\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'68137\',
            \'uid\' => \'1\',
            \'filename\' => \'georgian_png.png\',
            \'uri\' => \'public://georgian_png.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'28296\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610053835\',
            \'uuid\' => \'be497bd1-1850-4e7f-aed2-f9da0d13af45\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1000\',
            \'height\' => \'244\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Georgian\',
            \'format\' => NULL,
            \'safe_value\' => \'Georgian\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'georgian\',
            \'format\' => NULL,
            \'safe_value\' => \'georgian\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://georgian.core.ocls.ca/islandora\',
            \'format\' => NULL,
            \'safe_value\' => \'https://georgian.core.ocls.ca/islandora\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Georgian Collections\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'e9b2e6b8-1856-446d-b2bf-8025d233573f\',
      \'vid\' => NULL,
      \'vuuid\' => \'1c2b8d19-a6ea-4adf-bef5-319ede2ecab4\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'68138\',
            \'uid\' => \'1\',
            \'filename\' => \'loyalist_library.jpg\',
            \'uri\' => \'public://loyalist_library.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'48625\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610053835\',
            \'uuid\' => \'cbf8005a-2a8e-45a7-8191-6a224f89b13c\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'400\',
            \'height\' => \'400\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Loyalist\',
            \'format\' => NULL,
            \'safe_value\' => \'Loyalist\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'loyalist\',
            \'format\' => NULL,
            \'safe_value\' => \'loyalist\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://loyalist.core.ocls.ca/islandora\',
            \'format\' => NULL,
            \'safe_value\' => \'https://loyalist.core.ocls.ca/islandora\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Loyalist Library\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'ee193a04-aa88-4b5f-bbc8-6198d5b23202\',
      \'vid\' => NULL,
      \'vuuid\' => \'b2120925-e0a8-42cd-ac02-8ef3e3fb8923\',
    ),
  (object) array(
      \'body\' => array(),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/16\',
        \'alias\' => \'advanced-search\',
        \'language\' => \'en\',
      ),
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Advanced Search\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'ee948a90-7044-4a34-a733-433714457be6\',
      \'vid\' => NULL,
      \'vuuid\' => \'1efd406d-bd59-4957-ad35-8a0314773dbb\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => 0,
      \'comment\' => \'0\',
      \'comment_count\' => 0,
      \'created\' => NULL,
      \'data\' => \'a:6:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";s:7:"overlay";i:0;}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'68139\',
            \'uid\' => \'1\',
            \'filename\' => \'centennial_square.png\',
            \'uri\' => \'public://centennial_square.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'31516\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610053835\',
            \'uuid\' => \'b3d9f894-7bb1-4fc7-b6e5-c63059ee3b7e\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'900\',
            \'height\' => \'900\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Centennial Collections\',
            \'format\' => NULL,
            \'safe_value\' => \'Centennial Collections\',
          ),
        ),
      ),
      \'field_repository_namespace\' => array(
        \'und\' => array(
          array(
            \'value\' => \'centennial\',
            \'format\' => NULL,
            \'safe_value\' => \'centennial\',
          ),
        ),
      ),
      \'field_repository_url\' => array(
        \'und\' => array(
          array(
            \'value\' => \'https://centennial.core.ocls.ca/islandora\',
            \'format\' => NULL,
            \'safe_value\' => \'https://centennial.core.ocls.ca/islandora\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => \'\',
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Centennial College\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'institution\',
      \'uid\' => \'1\',
      \'uuid\' => \'f8e3b8c4-659c-47a4-b81c-e19bf8f73618\',
      \'vid\' => NULL,
      \'vuuid\' => \'7121224e-605f-4858-975f-109f3c11b5ad\',
    ),
)',
);
  return $node_export;
}
