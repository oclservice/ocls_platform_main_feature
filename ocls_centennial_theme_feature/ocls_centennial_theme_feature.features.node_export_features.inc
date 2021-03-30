<?php

/**
 * @file
 * ocls_centennial_theme_feature.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ocls_centennial_theme_feature_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div>\\r\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean semper, est eu faucibus mattis, felis eros pretium lectus, non maximus lacus neque nec arcu. Fusce at sem non mi eleifend euismod sit amet vitae purus. Cras nec cursus ante. Nunc eget ipsum eleifend, ornare mauris eu, convallis neque. Aliquam sollicitudin lacus sed enim tincidunt, at pellentesque arcu egestas. Donec non nisi dapibus, bibendum libero et, scelerisque nulla. Donec vitae volutpat augue. Duis ut risus cursus, lobortis nulla ut, dictum sapien. Mauris consequat sem eget ante fermentum feugiat. Aliquam ultricies leo vel augue scelerisque, nec dignissim nisl volutpat. Suspendisse consectetur condimentum diam et ullamcorper. Donec rhoncus sit amet ante at placerat. Morbi ac laoreet mauris. Integer bibendum efficitur felis, cursus ornare ligula auctor eget.</p>\\r\\n\\r\\n<p>Nulla eu augue sapien. Quisque risus enim, bibendum ac ipsum et, sagittis dictum enim. Integer ac tellus sapien. Donec sed fermentum nunc. Pellentesque ultricies varius orci et sollicitudin. Donec consectetur dolor a volutpat congue. Nunc at arcu ut diam fringilla hendrerit.</p>\\r\\n\\r\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean nec vehicula sem, ut lobortis sapien. Cras dictum eleifend placerat. Donec quam erat, feugiat vitae lacus nec, porttitor auctor ligula. Nam erat magna, rhoncus non felis a, imperdiet cursus elit. Donec commodo diam quis erat sagittis condimentum. Nam consectetur enim rutrum egestas ultricies. Morbi a dui faucibus, ullamcorper nisl in, iaculis orci. Donec vehicula scelerisque nulla imperdiet malesuada. Mauris at tortor non lacus blandit ultricies ac vitae urna. Curabitur a metus magna. Aliquam bibendum et ligula vitae congue. Suspendisse aliquam sit amet sem a sagittis. Donec pretium metus sit amet mi maximus vehicula. Ut luctus ultrices massa, ac auctor nisl gravida sed. Etiam eget elit enim.</p>\\r\\n\\r\\n<p>Duis scelerisque nisi nec est malesuada lobortis. Maecenas sem neque, auctor ut efficitur quis, venenatis sit amet quam. Vivamus sed hendrerit tellus, a molestie est. Sed suscipit diam quis odio accumsan commodo rutrum eu leo. In ultricies nisl ipsum, quis pharetra ipsum bibendum ac. Nam sed arcu id diam rutrum pharetra at sed nunc. Duis non neque nulla. In et quam risus. Aenean vestibulum ante eu magna auctor, at consequat massa imperdiet.</p>\\r\\n\\r\\n<p>Suspendisse et sapien ac turpis tristique commodo. Vivamus tempor lobortis purus ut malesuada. Aliquam sed nisl vitae quam malesuada placerat ac maximus ante. Sed iaculis finibus blandit. Curabitur tempus urna felis, nec egestas purus tincidunt quis. Cras venenatis, sem at imperdiet fermentum, velit eros rhoncus purus, vel iaculis nulla ipsum quis tellus. Phasellus pretium sem sit amet fringilla venenatis. Cras luctus augue elit, vel lobortis nulla lacinia ac. Duis vel tempus lorem. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas id urna nisl. Sed in suscipit ligula.</p>\\r\\n</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean semper, est eu faucibus mattis, felis eros pretium lectus, non maximus lacus neque nec arcu. Fusce at sem non mi eleifend euismod sit amet vitae purus. Cras nec cursus ante. Nunc eget ipsum eleifend, ornare mauris eu, convallis neque. Aliquam sollicitudin lacus sed enim tincidunt, at pellentesque arcu egestas. Donec non nisi dapibus, bibendum libero et, scelerisque nulla. Donec vitae volutpat augue. Duis ut risus cursus, lobortis nulla ut, dictum sapien. Mauris consequat sem eget ante fermentum feugiat. Aliquam ultricies leo vel augue scelerisque, nec dignissim nisl volutpat. Suspendisse consectetur condimentum diam et ullamcorper. Donec rhoncus sit amet ante at placerat. Morbi ac laoreet mauris. Integer bibendum efficitur felis, cursus ornare ligula auctor eget.</p>\\n<p>Nulla eu augue sapien. Quisque risus enim, bibendum ac ipsum et, sagittis dictum enim. Integer ac tellus sapien. Donec sed fermentum nunc. Pellentesque ultricies varius orci et sollicitudin. Donec consectetur dolor a volutpat congue. Nunc at arcu ut diam fringilla hendrerit.</p>\\n<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean nec vehicula sem, ut lobortis sapien. Cras dictum eleifend placerat. Donec quam erat, feugiat vitae lacus nec, porttitor auctor ligula. Nam erat magna, rhoncus non felis a, imperdiet cursus elit. Donec commodo diam quis erat sagittis condimentum. Nam consectetur enim rutrum egestas ultricies. Morbi a dui faucibus, ullamcorper nisl in, iaculis orci. Donec vehicula scelerisque nulla imperdiet malesuada. Mauris at tortor non lacus blandit ultricies ac vitae urna. Curabitur a metus magna. Aliquam bibendum et ligula vitae congue. Suspendisse aliquam sit amet sem a sagittis. Donec pretium metus sit amet mi maximus vehicula. Ut luctus ultrices massa, ac auctor nisl gravida sed. Etiam eget elit enim.</p>\\n<p>Duis scelerisque nisi nec est malesuada lobortis. Maecenas sem neque, auctor ut efficitur quis, venenatis sit amet quam. Vivamus sed hendrerit tellus, a molestie est. Sed suscipit diam quis odio accumsan commodo rutrum eu leo. In ultricies nisl ipsum, quis pharetra ipsum bibendum ac. Nam sed arcu id diam rutrum pharetra at sed nunc. Duis non neque nulla. In et quam risus. Aenean vestibulum ante eu magna auctor, at consequat massa imperdiet.</p>\\n<p>Suspendisse et sapien ac turpis tristique commodo. Vivamus tempor lobortis purus ut malesuada. Aliquam sed nisl vitae quam malesuada placerat ac maximus ante. Sed iaculis finibus blandit. Curabitur tempus urna felis, nec egestas purus tincidunt quis. Cras venenatis, sem at imperdiet fermentum, velit eros rhoncus purus, vel iaculis nulla ipsum quis tellus. Phasellus pretium sem sit amet fringilla venenatis. Cras luctus augue elit, vel lobortis nulla lacinia ac. Duis vel tempus lorem. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Maecenas id urna nisl. Sed in suscipit ligula.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
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
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'90\',
            \'uid\' => \'1\',
            \'filename\' => \'seneca-libraries-logo.png\',
            \'uri\' => \'public://seneca-libraries-logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'9403\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610469516\',
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
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'91\',
            \'uid\' => \'1\',
            \'filename\' => \'ncc_web_onwhite.png\',
            \'uri\' => \'public://ncc_web_onwhite.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'40131\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610469516\',
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
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'92\',
            \'uid\' => \'1\',
            \'filename\' => \'fleming_png.png\',
            \'uri\' => \'public://fleming_png.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'14922\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610469516\',
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
            \'value\' => "<p>Select the form that best represents the work that you are trying to submit. Describe your work as thoroughly as possible but you don\'t need to fill out every field.&nbsp;</p>\\r\\n\\r\\n<p><strong>Submit <a href=\\"http://centennialcollege.libwizard.com/repositoryfaculty\\"><u>faculty work</u></a></strong><br />\\r\\nUse the form above for submitting a single work produced by Centennial faculty or staff.&nbsp;</p>\\r\\n\\r\\n<p><strong>Submit&nbsp;</strong><u><a href=\\"http://centennialcollege.libwizard.com/repositorystudent\\"><strong>student work</strong></a></u><br />\\r\\nFaculty can use the student form to submit exemplary student work. Students are required to fill out and submit a signed <u>consent </u>along with the submission.</p>\\r\\n\\r\\n<p><strong>Create a <u><a href=\\"http://centennialcollege.libwizard.com/repositoryprofile\\">faculty profile</a></u></strong><br />\\r\\nThis option resembles a portfolio. Create a personal profile with research interests and link to multiple publications/works.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Select the form that best represents the work that you are trying to submit. Describe your work as thoroughly as possible but you don\'t need to fill out every field. </p>\\n<p><strong>Submit <a href=\\"http://centennialcollege.libwizard.com/repositoryfaculty\\">faculty work</a></strong><br />\\nUse the form above for submitting a single work produced by Centennial faculty or staff. </p>\\n<p><strong>Submit </strong><a href=\\"http://centennialcollege.libwizard.com/repositorystudent\\"><strong>student work</strong></a><br />\\nFaculty can use the student form to submit exemplary student work. Students are required to fill out and submit a signed consent along with the submission.</p>\\n<p><strong>Create a <a href=\\"http://centennialcollege.libwizard.com/repositoryprofile\\">faculty profile</a></strong><br />\\nThis option resembles a portfolio. Create a personal profile with research interests and link to multiple publications/works.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'files\' => array(),
      \'language\' => \'en\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1888\',
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
      \'title\' => \'Submit Work\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'page\',
      \'uid\' => \'1\',
      \'uuid\' => \'498a99d5-b319-473c-974c-f848fcd10f04\',
      \'vid\' => NULL,
      \'vuuid\' => \'96e93985-d27e-4f8d-85c9-b938aba94103\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div>\\r\\n<p>Please contact Joanna Blair, Librarian at jblair@centennialcollege.ca, if you have a collection (i.e. student projects, photostock, etc.) you would like to see in the repository, or if you have any other questions regarding the repository. General inquiries can go to library@centennialcollege.ca</p>\\r\\n\\r\\n<p>Joanna Blair, Librarian<br />\\r\\nMorningside Campus Library<br />\\r\\nCentennial College Libraries</p>\\r\\n\\r\\n<p>jblair@centennialcollege.ca</p>\\r\\n\\r\\n<p>Tel: 416-289-5000 ext. 8014<br />\\r\\nFax: 416-289-5017</p>\\r\\n\\r\\n<p><a href=\\"http://library.centennialcollege.ca\\">http://library.centennialcollege.ca</a></p>\\r\\n</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Please contact Joanna Blair, Librarian at <a href=\\"mailto:jblair@centennialcollege.ca\\">jblair@centennialcollege.ca</a>, if you have a collection (i.e. student projects, photostock, etc.) you would like to see in the repository, or if you have any other questions regarding the repository. General inquiries can go to <a href=\\"mailto:library@centennialcollege.ca\\">library@centennialcollege.ca</a></p>\\n<p>Joanna Blair, Librarian<br />\\nMorningside Campus Library<br />\\nCentennial College Libraries</p>\\n<p><a href=\\"mailto:jblair@centennialcollege.ca\\">jblair@centennialcollege.ca</a></p>\\n<p>Tel: 416-289-5000 ext. 8014<br />\\nFax: 416-289-5017</p>\\n<p><a href=\\"http://library.centennialcollege.ca\\">http://library.centennialcollege.ca</a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
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
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'93\',
            \'uid\' => \'1\',
            \'filename\' => \'CORe-logo.jpg\',
            \'uri\' => \'public://CORe-logo_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5406\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610469516\',
            \'uuid\' => \'47bead10-867e-4c96-b44b-8c268f4c0bf2\',
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
            \'value\' => "<div>\\r\\n<p>Learn more about Centennial\'s Institutional Repository (CORe) by linking to the heading or subsection below.</p>\\r\\n\\r\\n<p><strong><a href=\\"#1\\">1.&nbsp;About&nbsp;CORe&nbsp;</a></strong><br />\\r\\n<a href=\\"#1.1\\">1.1 What is&nbsp;CORe?&nbsp;</a><br />\\r\\n<a href=\\"#1.2\\">1.2 What can I find in&nbsp;CORe?&nbsp;</a><br />\\r\\n<a href=\\"#1.3\\">1.3&nbsp;Who can contribute to CORe&nbsp;</a><br />\\r\\n<a href=\\"http://1.4\\">1.4&nbsp;How can I submit content to the repository?&nbsp;</a>&nbsp;<br />\\r\\n<a href=\\"http://1.5\\">1.5&nbsp;Why contribute to&nbsp;CORe?&nbsp;</a>&nbsp;<br />\\r\\n<a href=\\"#1.6\\">1.6&nbsp;How is&nbsp;CORe&nbsp;organized?&nbsp;&nbsp;</a><br />\\r\\n<a href=\\"#1.7\\">1.7&nbsp;How will people find work that I deposit in&nbsp;CORe?&nbsp;&nbsp;</a><br />\\r\\n<a href=\\"#1.8\\">1.8&nbsp;Are alternate formats available?&nbsp;&nbsp;</a><br />\\r\\n<a href=\\"#1.9\\">1.9&nbsp;What formats (or file types) can I contribute?&nbsp;&nbsp;</a></p>\\r\\n\\r\\n<p><strong><a href=\\"#2\\">2.&nbsp;Open Access and Creative Commons License&nbsp;</a></strong><br />\\r\\n<a href=\\"#2.1\\">2.1&nbsp;Is&nbsp;CORe&nbsp;Open Access?</a><br />\\r\\n<a href=\\"#2.2\\">2.2&nbsp;What is a Creative Commons&nbsp;<em>CC</em>-BY-NC-ND 4.0 International license?&nbsp;</a><br />\\r\\n<a href=\\"#2.3\\">2.3 What is the Tri-Agency Open Access Policy on Publications?&nbsp;</a><br />\\r\\n<a href=\\"#2.4\\">2.4&nbsp;Do all grant agencies require open access published results?</a>&nbsp;</p>\\r\\n\\r\\n<p><strong><a href=\\"#3\\">3. Copyright, permissions, and re-use.&nbsp;</a></strong><br />\\r\\n<a href=\\"#3.1\\">3.1&nbsp;What is copyright?</a>&nbsp;<br />\\r\\n<a href=\\"#3.2\\">3.2&nbsp;Who owns copyright?&nbsp;&nbsp;</a><br />\\r\\n<a href=\\"#3.3\\">3.3&nbsp;Do I sign over my copyright when I deposit my works in&nbsp;CORe?&nbsp;</a></p>\\r\\n\\r\\n<p><strong><a href=\\"#4\\">4. Authors rights and responsibilities&nbsp;</a></strong><br />\\r\\n<a href=\\"#4.1\\">4.1 What am I agreeing to when I submit my work to&nbsp;CORe?&nbsp;&nbsp;</a><br />\\r\\n<a href=\\"#4.2\\">4.2&nbsp;Can I restrict who views my work after it\'s been deposited into&nbsp;CORe?&nbsp;&nbsp;</a><br />\\r\\n<a href=\\"#4.3\\">4.3 Will I be violating my copyright agreements with my publishers if I contribute published material to&nbsp;CORe?</a>&nbsp;</p>\\r\\n\\r\\n<p><strong><a href=\\"#5\\">5.&nbsp;Deposit and removal of materials</a>&nbsp;</strong><br />\\r\\n<a href=\\"#5.1\\">5.1&nbsp;Can I remove or edit material from&nbsp;CORe?&nbsp;</a><br />\\r\\n<a href=\\"#5.2\\">5.2&nbsp;Can someone from outside Centennial submit materials to&nbsp;CORe?</a>&nbsp;<br />\\r\\n<a href=\\"#5.3\\">5.3 How long will it take before a deposited file&nbsp;appears&nbsp;in&nbsp;CORe?</a>&nbsp;<br />\\r\\n<a href=\\"#5.4\\">5.4&nbsp;What types of files can I deposit in&nbsp;CORe?</a>&nbsp;&nbsp;<br />\\r\\n<a href=\\"#5.5\\">5.5&nbsp;Do I need to do anything to my material before depositing?&nbsp;</a><br />\\r\\n<a href=\\"#5.6\\">5.6 What about research data in&nbsp;CORe?&nbsp;</a><br />\\r\\n<a href=\\"#5.7\\">5.7&nbsp;How large can a file be?&nbsp;</a><br />\\r\\n<a href=\\"#5.8\\">5.8 My work has been added to the repository without my permission. How do I request that it be removed?</a>&nbsp;&nbsp;&nbsp;</p>\\r\\n\\r\\n<p class=\\"rteindent1\\">&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"1\\" name=\\"1\\"></a>1.&nbsp;About&nbsp;</strong><strong>CORe</strong>&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"1.1\\" name=\\"1.1\\"></a>1.1 What is&nbsp;</strong><strong>CORe</strong><strong>?</strong>&nbsp;<br />\\r\\nCentennial College’s Object Repository (CORe) is an Open Access repository that allows us to share, preserve, and find digital items connected to the&nbsp;scholarly&nbsp;activities of the institution. The repository will help us to promote Centennial College’s scholarship and institutional creations.&nbsp;&nbsp;CORe&nbsp;is a collaborative initiative by Ontario College Libraries, managed by&nbsp;<a href=\\"https://www.ocls.ca/\\" target=\\"_blank\\">OCLS</a>.&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"1.2\\" name=\\"1.2\\"></a>1.2 What can I find in&nbsp;</strong><strong>CORe</strong><strong>?</strong>&nbsp;<br />\\r\\nYou can find published and unpublished scholarly material and digital assets such as conference presentations, research articles, newsletters, images, multimedia, and audiovisual materials developed by Centennial faculty&nbsp;and&nbsp;students.&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"1.3\\" name=\\"1.3\\"></a>1.3&nbsp;Who can contribute to C</strong><strong>ORe</strong>&nbsp;<br />\\r\\nCORe&nbsp;is an open access digital repository primarily for materials created by the Centennial faculty and staff. Exemplary student work may also be submitted by the instructor. Submit your work&nbsp;<a href=\\"https://centennial.core.ocls.ca/node/22\\" target=\\"_blank\\">here</a>. Questions can be forwarded to&nbsp;<a href=\\"mailto:library@centennialcollege.ca?subject=Institutional%20Repository%20Inquiry\\" target=\\"_blank\\">library@centennialcollege.ca</a>&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"1.4\\" name=\\"1.4\\"></a>1.4&nbsp;How can I submit content to the repository?</strong>&nbsp;<br />\\r\\nWorks may be submitted through the following forms:&nbsp;</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Submit&nbsp;<a href=\\"http://centennialcollege.libwizard.com/repositoryfaculty\\" target=\\"_blank\\">faculty work</a>&nbsp;</li>\\r\\n\\t<li>Submit&nbsp;<a href=\\"http://centennialcollege.libwizard.com/repositorystudent\\" target=\\"_blank\\">student work</a>&nbsp;</li>\\r\\n\\t<li>Create a&nbsp;<a href=\\"http://centennialcollege.libwizard.com/repositoryprofile\\" target=\\"_blank\\">faculty profile</a>&nbsp;</li>\\r\\n</ul>\\r\\n\\r\\n<p class=\\"rtejustify\\">Questions can be forwarded to&nbsp;&nbsp;<a href=\\"mailto:library@centennialcollege.ca?subject=Institutional%20Repository%20Inquiry\\" target=\\"_blank\\">library@centennialcollege.ca</a>&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"1.5\\" name=\\"1.5\\"></a>1.5&nbsp;Why contribute to&nbsp;</strong><strong>CORe</strong><strong>?</strong>&nbsp;<br />\\r\\n<br />\\r\\n<strong>Discoverable</strong>&nbsp;<br />\\r\\nSearch engines like Google Scholar regularly harvest&nbsp;CORe&nbsp;so your work will be discoverable on the open web.&nbsp;<br />\\r\\n<strong>Stable</strong>&nbsp;<br />\\r\\nCORe&nbsp;creates a persistent URL for every item in the repository. You don’t need to worry about changes to the website and the material will never be withdrawn due to age.&nbsp;<br />\\r\\n<strong>Highlights Centennial&nbsp;work</strong>&nbsp;<br />\\r\\nThe collections in&nbsp;CORe&nbsp;highlight and showcase the intellectual activity of the Centennial community. This is an opportunity for your department, faculty and students to&nbsp;draw attention to the great work being produced and to preserve that work on a stable platform.&nbsp;</p>\\r\\n\\r\\n<p><a id=\\"1.6\\" name=\\"1.6\\"></a><strong>1.6&nbsp;How is&nbsp;</strong><strong>CORe</strong><strong>&nbsp;organized?</strong>&nbsp;<br />\\r\\nThe primary organization of&nbsp;CORe&nbsp;is by Faculty and Department. Services and&nbsp;Centres&nbsp;(e.g. Centre for Organizational Learning and Teaching) also serve as root collections. The collections are&nbsp;<a href=\\"https://centennial.core.ocls.ca/islandora/object/centennial%3Aroot\\" target=\\"_blank\\">browsable</a>&nbsp;but you may prefer to do a&nbsp;<a href=\\"https://centennial.core.ocls.ca/advanced-search\\" target=\\"_blank\\">search</a>&nbsp;by author, title,&nbsp;or topic.&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"1.7\\" name=\\"1.7\\"></a>1.7&nbsp;How will people find work that I deposit in&nbsp;</strong><strong>CORe</strong><strong>?</strong>&nbsp;<br />\\r\\nGoogle and Google Scholar regularly harvest the records in&nbsp;CORe&nbsp;which means that materials deposited in&nbsp;CORe&nbsp;will be easily discoverable through open web search engines. People can also&nbsp;<a href=\\"https://centennial.core.ocls.ca/advanced-search\\" target=\\"_blank\\">search</a>&nbsp;CORe&nbsp;by keyword, title, author, or collection.&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"1.8\\" name=\\"1.8\\"></a>1.8&nbsp;Are alternate formats available?</strong><br />\\r\\nSome&nbsp;of the digital objects in&nbsp;CORe&nbsp;are AODA compliant, while other items might be eligible to be converted into an accessible alternate format upon request. Contact&nbsp;&nbsp;<a href=\\"mailto:library@centennialcollege.ca?subject=Institutional%20Repository%20Inquiry\\" target=\\"_blank\\">library@centennialcollege.ca</a>&nbsp;if you have a specific request.&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"1.9\\" name=\\"1.9\\"></a>1.9&nbsp;What formats (or file types) can I contribute?</strong>&nbsp;</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Documents – PDF (word documents and ppt will be converted to PDF),&nbsp;ePub&nbsp;</li>\\r\\n\\t<li>​Images - JPEG, PNG, TIFF and GIF images.&nbsp;</li>\\r\\n\\t<li>Audio - WAV and MP3&nbsp;&nbsp;</li>\\r\\n\\t<li>Video – WAV and MP4&nbsp;</li>\\r\\n</ul>\\r\\n\\r\\n<p class=\\"rteright\\"><a href=\\"#top\\">top</a></p>\\r\\n\\r\\n<p><strong><a id=\\"2\\" name=\\"2\\"></a>2.&nbsp;Open Access and Creative Commons License</strong>&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"2.1\\" name=\\"2.1\\"></a>2.1&nbsp;Is&nbsp;</strong><strong>CORe</strong><strong>&nbsp;Open Access?</strong>&nbsp;<br />\\r\\nYes,&nbsp;CORe&nbsp;is an Open Access repository which means that the digital content is freely available without barriers to access.&nbsp;All items&nbsp;submitted to&nbsp;CORe&nbsp;will have a&nbsp;<a href=\\"https://creativecommons.org/licenses/by-nc-nd/4.0/\\" target=\\"_blank\\">Creative Commons CC-BY-NC-ND 4.0</a>&nbsp;International license unless otherwise requested.&nbsp;&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"2.2\\" name=\\"2.2\\"></a>2.2&nbsp;What is a Creative Commons&nbsp;<em>CC</em>-BY-NC-ND 4.0 International license?</strong>&nbsp;<br />\\r\\n&nbsp;The&nbsp;<a href=\\"https://creativecommons.org/licenses/by-nc-nd/4.0/\\" target=\\"_blank\\">CC-BY-NC-ND 4.0</a>&nbsp;license is the most restrictive of the Creative Commons licenses. It allows for the reuse and distribution of the works under the following conditions:&nbsp;</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>proper attribution is given (BY),</li>\\r\\n\\t<li>&nbsp;no derivatives (ND) are made in the form of remixes or transformations,&nbsp;&nbsp;</li>\\r\\n\\t<li>use of the work is for non-commercial purposes (NC).&nbsp;&nbsp;</li>\\r\\n</ul>\\r\\n\\r\\n<p>This&nbsp;license is automatically applied to items submitted to&nbsp;CORe&nbsp;unless authors request otherwise.&nbsp;You can examine other license options through&nbsp;<a href=\\"https://creativecommons.org/share-your-work/licensing-types-examples/\\" target=\\"_blank\\">Creative Commons</a>.&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"2.3\\" name=\\"2.3\\"></a>2.3 What is the Tri-Agency Open Access Policy on Publications?</strong>&nbsp;<br />\\r\\nThe&nbsp;<em>Tri-Agency Open Access Policy on Publications</em>&nbsp;requires that peer-reviewed journal publications resulting from Tri-Agency (NSERC, SSHRC or CIHR) grants be freely accessible online within 12 months of publication.&nbsp;</p>\\r\\n\\r\\n<p>Grant recipients may comply with the policy through one of the following routes:&nbsp;</p>\\r\\n\\r\\n<ol>\\r\\n\\t<li>Grant recipients archive the final peer-reviewed full-text manuscript in an online repository where it will be freely accessible within 12 months (e.g., institutional repository or discipline-based repository). It is the responsibility of the grant recipient to determine which publishers allow authors to retain copyright and/or allow authors to archive journal publications in accordance with funding agency policies.&nbsp;</li>\\r\\n\\t<li>Grant recipients can publish in a journal that offers open access or that offers open access on its website within 12 months.”</li>\\r\\n</ol>\\r\\n\\r\\n<p>Source: (<a href=\\"http://www.science.gc.ca/eic/site/063.nsf/eng/h_42701EA6.html#5\\" target=\\"_blank\\">Frequently Asked Questions</a>- Government of Canada)&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"2.4\\" name=\\"2.4\\"></a>2.4&nbsp;Do all grant agencies require open access published results?</strong>&nbsp;<br />\\r\\nNot all granting agencies mandate that published results are available in an open access&nbsp;forum&nbsp;but it is happening more and more often. A database of granting agencies with the open access mandate is available through the&nbsp;<a href=\\"http://roarmap.eprints.org/\\" target=\\"_blank\\">Registry of Open Access Repository Mandates and Policies (ROARMAP)</a>.&nbsp;</p>\\r\\n\\r\\n<p class=\\"rteright\\"><a href=\\"#top\\">top</a></p>\\r\\n\\r\\n<p><strong><a id=\\"3\\" name=\\"3\\"></a>3. Copyright, permissions, and re-use.</strong>&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"3.1\\" name=\\"3.1\\"></a>3.1&nbsp;What is copyright?</strong>&nbsp;<br />\\r\\nAccording to the&nbsp;<a href=\\"http://www.cipo.ic.gc.ca/eic/site/cipointernet-internetopic.nsf/eng/h_wr00003.html\\" target=\\"_blank\\">Canadian Intellectual Property Office</a>,&nbsp;copyright means \'the right to copy\'. Only the owner of copyright&nbsp;(typically&nbsp;the creator of the work&nbsp;- but not always),&nbsp;can&nbsp;produce or reproduce the work in question or to permit anyone else to do so.&nbsp;</p>\\r\\n\\r\\n<p>For more information about copyright and terms of use visit Centennial College Libraries&nbsp;<a href=\\"https://libraryguides.centennialcollege.ca/c.php?g=592384&amp;p=4096349\\" target=\\"_blank\\">Copyright Guide</a>.&nbsp;</p>\\r\\n\\r\\n<p>Please refer your copyright questions to&nbsp;copyright@centennialcollege.ca&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"3.2\\" name=\\"3.2\\"></a>3.2&nbsp;Who owns copyright?</strong>&nbsp;<br />\\r\\nIn general, the author or creator of an original&nbsp;work owns the copyright.&nbsp;The&nbsp;<a href=\\"http://www.cipo.ic.gc.ca/eic/site/cipointernet-internetopic.nsf/eng/h_wr00003.html?OpenDocument\\" target=\\"_blank\\">Canadian Intellectual Property Office (Industry Canada)</a>&nbsp;outline&nbsp;exceptions to this rule.&nbsp;</p>\\r\\n\\r\\n<p>Please refer to the&nbsp;<a href=\\"https://centennialcollege.widencdn.net/embed/download/d6a828e28a2eea06da8de63600a3aff1\\" target=\\"_blank\\">Centennial’s Intellectual Property Policy</a>&nbsp;site for more details&nbsp;about copyright for works produced while employed at Centennial.&nbsp;</p>\\r\\n\\r\\n<p>Re-use rights of materials in&nbsp;CORe&nbsp;are determined by:&nbsp;</p>\\r\\n\\r\\n<ol>\\r\\n\\t<li>&nbsp;Canadian copyright legislation&nbsp;</li>\\r\\n\\t<li>&nbsp;<a href=\\"http://creativecommons.org/\\" target=\\"_blank\\">Creative Commons licenses</a>&nbsp;if present&nbsp;</li>\\r\\n</ol>\\r\\n\\r\\n<p>Learn more at Centennial College Libraries&nbsp;<a href=\\"https://libraryguides.centennialcollege.ca/c.php?g=592384&amp;p=4096349\\" target=\\"_blank\\">Copyright Guide</a>. Please refer your copyright questions to&nbsp;<a href=\\"mailto:copyright@centennialcollege.ca\\" target=\\"_blank\\">copyright@centennialcollege.ca</a>&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"3.3\\" name=\\"3.3\\"></a>3.3&nbsp;Do I sign over my copyright when I deposit my works in&nbsp;</strong><strong>CORe</strong><strong>?</strong>&nbsp;<br />\\r\\nNo, the copyright status of the work remains the same.&nbsp;</p>\\r\\n\\r\\n<p>You merely grant&nbsp;CORe&nbsp;your permission&nbsp;to:&nbsp;</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>make your work freely available to&nbsp;CORe\'s&nbsp;users&nbsp;</li>\\r\\n\\t<li>preserve your work&nbsp;</li>\\r\\n</ul>\\r\\n\\r\\n<p>Learn more at Centennial College Libraries&nbsp;<a href=\\"https://libraryguides.centennialcollege.ca/c.php?g=592384&amp;p=4096349\\" target=\\"_blank\\">Copyright Guide</a>. Please refer your copyright questions to&nbsp;<a href=\\"mailto:copyright@centennialcollege.ca\\" target=\\"_blank\\">copyright@centennialcollege.ca</a>&nbsp;</p>\\r\\n\\r\\n<p class=\\"rteright\\"><a href=\\"#top\\">top</a></p>\\r\\n</div>\\r\\n\\r\\n<p><strong><a id=\\"4\\" name=\\"4\\"></a>4. Authors rights and responsibilities</strong>&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"4.1\\" name=\\"4.1\\"></a>4.1 What am I agreeing to when I submit my work to&nbsp;</strong><strong>CORe</strong><strong>?</strong>&nbsp;</p>\\r\\n\\r\\n<p><strong>Terms of Access and Use</strong>&nbsp;<br />\\r\\nBy submitting work to&nbsp;CORe&nbsp;you agree to the following:&nbsp;</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>If required, Centennial has my permission to photograph and make a digital representation of my Work(s) for upload to&nbsp;CORe; and&nbsp;</li>\\r\\n\\t<li>Unless I request otherwise, Centennial will make a digital copy of the Work(s) available on&nbsp;CORe&nbsp;for the public to view and copy for non-commercial purposes only, without prior permission or charge, provided that the Work(s) are not altered in any way and are properly acknowledged and cited by means of a&nbsp;<a href=\\"https://creativecommons.org/licenses/by-nc-nd/4.0/\\" target=\\"_blank\\">Creative Commons CC-BY-NC-ND 4.0 International license</a>&nbsp;; and&nbsp;</li>\\r\\n\\t<li>Unless I request otherwise, Centennial will make my work available immediately; and&nbsp;</li>\\r\\n\\t<li>Because materials in&nbsp;CORe&nbsp;are openly available to anyone with Internet access, Centennial will ensure the license terms and appropriate citation information are prominently displayed but is not responsible for misuse by third parties.&nbsp;</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong><a id=\\"4.2\\" name=\\"4.2\\"></a>4.2&nbsp;Can I restrict who views my work after it\'s been deposited into&nbsp;</strong><strong>CORe</strong><strong>?</strong>&nbsp;<br />\\r\\nCORe&nbsp;is an Open Access repository and does not currently have any restricted collections.&nbsp;&nbsp;</p>\\r\\n\\r\\n<p>CORe&nbsp;is able to create embargo periods on work to meet&nbsp;publishers&nbsp;conditions&nbsp;of no open access for 12 months&nbsp;after publication.&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"4.3\\" name=\\"4.3\\"></a>4.3 Will I be violating my copyright agreements with my publishers if I contribute published material to&nbsp;</strong><strong>CORe</strong><strong>?</strong>&nbsp;<br />\\r\\nThis will depend on the publication agreement you signed with your publisher. Please check your copy of the agreement.&nbsp;</p>\\r\\n\\r\\n<p>You can also check the&nbsp;<a href=\\"http://www.sherpa.ac.uk/romeo.php\\" target=\\"_blank\\">SHERPA/RoMEO website</a>&nbsp;for publishers\' copyright and self-archiving policies to find permissions normally given to the author as part of each publisher\'s copyright transfer agreement. You can also write directly to the publisher for permission to contribute your article to&nbsp;cIRcle.&nbsp;</p>\\r\\n\\r\\n<p>For help with publishers\' agreements and permissions, contact&nbsp;<a href=\\"mailto:copyright@centennialcollege.ca\\" target=\\"_blank\\">copyright@centennialcollege.ca</a>&nbsp;&nbsp;</p>\\r\\n\\r\\n<p class=\\"rteright\\"><a href=\\"http://top\\">top</a></p>\\r\\n\\r\\n<p><strong><a id=\\"5\\" name=\\"5\\"></a>5.&nbsp;Deposit and removal of materials</strong>&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"5.1\\" name=\\"5.1\\"></a>5.1&nbsp;Can I remove or edit material from&nbsp;</strong><strong>CORe</strong><strong>?</strong>&nbsp;<br />\\r\\nCORe&nbsp;provides a permanent archive for Centennial materials and items may not normally be removed. They may, however, be withdrawn for specific reasons such as copyright violation.&nbsp;</p>\\r\\n\\r\\n<p>Withdrawn items are not deleted per&nbsp;se, but&nbsp;are removed from public view. Withdrawn items\' identifiers/URLs are retained indefinitely, although no longer accessible to the public.&nbsp;</p>\\r\\n\\r\\n<p>Changes to deposited items are not permitted.&nbsp;If necessary, an updated version may be deposited, however, this will likely be a new record.&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"5.2\\" name=\\"5.2\\"></a>5.2&nbsp;Can someone from outside Centennial submit materials to&nbsp;</strong><strong>CORe</strong><strong>?</strong>&nbsp;<br />\\r\\nNo. Items may only be deposited by Centennial&nbsp;members, or&nbsp;Centennial’s&nbsp;designated affiliates, agents, and partners.&nbsp;</p>\\r\\n\\r\\n<p>A work that has been co-authored by Centennial and non-Centennial authors may be deposited by the Centennial author(s) provided any necessary copyright permission has been obtained.&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"5.3\\" name=\\"5.3\\"></a>5.3 How long will it take before a deposited file&nbsp;appears&nbsp;in&nbsp;</strong><strong>CORe</strong><strong>?</strong>&nbsp;<br />\\r\\nCORe&nbsp;staff tries to make material accessible within three days of submission.&nbsp;Delays may occur&nbsp;if information is missing or if the format is not compatible.&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"5.4\\" name=\\"5.4\\"></a>5.4&nbsp;What types of files can I deposit in&nbsp;</strong><strong>CORe</strong><strong>?</strong>&nbsp;<br />\\r\\nA variety of materials can be stored and displayed in&nbsp;CORe. The file size limit for&nbsp;an individual file in&nbsp;CORe&nbsp;is 2GB.&nbsp;</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Documents – PDF (word documents and ppt will be converted to PDF),&nbsp;ePub&nbsp;&nbsp;</li>\\r\\n\\t<li>Images - JPEG, PNG, TIFF and GIF images.</li>\\r\\n\\t<li>Audio - WAV and MP3&nbsp;&nbsp;</li>\\r\\n\\t<li>Video – WAV and MP4&nbsp;</li>\\r\\n</ul>\\r\\n\\r\\n<p><strong><a id=\\"5.5\\" name=\\"5.5\\"></a>5.5&nbsp;Do I need to do anything to my material before depositing?</strong>&nbsp;<br />\\r\\nMake sure that private information, such as student number,&nbsp;or home address,&nbsp;is removed from the material that is being submitted.&nbsp;&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"5.6\\" name=\\"5.6\\"></a>5.6 What about research data in&nbsp;</strong><strong>CORe</strong><strong>?</strong>&nbsp;<br />\\r\\nCORe&nbsp;may not be the best option for&nbsp;storing and managing data. There are dedicated repositories specifically for data that may be more appropriate and will make your data more discoverable. Please contact Joanna Blair&nbsp;<a href=\\"mailto:jblair@centennialcollege.ca\\" target=\\"_blank\\">jblair@centennialcollege.ca</a>&nbsp;for recommendations on data storage.&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"5.7\\" name=\\"5.7\\"></a>5.7&nbsp;How large can a file be?</strong>&nbsp;<br />\\r\\nThe file size limit for&nbsp;an individual item in&nbsp;CORe&nbsp;is 2GB per items.&nbsp;&nbsp;</p>\\r\\n\\r\\n<p>Please be aware that the submission forms will only take files up to 20MB. If your file is larger than this, please contact&nbsp;<a href=\\"mailto:jblair@centennialcollege.ca\\" target=\\"_blank\\">jblair@centennialcollege.ca</a>&nbsp;or contact the team at&nbsp;<a href=\\"mailto:library@centennialcollege.ca\\" target=\\"_blank\\">library@centennialcollege.ca</a>&nbsp;to make alternate arrangements.&nbsp;</p>\\r\\n\\r\\n<p><strong><a id=\\"5.8\\" name=\\"5.8\\"></a>5.8 My work has been added to the repository without my permission. How do I request that it be removed?</strong><br />\\r\\nNote, the repository does its best to meet copyright compliance guidelines that include contacting the copyright holder for permissions to ingest in the repository. If your work has been added by error, please contact&nbsp;<a href=\\"mailto:library@centennialcollege.ca\\" target=\\"_blank\\">library@centennialcollege.ca</a>&nbsp;</p>\\r\\n\\r\\n<p class=\\"rteright\\"><a href=\\"#top\\">top</a></p>\\r\\n\\r\\n<p>Parts of the FAQs are adapted from:&nbsp;</p>\\r\\n\\r\\n<p>UBC Libraries. (n.d.)&nbsp;<em>cIRcle</em><em>&nbsp;FAQs.</em>&nbsp;Retrieved from&nbsp;<a href=\\"https://circle.ubc.ca/about/faq/\\" target=\\"_blank\\">https://circle.ubc.ca/about/faq/</a>&nbsp;</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Learn more about Centennial\'s Institutional Repository (CORe) by linking to the heading or subsection below.</p>\\n<p><strong><a href=\\"#1\\">1. About CORe </a></strong><br /><a href=\\"#1.1\\">1.1 What is CORe? </a><br /><a href=\\"#1.2\\">1.2 What can I find in CORe? </a><br /><a href=\\"#1.3\\">1.3 Who can contribute to CORe </a><br /><a href=\\"http://1.4\\">1.4 How can I submit content to the repository? </a> <br /><a href=\\"http://1.5\\">1.5 Why contribute to CORe? </a> <br /><a href=\\"#1.6\\">1.6 How is CORe organized?  </a><br /><a href=\\"#1.7\\">1.7 How will people find work that I deposit in CORe?  </a><br /><a href=\\"#1.8\\">1.8 Are alternate formats available?  </a><br /><a href=\\"#1.9\\">1.9 What formats (or file types) can I contribute?  </a></p>\\n<p><strong><a href=\\"#2\\">2. Open Access and Creative Commons License </a></strong><br /><a href=\\"#2.1\\">2.1 Is CORe Open Access?</a><br /><a href=\\"#2.2\\">2.2 What is a Creative Commons <em>CC</em>-BY-NC-ND 4.0 International license? </a><br /><a href=\\"#2.3\\">2.3 What is the Tri-Agency Open Access Policy on Publications? </a><br /><a href=\\"#2.4\\">2.4 Do all grant agencies require open access published results?</a> </p>\\n<p><strong><a href=\\"#3\\">3. Copyright, permissions, and re-use. </a></strong><br /><a href=\\"#3.1\\">3.1 What is copyright?</a> <br /><a href=\\"#3.2\\">3.2 Who owns copyright?  </a><br /><a href=\\"#3.3\\">3.3 Do I sign over my copyright when I deposit my works in CORe? </a></p>\\n<p><strong><a href=\\"#4\\">4. Authors rights and responsibilities </a></strong><br /><a href=\\"#4.1\\">4.1 What am I agreeing to when I submit my work to CORe?  </a><br /><a href=\\"#4.2\\">4.2 Can I restrict who views my work after it\'s been deposited into CORe?  </a><br /><a href=\\"#4.3\\">4.3 Will I be violating my copyright agreements with my publishers if I contribute published material to CORe?</a> </p>\\n<p><strong><a href=\\"#5\\">5. Deposit and removal of materials</a> </strong><br /><a href=\\"#5.1\\">5.1 Can I remove or edit material from CORe? </a><br /><a href=\\"#5.2\\">5.2 Can someone from outside Centennial submit materials to CORe?</a> <br /><a href=\\"#5.3\\">5.3 How long will it take before a deposited file appears in CORe?</a> <br /><a href=\\"#5.4\\">5.4 What types of files can I deposit in CORe?</a>  <br /><a href=\\"#5.5\\">5.5 Do I need to do anything to my material before depositing? </a><br /><a href=\\"#5.6\\">5.6 What about research data in CORe? </a><br /><a href=\\"#5.7\\">5.7 How large can a file be? </a><br /><a href=\\"#5.8\\">5.8 My work has been added to the repository without my permission. How do I request that it be removed?</a>   </p>\\n<p> </p>\\n<p><strong><a id=\\"1\\" name=\\"1\\"></a>1. About </strong><strong>CORe</strong> </p>\\n<p><strong><a id=\\"1.1\\" name=\\"1.1\\"></a>1.1 What is </strong><strong>CORe</strong><strong>?</strong> <br />\\nCentennial College’s Object Repository (CORe) is an Open Access repository that allows us to share, preserve, and find digital items connected to the scholarly activities of the institution. The repository will help us to promote Centennial College’s scholarship and institutional creations.  CORe is a collaborative initiative by Ontario College Libraries, managed by <a href=\\"https://www.ocls.ca/\\" target=\\"_blank\\">OCLS</a>. </p>\\n<p><strong><a id=\\"1.2\\" name=\\"1.2\\"></a>1.2 What can I find in </strong><strong>CORe</strong><strong>?</strong> <br />\\nYou can find published and unpublished scholarly material and digital assets such as conference presentations, research articles, newsletters, images, multimedia, and audiovisual materials developed by Centennial faculty and students. </p>\\n<p><strong><a id=\\"1.3\\" name=\\"1.3\\"></a>1.3 Who can contribute to C</strong><strong>ORe</strong> <br />\\nCORe is an open access digital repository primarily for materials created by the Centennial faculty and staff. Exemplary student work may also be submitted by the instructor. Submit your work <a href=\\"https://centennial.core.ocls.ca/node/22\\" target=\\"_blank\\">here</a>. Questions can be forwarded to <a href=\\"mailto:library@centennialcollege.ca?subject=Institutional%20Repository%20Inquiry\\" target=\\"_blank\\">library@centennialcollege.ca</a> </p>\\n<p><strong><a id=\\"1.4\\" name=\\"1.4\\"></a>1.4 How can I submit content to the repository?</strong> <br />\\nWorks may be submitted through the following forms: </p>\\n<ul><li>Submit <a href=\\"http://centennialcollege.libwizard.com/repositoryfaculty\\" target=\\"_blank\\">faculty work</a> </li>\\n<li>Submit <a href=\\"http://centennialcollege.libwizard.com/repositorystudent\\" target=\\"_blank\\">student work</a> </li>\\n<li>Create a <a href=\\"http://centennialcollege.libwizard.com/repositoryprofile\\" target=\\"_blank\\">faculty profile</a> </li>\\n</ul><p>Questions can be forwarded to  <a href=\\"mailto:library@centennialcollege.ca?subject=Institutional%20Repository%20Inquiry\\" target=\\"_blank\\">library@centennialcollege.ca</a> </p>\\n<p><strong><a id=\\"1.5\\" name=\\"1.5\\"></a>1.5 Why contribute to </strong><strong>CORe</strong><strong>?</strong> </p>\\n<p><strong>Discoverable</strong> <br />\\nSearch engines like Google Scholar regularly harvest CORe so your work will be discoverable on the open web. <br /><strong>Stable</strong> <br />\\nCORe creates a persistent URL for every item in the repository. You don’t need to worry about changes to the website and the material will never be withdrawn due to age. <br /><strong>Highlights Centennial work</strong> <br />\\nThe collections in CORe highlight and showcase the intellectual activity of the Centennial community. This is an opportunity for your department, faculty and students to draw attention to the great work being produced and to preserve that work on a stable platform. </p>\\n<p><a id=\\"1.6\\" name=\\"1.6\\"></a><strong>1.6 How is </strong><strong>CORe</strong><strong> organized?</strong> <br />\\nThe primary organization of CORe is by Faculty and Department. Services and Centres (e.g. Centre for Organizational Learning and Teaching) also serve as root collections. The collections are <a href=\\"https://centennial.core.ocls.ca/islandora/object/centennial%3Aroot\\" target=\\"_blank\\">browsable</a> but you may prefer to do a <a href=\\"https://centennial.core.ocls.ca/advanced-search\\" target=\\"_blank\\">search</a> by author, title, or topic. </p>\\n<p><strong><a id=\\"1.7\\" name=\\"1.7\\"></a>1.7 How will people find work that I deposit in </strong><strong>CORe</strong><strong>?</strong> <br />\\nGoogle and Google Scholar regularly harvest the records in CORe which means that materials deposited in CORe will be easily discoverable through open web search engines. People can also <a href=\\"https://centennial.core.ocls.ca/advanced-search\\" target=\\"_blank\\">search</a> CORe by keyword, title, author, or collection. </p>\\n<p><strong><a id=\\"1.8\\" name=\\"1.8\\"></a>1.8 Are alternate formats available?</strong><br />\\nSome of the digital objects in CORe are AODA compliant, while other items might be eligible to be converted into an accessible alternate format upon request. Contact  <a href=\\"mailto:library@centennialcollege.ca?subject=Institutional%20Repository%20Inquiry\\" target=\\"_blank\\">library@centennialcollege.ca</a> if you have a specific request. </p>\\n<p><strong><a id=\\"1.9\\" name=\\"1.9\\"></a>1.9 What formats (or file types) can I contribute?</strong> </p>\\n<ul><li>Documents – PDF (word documents and ppt will be converted to PDF), ePub </li>\\n<li>​Images - JPEG, PNG, TIFF and GIF images. </li>\\n<li>Audio - WAV and MP3  </li>\\n<li>Video – WAV and MP4 </li>\\n</ul><p><a href=\\"#top\\">top</a></p>\\n<p><strong><a id=\\"2\\" name=\\"2\\"></a>2. Open Access and Creative Commons License</strong> </p>\\n<p><strong><a id=\\"2.1\\" name=\\"2.1\\"></a>2.1 Is </strong><strong>CORe</strong><strong> Open Access?</strong> <br />\\nYes, CORe is an Open Access repository which means that the digital content is freely available without barriers to access. All items submitted to CORe will have a <a href=\\"https://creativecommons.org/licenses/by-nc-nd/4.0/\\" target=\\"_blank\\">Creative Commons CC-BY-NC-ND 4.0</a> International license unless otherwise requested.  </p>\\n<p><strong><a id=\\"2.2\\" name=\\"2.2\\"></a>2.2 What is a Creative Commons <em>CC</em>-BY-NC-ND 4.0 International license?</strong> <br />\\n The <a href=\\"https://creativecommons.org/licenses/by-nc-nd/4.0/\\" target=\\"_blank\\">CC-BY-NC-ND 4.0</a> license is the most restrictive of the Creative Commons licenses. It allows for the reuse and distribution of the works under the following conditions: </p>\\n<ul><li>proper attribution is given (BY),</li>\\n<li> no derivatives (ND) are made in the form of remixes or transformations,  </li>\\n<li>use of the work is for non-commercial purposes (NC).  </li>\\n</ul><p>This license is automatically applied to items submitted to CORe unless authors request otherwise. You can examine other license options through <a href=\\"https://creativecommons.org/share-your-work/licensing-types-examples/\\" target=\\"_blank\\">Creative Commons</a>. </p>\\n<p><strong><a id=\\"2.3\\" name=\\"2.3\\"></a>2.3 What is the Tri-Agency Open Access Policy on Publications?</strong> <br />\\nThe <em>Tri-Agency Open Access Policy on Publications</em> requires that peer-reviewed journal publications resulting from Tri-Agency (NSERC, SSHRC or CIHR) grants be freely accessible online within 12 months of publication. </p>\\n<p>Grant recipients may comply with the policy through one of the following routes: </p>\\n<ol><li>Grant recipients archive the final peer-reviewed full-text manuscript in an online repository where it will be freely accessible within 12 months (e.g., institutional repository or discipline-based repository). It is the responsibility of the grant recipient to determine which publishers allow authors to retain copyright and/or allow authors to archive journal publications in accordance with funding agency policies. </li>\\n<li>Grant recipients can publish in a journal that offers open access or that offers open access on its website within 12 months.”</li>\\n</ol><p>Source: (<a href=\\"http://www.science.gc.ca/eic/site/063.nsf/eng/h_42701EA6.html#5\\" target=\\"_blank\\">Frequently Asked Questions</a>- Government of Canada) </p>\\n<p><strong><a id=\\"2.4\\" name=\\"2.4\\"></a>2.4 Do all grant agencies require open access published results?</strong> <br />\\nNot all granting agencies mandate that published results are available in an open access forum but it is happening more and more often. A database of granting agencies with the open access mandate is available through the <a href=\\"http://roarmap.eprints.org/\\" target=\\"_blank\\">Registry of Open Access Repository Mandates and Policies (ROARMAP)</a>. </p>\\n<p><a href=\\"#top\\">top</a></p>\\n<p><strong><a id=\\"3\\" name=\\"3\\"></a>3. Copyright, permissions, and re-use.</strong> </p>\\n<p><strong><a id=\\"3.1\\" name=\\"3.1\\"></a>3.1 What is copyright?</strong> <br />\\nAccording to the <a href=\\"http://www.cipo.ic.gc.ca/eic/site/cipointernet-internetopic.nsf/eng/h_wr00003.html\\" target=\\"_blank\\">Canadian Intellectual Property Office</a>, copyright means \'the right to copy\'. Only the owner of copyright (typically the creator of the work - but not always), can produce or reproduce the work in question or to permit anyone else to do so. </p>\\n<p>For more information about copyright and terms of use visit Centennial College Libraries <a href=\\"https://libraryguides.centennialcollege.ca/c.php?g=592384&amp;p=4096349\\" target=\\"_blank\\">Copyright Guide</a>. </p>\\n<p>Please refer your copyright questions to <a href=\\"mailto:copyright@centennialcollege.ca\\">copyright@centennialcollege.ca</a> </p>\\n<p><strong><a id=\\"3.2\\" name=\\"3.2\\"></a>3.2 Who owns copyright?</strong> <br />\\nIn general, the author or creator of an original work owns the copyright. The <a href=\\"http://www.cipo.ic.gc.ca/eic/site/cipointernet-internetopic.nsf/eng/h_wr00003.html?OpenDocument\\" target=\\"_blank\\">Canadian Intellectual Property Office (Industry Canada)</a> outline exceptions to this rule. </p>\\n<p>Please refer to the <a href=\\"https://centennialcollege.widencdn.net/embed/download/d6a828e28a2eea06da8de63600a3aff1\\" target=\\"_blank\\">Centennial’s Intellectual Property Policy</a> site for more details about copyright for works produced while employed at Centennial. </p>\\n<p>Re-use rights of materials in CORe are determined by: </p>\\n<ol><li> Canadian copyright legislation </li>\\n<li> <a href=\\"http://creativecommons.org/\\" target=\\"_blank\\">Creative Commons licenses</a> if present </li>\\n</ol><p>Learn more at Centennial College Libraries <a href=\\"https://libraryguides.centennialcollege.ca/c.php?g=592384&amp;p=4096349\\" target=\\"_blank\\">Copyright Guide</a>. Please refer your copyright questions to <a href=\\"mailto:copyright@centennialcollege.ca\\" target=\\"_blank\\">copyright@centennialcollege.ca</a> </p>\\n<p><strong><a id=\\"3.3\\" name=\\"3.3\\"></a>3.3 Do I sign over my copyright when I deposit my works in </strong><strong>CORe</strong><strong>?</strong> <br />\\nNo, the copyright status of the work remains the same. </p>\\n<p>You merely grant CORe your permission to: </p>\\n<ul><li>make your work freely available to CORe\'s users </li>\\n<li>preserve your work </li>\\n</ul><p>Learn more at Centennial College Libraries <a href=\\"https://libraryguides.centennialcollege.ca/c.php?g=592384&amp;p=4096349\\" target=\\"_blank\\">Copyright Guide</a>. Please refer your copyright questions to <a href=\\"mailto:copyright@centennialcollege.ca\\" target=\\"_blank\\">copyright@centennialcollege.ca</a> </p>\\n<p><a href=\\"#top\\">top</a></p>\\n<p><strong><a id=\\"4\\" name=\\"4\\"></a>4. Authors rights and responsibilities</strong> </p>\\n<p><strong><a id=\\"4.1\\" name=\\"4.1\\"></a>4.1 What am I agreeing to when I submit my work to </strong><strong>CORe</strong><strong>?</strong> </p>\\n<p><strong>Terms of Access and Use</strong> <br />\\nBy submitting work to CORe you agree to the following: </p>\\n<ul><li>If required, Centennial has my permission to photograph and make a digital representation of my Work(s) for upload to CORe; and </li>\\n<li>Unless I request otherwise, Centennial will make a digital copy of the Work(s) available on CORe for the public to view and copy for non-commercial purposes only, without prior permission or charge, provided that the Work(s) are not altered in any way and are properly acknowledged and cited by means of a <a href=\\"https://creativecommons.org/licenses/by-nc-nd/4.0/\\" target=\\"_blank\\">Creative Commons CC-BY-NC-ND 4.0 International license</a> ; and </li>\\n<li>Unless I request otherwise, Centennial will make my work available immediately; and </li>\\n<li>Because materials in CORe are openly available to anyone with Internet access, Centennial will ensure the license terms and appropriate citation information are prominently displayed but is not responsible for misuse by third parties. </li>\\n</ul><p><strong><a id=\\"4.2\\" name=\\"4.2\\"></a>4.2 Can I restrict who views my work after it\'s been deposited into </strong><strong>CORe</strong><strong>?</strong> <br />\\nCORe is an Open Access repository and does not currently have any restricted collections.  </p>\\n<p>CORe is able to create embargo periods on work to meet publishers conditions of no open access for 12 months after publication. </p>\\n<p><strong><a id=\\"4.3\\" name=\\"4.3\\"></a>4.3 Will I be violating my copyright agreements with my publishers if I contribute published material to </strong><strong>CORe</strong><strong>?</strong> <br />\\nThis will depend on the publication agreement you signed with your publisher. Please check your copy of the agreement. </p>\\n<p>You can also check the <a href=\\"http://www.sherpa.ac.uk/romeo.php\\" target=\\"_blank\\">SHERPA/RoMEO website</a> for publishers\' copyright and self-archiving policies to find permissions normally given to the author as part of each publisher\'s copyright transfer agreement. You can also write directly to the publisher for permission to contribute your article to cIRcle. </p>\\n<p>For help with publishers\' agreements and permissions, contact <a href=\\"mailto:copyright@centennialcollege.ca\\" target=\\"_blank\\">copyright@centennialcollege.ca</a>  </p>\\n<p><a href=\\"http://top\\">top</a></p>\\n<p><strong><a id=\\"5\\" name=\\"5\\"></a>5. Deposit and removal of materials</strong> </p>\\n<p><strong><a id=\\"5.1\\" name=\\"5.1\\"></a>5.1 Can I remove or edit material from </strong><strong>CORe</strong><strong>?</strong> <br />\\nCORe provides a permanent archive for Centennial materials and items may not normally be removed. They may, however, be withdrawn for specific reasons such as copyright violation. </p>\\n<p>Withdrawn items are not deleted per se, but are removed from public view. Withdrawn items\' identifiers/URLs are retained indefinitely, although no longer accessible to the public. </p>\\n<p>Changes to deposited items are not permitted. If necessary, an updated version may be deposited, however, this will likely be a new record. </p>\\n<p><strong><a id=\\"5.2\\" name=\\"5.2\\"></a>5.2 Can someone from outside Centennial submit materials to </strong><strong>CORe</strong><strong>?</strong> <br />\\nNo. Items may only be deposited by Centennial members, or Centennial’s designated affiliates, agents, and partners. </p>\\n<p>A work that has been co-authored by Centennial and non-Centennial authors may be deposited by the Centennial author(s) provided any necessary copyright permission has been obtained. </p>\\n<p><strong><a id=\\"5.3\\" name=\\"5.3\\"></a>5.3 How long will it take before a deposited file appears in </strong><strong>CORe</strong><strong>?</strong> <br />\\nCORe staff tries to make material accessible within three days of submission. Delays may occur if information is missing or if the format is not compatible. </p>\\n<p><strong><a id=\\"5.4\\" name=\\"5.4\\"></a>5.4 What types of files can I deposit in </strong><strong>CORe</strong><strong>?</strong> <br />\\nA variety of materials can be stored and displayed in CORe. The file size limit for an individual file in CORe is 2GB. </p>\\n<ul><li>Documents – PDF (word documents and ppt will be converted to PDF), ePub  </li>\\n<li>Images - JPEG, PNG, TIFF and GIF images.</li>\\n<li>Audio - WAV and MP3  </li>\\n<li>Video – WAV and MP4 </li>\\n</ul><p><strong><a id=\\"5.5\\" name=\\"5.5\\"></a>5.5 Do I need to do anything to my material before depositing?</strong> <br />\\nMake sure that private information, such as student number, or home address, is removed from the material that is being submitted.  </p>\\n<p><strong><a id=\\"5.6\\" name=\\"5.6\\"></a>5.6 What about research data in </strong><strong>CORe</strong><strong>?</strong> <br />\\nCORe may not be the best option for storing and managing data. There are dedicated repositories specifically for data that may be more appropriate and will make your data more discoverable. Please contact Joanna Blair <a href=\\"mailto:jblair@centennialcollege.ca\\" target=\\"_blank\\">jblair@centennialcollege.ca</a> for recommendations on data storage. </p>\\n<p><strong><a id=\\"5.7\\" name=\\"5.7\\"></a>5.7 How large can a file be?</strong> <br />\\nThe file size limit for an individual item in CORe is 2GB per items.  </p>\\n<p>Please be aware that the submission forms will only take files up to 20MB. If your file is larger than this, please contact <a href=\\"mailto:jblair@centennialcollege.ca\\" target=\\"_blank\\">jblair@centennialcollege.ca</a> or contact the team at <a href=\\"mailto:library@centennialcollege.ca\\" target=\\"_blank\\">library@centennialcollege.ca</a> to make alternate arrangements. </p>\\n<p><strong><a id=\\"5.8\\" name=\\"5.8\\"></a>5.8 My work has been added to the repository without my permission. How do I request that it be removed?</strong><br />\\nNote, the repository does its best to meet copyright compliance guidelines that include contacting the copyright holder for permissions to ingest in the repository. If your work has been added by error, please contact <a href=\\"mailto:library@centennialcollege.ca\\" target=\\"_blank\\">library@centennialcollege.ca</a> </p>\\n<p><a href=\\"#top\\">top</a></p>\\n<p>Parts of the FAQs are adapted from: </p>\\n<p>UBC Libraries. (n.d.) <em>cIRcle</em><em> FAQs.</em> Retrieved from <a href=\\"https://circle.ubc.ca/about/faq/\\" target=\\"_blank\\">https://circle.ubc.ca/about/faq/</a> </p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
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
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'94\',
            \'uid\' => \'1\',
            \'filename\' => \'conestoga-logo.jpg\',
            \'uri\' => \'public://conestoga-logo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25163\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610469516\',
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
            \'value\' => "<p>This site is a partner in&nbsp;<a href=\\"https://core.ocls.ca/\\">CORe</a>. &nbsp;</p>\\r\\n\\r\\n<p>The Colleges Object Repository (CORe) is a collaborative initiative by Ontario college libraries, managed by&nbsp;<a href=\\"https://www.ocls.ca/\\">OCLS</a>.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>This site is a partner in <a href=\\"https://core.ocls.ca/\\">CORe</a>.  </p>\\n<p>The Colleges Object Repository (CORe) is a collaborative initiative by Ontario college libraries, managed by <a href=\\"https://www.ocls.ca/\\">OCLS</a>.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'centennial_jpg.jpg\',
            \'uri\' => \'public://centennial_jpg.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'26674\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610469516\',
            \'uuid\' => \'db229cba-7749-43d1-a87b-9cdb86c95a17\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'578\',
            \'height\' => \'186\',
            \'node_export_file_data\' => \'/9j/4AAQSkZJRgABAQEBLAEsAAD/7gAOQWRvYmUAZAAAAAAC/9sAQwADAgIDAgIDAwMDBAMDBAUIBQUEBAUKBwcGCAwKDAwLCgsLDQ4SEA0OEQ4LCxAWEBETFBUVFQwPFxgWFBgSFBUU/9sAQwEDBAQFBAUJBQUJFA0LDRQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQU/8AAFAgAugJCBAEiAAIRAQMRAQQiAP/EAB8AAAEFAQEBAQEBAAAAAAAAAAABAgMEBQYHCAkKC//EALUQAAIBAwMCBAMFBQQEAAABfQECAwAEEQUSITFBBhNRYQcicRQygZGhCCNCscEVUtHwJDNicoIJChYXGBkaJSYnKCkqNDU2Nzg5OkNERUZHSElKU1RVVldYWVpjZGVmZ2hpanN0dXZ3eHl6g4SFhoeIiYqSk5SVlpeYmZqio6Slpqeoqaqys7S1tre4ubrCw8TFxsfIycrS09TV1tfY2drh4uPk5ebn6Onq8fLz9PX29/j5+v/EAB8BAAMBAQEBAQEBAQEAAAAAAAABAgMEBQYHCAkKC//EALURAAIBAgQEAwQHBQQEAAECdwABAgMRBAUhMQYSQVEHYXETIjKBCBRCkaGxwQkjM1LwFWJy0QoWJDThJfEXGBkaJicoKSo1Njc4OTpDREVGR0hJSlNUVVZXWFlaY2RlZmdoaWpzdHV2d3h5eoKDhIWGh4iJipKTlJWWl5iZmqKjpKWmp6ipqrKztLW2t7i5usLDxMXGx8jJytLT1NXW19jZ2uLj5OXm5+jp6vLz9PX29/j5+v/aAA4EAQACEQMRBAAAPwD4fooornA+V6KKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooooooAKKKKKKKKACiiiiiiigAooooookktrGFp74ABV3SSSEBRjI/PHAHUnjrXLal8TLK1mKWUM1zHk5ZcQrnPBGQxIPXkKadm9hhRXR+Afhz4i+J3iKHQ/DOi3WuatMN3k26jCKCBvdiQqKMgbmIAz1r7O+Hv/BLvULqGG58beMo9PYnL6dodv5rAY7zSYAYd8Iw9DXU0V583xR1As3+hWbpnjf5mce5DjNTWvxTuFZzdWKPn7v2eUx4/wC+g2arlYj4Oor9SLL/AIJn/Ce1jZZr/wAT3rE53TX8Ske3yQr+uaxfEH/BL3wHdWkv9ieK/EWmXjcpJeGC6iX/AIAI42P/AH3Xd0Vm6X4q03xAskcXmecgL+XKuxwOATwcEZIHXPtit+OJJbq3Rs8uAw9s/wAqh6bjsfmjRX0P+0H+xN41+A2i3PiCa4sfEPheBwr6lZuYpINzKiebCxyNzMANhcDuRXg+kWKalrFhaOzKs88cTMOoDMAT+tUqK4H/AIWfL/z5D/v4P/iaP+Fny/8APkP+/g/+JquViKFFfpv/AMOvvhn/ANDJ4t/8CbX/AOR6P+HX3wz/AOhk8W/+BNr/API9d9RXA/8ACz5f+fIf9/B/8TV/QfiHNqGrWVk1tsW5mjhZ/NyQGYDPT3o5WB+ZFFfpv/w6++Gf/QyeLf8AwJtf/keqetf8EzPhzpmi6hdQ+JfFXmw28kieZcWxXcqkjOIASMiuvoorlfEXjqfRNUuLBLfcke0t+8xyQGxjB6dPwpJN7AfmpRRX3X+zX+wf4I+M3wS8OeL9Y1zxFZ6jqX2jzoLCeBYV8u5liG0PCx6RjOSe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Rr9PLnt/sVvH5iZDEbkjUr/CeD+hrxuiiiiiiuQQUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRRRRRQAUUUUUUUUAFFFFFFFFABRRRX/2Q==\',
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
      \'title\' => \'Footer Data (Centennial)\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'a82463f4-1f9d-40c2-8a01-eea230feddc8\',
      \'vid\' => NULL,
      \'vuuid\' => \'ce2f9185-f645-4ca4-952a-47e90852919a\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div>\\r\\n<p>Centennial College’s CORe is our institutional repository that enables storage, preservation, and retrieval of digital objects including faculty and student research, GIS files, archival material, and multimedia across participating departments. It is mainly open access however some items may be accessed through authentication.</p>\\r\\n\\r\\n<h2><strong>Copyright</strong></h2>\\r\\n\\r\\n<p>Please refer to the <a href=\\"https://library.centennialcollege.ca/help-services/copyright-guidelines/faculty-copyright-in-the-classroom/\\">Centennial College Library Copyright guidelines</a>.</p>\\r\\n\\r\\n<p>More information to follow soon.</p>\\r\\n\\r\\n<h2><strong>Privacy</strong></h2>\\r\\n\\r\\n<p>Please refer to the<a href=\\"https://www.centennialcollege.ca/admissions/questions-and-answers/student-records/freedom-of-information-and-protection-of-individual-privacy-act.aspx\\"> Centennial College Freedom of Information and Protection of Individual Privacy Act&nbsp;</a></p>\\r\\n</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Centennial College’s CORe is our institutional repository that enables storage, preservation, and retrieval of digital objects including faculty and student research, GIS files, archival material, and multimedia across participating departments. It is mainly open access however some items may be accessed through authentication.</p>\\n<p><strong>Copyright</strong></p>\\n<p>Please refer to the <a href=\\"https://library.centennialcollege.ca/help-services/copyright-guidelines/faculty-copyright-in-the-classroom/\\">Centennial College Library Copyright guidelines</a>.</p>\\n<p>More information to follow soon.</p>\\n<p><strong>Privacy</strong></p>\\n<p>Please refer to the<a href=\\"https://www.centennialcollege.ca/admissions/questions-and-answers/student-records/freedom-of-information-and-protection-of-individual-privacy-act.aspx\\"> Centennial College Freedom of Information and Protection of Individual Privacy Act </a></p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
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
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'95\',
            \'uid\' => \'1\',
            \'filename\' => \'georgian_png.png\',
            \'uri\' => \'public://georgian_png.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'28296\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610469516\',
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
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'96\',
            \'uid\' => \'1\',
            \'filename\' => \'loyalist_library.jpg\',
            \'uri\' => \'public://loyalist_library.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'48625\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610469516\',
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
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
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
        \'source\' => \'node/5\',
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
      \'last_comment_uid\' => \'2985\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/23\',
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
      \'uuid\' => \'f493bfa4-5a7f-479e-b08a-11a2cb7e37f3\',
      \'vid\' => NULL,
      \'vuuid\' => \'75b88c9e-cf9f-4db0-a73a-7e9b9e84c1f8\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'97\',
            \'uid\' => \'1\',
            \'filename\' => \'centennial_square.png\',
            \'uri\' => \'public://centennial_square.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'31516\',
            \'status\' => \'1\',
            \'timestamp\' => \'1610469516\',
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
