<?php

/**
 * @file
 * ocls_conestoga_theme_feature.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ocls_conestoga_theme_feature_node_export_features_default() {
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
            \'fid\' => \'5189\',
            \'uid\' => \'1\',
            \'filename\' => \'seneca-libraries-logo.png\',
            \'uri\' => \'public://seneca-libraries-logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'9403\',
            \'status\' => \'1\',
            \'timestamp\' => \'1587561423\',
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
            \'fid\' => \'5190\',
            \'uid\' => \'1\',
            \'filename\' => \'ncc_web_onwhite.png\',
            \'uri\' => \'public://ncc_web_onwhite.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'40131\',
            \'status\' => \'1\',
            \'timestamp\' => \'1587561423\',
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
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p class=\\"rtecenter\\">Archives &amp; Research Conestoga is the institutional Repository of the Conestoga College Institute of Technology and Advanced Learning. Except where otherwise noted, content on this site can be copied for personal, non-commercial educational, and research purposes.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Archives &amp; Research Conestoga is the institutional Repository of the Conestoga College Institute of Technology and Advanced Learning. Except where otherwise noted, content on this site can be copied for personal, non-commercial educational, and research purposes.</p>\\n",
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
            \'uid\' => \'13\',
            \'filename\' => \'Library-sub-logo-Hrz_Gld_Reverse.png\',
            \'uri\' => \'public://Library-sub-logo-Hrz_Gld_Reverse.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'3871\',
            \'status\' => \'1\',
            \'timestamp\' => \'1612969989\',
            \'uuid\' => \'ea3a3e80-dc3f-4df6-a6cf-4cae67f4abb6\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'361\',
            \'height\' => \'58\',
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
      \'title\' => \'Footer Data (Conestoga)\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'2c0773eb-5fc2-4d90-bdd6-a51eb61acc5c\',
      \'vid\' => NULL,
      \'vuuid\' => \'578cda82-4de1-4dda-9e60-a8dde32de086\',
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
            \'fid\' => \'5191\',
            \'uid\' => \'1\',
            \'filename\' => \'fleming_png.png\',
            \'uri\' => \'public://fleming_png.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'14922\',
            \'status\' => \'1\',
            \'timestamp\' => \'1587561423\',
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
            \'value\' => "<div>For questions pertaining to ARC and its contents, or to book a time to access the Library\'s in-house Archives collection, please email <a href=\\"mailto:ARC@conestogac.on.ca?subject=Archives%20%26%20Research%20Conestoga%20Question\\">ARC@conestogac.on.ca</a> or call 519-748-5520 x3361.</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>For questions pertaining to ARC and its contents, or to book a time to access the Library\'s in-house Archives collection, please email <a href=\\"mailto:ARC@conestogac.on.ca?subject=Archives%20%26%20Research%20Conestoga%20Question\\">ARC@conestogac.on.ca</a> or call 519-748-5520 x3361.</p>\\n",
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
            \'fid\' => \'5192\',
            \'uid\' => \'1\',
            \'filename\' => \'CORe-logo.jpg\',
            \'uri\' => \'public://CORe-logo_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'5406\',
            \'status\' => \'1\',
            \'timestamp\' => \'1587561423\',
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
            \'value\' => "<h2>General FAQ</h2>\\r\\n\\r\\n<hr />\\r\\n<p><strong>What is ARC?</strong></p>\\r\\n\\r\\n<p>Archives &amp; Research Conestoga (ARC) is the College\'s Institutional Repository. It consists of two collections:</p>\\r\\n\\r\\n<ol>\\r\\n\\t<li><strong>Archives</strong>, which aims to illustrate and highlight the history, growth and development of Conestoga College and to reflect the activities of its departments, staff, students and alumni; and</li>\\r\\n\\t<li><strong>Research &amp; Scholarship</strong> <span style=\\"background-color:#FFD700\\">[UNDER DEVELPOMENT]</span>, which showcases scholarly publications by Conestoga faculty and staff, as well as collaborations with external industry partners in the college\'s Applied Research department.</li>\\r\\n</ol>\\r\\n\\r\\n<hr />\\r\\n<h2>Archives FAQ</h2>\\r\\n\\r\\n<hr />\\r\\n<p><strong>What types of material can be submitted to the collection? </strong></p>\\r\\n\\r\\n<p>The following materials are considered a priority for addition to the Conestoga College Archives and ARC:</p>\\r\\n\\r\\n<ul>\\r\\n\\t<li>Materials of significant legal, historical, fiscal, evidential or cultural value to Conestoga College</li>\\r\\n\\t<li>Administrative and operational records and reports created, received and maintained by the Office of the President, Vice Presidents, Deans, Departments, Directors/Managers and other offices and positions of comparable significance</li>\\r\\n\\t<li>Meeting minutes of the Board of Governors and College Council</li>\\r\\n\\t<li>College publications, past and future works of a similar nature</li>\\r\\n\\t<li>Select Conestoga College building &amp; site plans, contracts, campus maps</li>\\r\\n\\t<li>Course calendars</li>\\r\\n\\t<li>Convocation programs and yearbooks</li>\\r\\n</ul>\\r\\n\\r\\n<p>All materials for this collection will be acquired through donation and, once donated, become the property of Conestoga College. The Library endeavors to retain course calendars, meeting minutes and some college reports, as published.&nbsp; The Library welcomes recommendations for adding new materials to the Archives from other Conestoga departments and its staff.&nbsp; The acceptance of new materials for this collection are considered according to the criteria outlined above, although items outside of this criteria may be assessed on a case-by-case basis. Please email <a href=\\"mailto:ARC@conestogac.on.ca?subject=Archives%20%26%20Research%20Conestoga%20Question\\">ARC@conestogac.on.ca</a> for more information.</p>\\r\\n\\r\\n<p>Private papers and/or works of prominent individual staff, faculty, students and alumni, along with artifacts, will be considered for the collection on a case-by-case basis if of significant value to the Conestoga community.</p>\\r\\n\\r\\n<p><strong>How can I access Conestoga’s Archives in their original format?</strong></p>\\r\\n\\r\\n<p>The Library does not have physical copies of everything in ARC, but if do have it you can certainly see it! Our physical items are kept in the Archives Room at the Doon campus library. This is a controlled access room, so contact us at <a href=\\"mailto:ARC@conestogac.on.ca\\">ARC@conestogac.on.ca</a> to arrange an appointment.</p>\\r\\n\\r\\n<p>Please note that items in this collection typically may not be removed from the Archives Room or signed out of the library; however, individual requests will be assessed on a case-by-case basis.</p>\\r\\n\\r\\n<p><strong>Are alternate formats available?</strong></p>\\r\\n\\r\\n<p>A portion of our Archives collection is fully accessible and AODA compliant. Other items may be eligible to be converted into an accessible alternate format upon request. Contact us at <a href=\\"mailto:ARC@conestogac.on.ca\\">ARC@conestogac.on.ca</a> for more information.</p>\\r\\n\\r\\n<p><strong>I have documents that I think belong in the Archives collection. How do I get them to you?</strong></p>\\r\\n\\r\\n<p>For basic digital files (e.g. PDFs of course calendars, meeting minutes, radio ads, etc), you can upload them to our drop-off library <a href=\\"https://cms.conestogac.on.ca/sites/library-resource-centre/archives/_layouts/15/start.aspx#/DropOffLibrary/Forms/AllItems.aspx\\">here</a>.</p>\\r\\n\\r\\n<p>For physical items, please contact <a href=\\"mailto:jcollins@conestogac.on.ca\\">Jessie Collins</a> to see whether it\'s something we can accept. Please note that any items donated to ARC become the Library\'s property. If we decide not to add something to ARC, we will dispose of it in an appropriate manner.</p>\\r\\n\\r\\n<hr />\\r\\n<h2>Research &amp; Scholarship FAQ</h2>\\r\\n\\r\\n<hr />\\r\\n<p><strong>Coming soon!</strong></p>\\r\\n\\r\\n<hr />\\r\\n<h2>Copyright, Privacy, and Use FAQ</h2>\\r\\n\\r\\n<hr />\\r\\n<p><strong>I searched myself in Google and in linked back to items in ARC. I want my information removed. What do I do? </strong></p>\\r\\n\\r\\n<p>Items in ARC are discoverable through Google and other search enginges, and the Library takes privacy concerns seriously. If there is information about you in ARC that you would like removed, please <a href=\\"mailto:ARC@conestogac.on.ca\\">contact us</a> with the relevant information (including a link to the item(s) in question) and we’ll investigate.</p>\\r\\n\\r\\n<p><strong>Is duplication of material allowed?</strong></p>\\r\\n\\r\\n<p>The Conestoga Library may not hold copyright on all the material held in ARC. It is the responsibility of the researcher to determine if use of archival material is in accordance with the Copyright Act and, when necessary, to seek permissions from the copyright owner.&nbsp; Material cannot be duplicated if the copyright holder cannot be determined.&nbsp; Due to the condition or copyright restrictions of an item, it may be unavailable for photocopying or duplication. Please contact Conestoga\'s Copyright Coordinator, James Yochem, at <a href=\\"mailto:jyochem@conestogac.on.ca\\">jyochem@conestogac.on.ca</a> or call 519-748-5520 x3746.</p>\\r\\n\\r\\n<p><strong>More FAQs coming soon!</strong></p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<h2>General FAQ</h2>\\n<hr /><p><strong>What is ARC?</strong></p>\\n<p>Archives &amp; Research Conestoga (ARC) is the College\'s Institutional Repository. It consists of two collections:</p>\\n<ol><li><strong>Archives</strong>, which aims to illustrate and highlight the history, growth and development of Conestoga College and to reflect the activities of its departments, staff, students and alumni; and</li>\\n<li><strong>Research &amp; Scholarship</strong> <span style=\\"background-color:#FFD700\\">[UNDER DEVELPOMENT]</span>, which showcases scholarly publications by Conestoga faculty and staff, as well as collaborations with external industry partners in the college\'s Applied Research department.</li>\\n</ol><hr /><h2>Archives FAQ</h2>\\n<hr /><p><strong>What types of material can be submitted to the collection? </strong></p>\\n<p>The following materials are considered a priority for addition to the Conestoga College Archives and ARC:</p>\\n<ul><li>Materials of significant legal, historical, fiscal, evidential or cultural value to Conestoga College</li>\\n<li>Administrative and operational records and reports created, received and maintained by the Office of the President, Vice Presidents, Deans, Departments, Directors/Managers and other offices and positions of comparable significance</li>\\n<li>Meeting minutes of the Board of Governors and College Council</li>\\n<li>College publications, past and future works of a similar nature</li>\\n<li>Select Conestoga College building &amp; site plans, contracts, campus maps</li>\\n<li>Course calendars</li>\\n<li>Convocation programs and yearbooks</li>\\n</ul><p>All materials for this collection will be acquired through donation and, once donated, become the property of Conestoga College. The Library endeavors to retain course calendars, meeting minutes and some college reports, as published.  The Library welcomes recommendations for adding new materials to the Archives from other Conestoga departments and its staff.  The acceptance of new materials for this collection are considered according to the criteria outlined above, although items outside of this criteria may be assessed on a case-by-case basis. Please email <a href=\\"mailto:ARC@conestogac.on.ca?subject=Archives%20%26%20Research%20Conestoga%20Question\\">ARC@conestogac.on.ca</a> for more information.</p>\\n<p>Private papers and/or works of prominent individual staff, faculty, students and alumni, along with artifacts, will be considered for the collection on a case-by-case basis if of significant value to the Conestoga community.</p>\\n<p><strong>How can I access Conestoga’s Archives in their original format?</strong></p>\\n<p>The Library does not have physical copies of everything in ARC, but if do have it you can certainly see it! Our physical items are kept in the Archives Room at the Doon campus library. This is a controlled access room, so contact us at <a href=\\"mailto:ARC@conestogac.on.ca\\">ARC@conestogac.on.ca</a> to arrange an appointment.</p>\\n<p>Please note that items in this collection typically may not be removed from the Archives Room or signed out of the library; however, individual requests will be assessed on a case-by-case basis.</p>\\n<p><strong>Are alternate formats available?</strong></p>\\n<p>A portion of our Archives collection is fully accessible and AODA compliant. Other items may be eligible to be converted into an accessible alternate format upon request. Contact us at <a href=\\"mailto:ARC@conestogac.on.ca\\">ARC@conestogac.on.ca</a> for more information.</p>\\n<p><strong>I have documents that I think belong in the Archives collection. How do I get them to you?</strong></p>\\n<p>For basic digital files (e.g. PDFs of course calendars, meeting minutes, radio ads, etc), you can upload them to our drop-off library <a href=\\"https://cms.conestogac.on.ca/sites/library-resource-centre/archives/_layouts/15/start.aspx#/DropOffLibrary/Forms/AllItems.aspx\\">here</a>.</p>\\n<p>For physical items, please contact <a href=\\"mailto:jcollins@conestogac.on.ca\\">Jessie Collins</a> to see whether it\'s something we can accept. Please note that any items donated to ARC become the Library\'s property. If we decide not to add something to ARC, we will dispose of it in an appropriate manner.</p>\\n<hr /><h2>Research &amp; Scholarship FAQ</h2>\\n<hr /><p><strong>Coming soon!</strong></p>\\n<hr /><h2>Copyright, Privacy, and Use FAQ</h2>\\n<hr /><p><strong>I searched myself in Google and in linked back to items in ARC. I want my information removed. What do I do? </strong></p>\\n<p>Items in ARC are discoverable through Google and other search enginges, and the Library takes privacy concerns seriously. If there is information about you in ARC that you would like removed, please <a href=\\"mailto:ARC@conestogac.on.ca\\">contact us</a> with the relevant information (including a link to the item(s) in question) and we’ll investigate.</p>\\n<p><strong>Is duplication of material allowed?</strong></p>\\n<p>The Conestoga Library may not hold copyright on all the material held in ARC. It is the responsibility of the researcher to determine if use of archival material is in accordance with the Copyright Act and, when necessary, to seek permissions from the copyright owner.  Material cannot be duplicated if the copyright holder cannot be determined.  Due to the condition or copyright restrictions of an item, it may be unavailable for photocopying or duplication. Please contact Conestoga\'s Copyright Coordinator, James Yochem, at <a href=\\"mailto:jyochem@conestogac.on.ca\\">jyochem@conestogac.on.ca</a> or call 519-748-5520 x3746.</p>\\n<p><strong>More FAQs coming soon!</strong></p>\\n",
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
            \'fid\' => \'6239\',
            \'uid\' => \'13\',
            \'filename\' => \'arc-logo-new.jpg\',
            \'uri\' => \'public://arc-logo-new_1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'7100\',
            \'status\' => \'1\',
            \'timestamp\' => \'1612980333\',
            \'uuid\' => \'51f8f394-84a1-4ede-b646-2cdf687e4f49\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'241\',
            \'height\' => \'113\',
          ),
        ),
      ),
      \'field_repository_name\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Archives and Research Conestoga (ARC)\',
            \'format\' => NULL,
            \'safe_value\' => \'Archives and Research Conestoga (ARC)\',
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
            \'value\' => \'https://conestoga.core.ocls.ca/\',
            \'format\' => NULL,
            \'safe_value\' => \'https://conestoga.core.ocls.ca/\',
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
      \'last_comment_uid\' => \'4300\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'islandora\',
      \'nid\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'path\' => array(
        \'source\' => \'node/22\',
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
      \'uuid\' => \'7f621beb-700f-4b01-8647-ff986d8a8734\',
      \'vid\' => NULL,
      \'vuuid\' => \'1c7682ee-8115-4483-83e8-1ac418dca6a8\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<div><strong>Archives and Research Conestoga (ARC)</strong> is an online, digital repository containing content that illustrates and highlights the history, growth and development of Conestoga College, and reflects the scholarly activities and contributions of its departments, faculty, staff, students and alumni.</div>\\r\\n\\r\\n<div>The <strong>Archives</strong> component of ARC provides access to Conestoga\'s historical documents, such as photos, yearbooks, Board of Governors documentation, and more. The Library has collects and maintains information connected to Conestoga’s early beginnings in 1967 to the present day. The preservation of this material is critical to documenting the College’s history and evolution.</div>\\r\\n\\r\\n<div>Currently under development, the future <strong>Research &amp; Scholarship</strong> section of ARC will provide access to the scholarly contributions of Conestoga\'s faculty, administration and staff, such as research published in academic journals, textbook chapters, conference presentations, and more.</div>\\r\\n\\r\\n<div><br />\\r\\n&nbsp;</div>\\r\\n\\r\\n<div>&nbsp;</div>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><strong>Archives and Research Conestoga (ARC)</strong> is an online, digital repository containing content that illustrates and highlights the history, growth and development of Conestoga College, and reflects the scholarly activities and contributions of its departments, faculty, staff, students and alumni.</p>\\n<p>The <strong>Archives</strong> component of ARC provides access to Conestoga\'s historical documents, such as photos, yearbooks, Board of Governors documentation, and more. The Library has collects and maintains information connected to Conestoga’s early beginnings in 1967 to the present day. The preservation of this material is critical to documenting the College’s history and evolution.</p>\\n<p>Currently under development, the future <strong>Research &amp; Scholarship</strong> section of ARC will provide access to the scholarly contributions of Conestoga\'s faculty, administration and staff, such as research published in academic journals, textbook chapters, conference presentations, and more.</p>\\n<p> </p>\\n<p> </p>\\n",
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
      \'title\' => \'About ARC\',
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
            \'fid\' => \'5193\',
            \'uid\' => \'1\',
            \'filename\' => \'georgian_png.png\',
            \'uri\' => \'public://georgian_png.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'28296\',
            \'status\' => \'1\',
            \'timestamp\' => \'1587561423\',
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
            \'fid\' => \'5194\',
            \'uid\' => \'1\',
            \'filename\' => \'loyalist_library.jpg\',
            \'uri\' => \'public://loyalist_library.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'48625\',
            \'status\' => \'1\',
            \'timestamp\' => \'1587561423\',
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
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => \'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}\',
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'5195\',
            \'uid\' => \'1\',
            \'filename\' => \'centennial_square.png\',
            \'uri\' => \'public://centennial_square.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'31516\',
            \'status\' => \'1\',
            \'timestamp\' => \'1587561423\',
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
