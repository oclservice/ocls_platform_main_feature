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
      \'data\' => NULL,
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
      \'data\' => NULL,
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
            \'timestamp\' => \'1519655062\',
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
      \'data\' => NULL,
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
            \'timestamp\' => \'1519655062\',
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
      \'data\' => NULL,
      \'field_image_block\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'uid\' => \'1\',
            \'filename\' => \'conestoga-logo.jpg\',
            \'uri\' => \'public://conestoga-logo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25163\',
            \'status\' => \'1\',
            \'timestamp\' => \'1519655062\',
            \'uuid\' => \'da106610-dcd2-4df8-8e59-efb7a0c059bb\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'295\',
            \'height\' => \'61\',
            \'node_export_file_data\' => \'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AAAAAAAAUnNsdFVudEYjUHhsQFIAAAAAAAAAAAAKdmVjdG9yRGF0YWJvb2wBAAAAAFBnUHNlbnVtAAAAAFBnUHMAAAAAUGdQQwAAAABMZWZ0VW50RiNSbHQAAAAAAAAAAAAAAABUb3AgVW50RiNSbHQAAAAAAAAAAAAAAABTY2wgVW50RiNQcmNAWQAAAAAAAAAAABBjcm9wV2hlblByaW50aW5nYm9vbAAAAAAOY3JvcFJlY3RCb3R0b21sb25nAAAAAAAAAAxjcm9wUmVjdExlZnRsb25nAAAAAAAAAA1jcm9wUmVjdFJpZ2h0bG9uZwAAAAAAAAALY3JvcFJlY3RUb3Bsb25nAAAAAAA4QklNA+0AAAAAABAASAAAAAEAAgBIAAAAAQACOEJJTQQmAAAAAAAOAAAAAAAAAAAAAD+AAAA4QklNBA0AAAAAAAQAAABaOEJJTQQZAAAAAAAEAAAAHjhCSU0D8wAAAAAACQAAAAAAAAAAAQA4QklNJxAAAAAAAAoAAQAAAAAAAAACOEJJTQP1AAAAAABIAC9mZgABAGxmZgAGAAAAAAABAC9mZgABAKGZmgAGAAAAAAABADIAAAABAFoAAAAGAAAAAAABADUAAAABAC0AAAAGAAAAAAABOEJJTQP4AAAAAABwAAD/////////////////////////////A+gAAAAA/////////////////////////////wPoAAAAAP////////////////////////////8D6AAAAAD/////////////////////////////A+gAADhCSU0EAAAAAAAAAgABOEJJTQQCAAAAAAAEAAAAADhCSU0EMAAAAAAAAgEBOEJJTQQtAAAAAAAGAAEAAAACOEJJTQQIAAAAAAAQAAAAAQAAAkAAAAJAAAAAADhCSU0EHgAAAAAABAAAAAA4QklNBBoAAAAAA0kAAAAGAAAAAAAAAAAAAAA9AAABJwAAAAoAVQBuAHQAaQB0AGwAZQBkAC0AMgAAAAEAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAAAAAAAAAABJwAAAD0AAAAAAAAAAAAAAAAAAAAAAQAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAAQAAAAAAAG51bGwAAAACAAAABmJvdW5kc09iamMAAAABAAAAAAAAUmN0MQAAAAQAAAAAVG9wIGxvbmcAAAAAAAAAAExlZnRsb25nAAAAAAAAAABCdG9tbG9uZwAAAD0AAAAAUmdodGxvbmcAAAEnAAAABnNsaWNlc1ZsTHMAAAABT2JqYwAAAAEAAAAAAAVzbGljZQAAABIAAAAHc2xpY2VJRGxvbmcAAAAAAAAAB2dyb3VwSURsb25nAAAAAAAAAAZvcmlnaW5lbnVtAAAADEVTbGljZU9yaWdpbgAAAA1hdXRvR2VuZXJhdGVkAAAAAFR5cGVlbnVtAAAACkVTbGljZVR5cGUAAAAASW1nIAAAAAZib3VuZHNPYmpjAAAAAQAAAAAAAFJjdDEAAAAEAAAAAFRvcCBsb25nAAAAAAAAAABMZWZ0bG9uZwAAAAAAAAAAQnRvbWxvbmcAAAA9AAAAAFJnaHRsb25nAAABJwAAAAN1cmxURVhUAAAAAQAAAAAAAG51bGxURVhUAAAAAQAAAAAAAE1zZ2VURVhUAAAAAQAAAAAABmFsdFRhZ1RFWFQAAAABAAAAAAAOY2VsbFRleHRJc0hUTUxib29sAQAAAAhjZWxsVGV4dFRFWFQAAAABAAAAAAAJaG9yekFsaWduZW51bQAAAA9FU2xpY2VIb3J6QWxpZ24AAAAHZGVmYXVsdAAAAAl2ZXJ0QWxpZ25lbnVtAAAAD0VTbGljZVZlcnRBbGlnbgAAAAdkZWZhdWx0AAAAC2JnQ29sb3JUeXBlZW51bQAAABFFU2xpY2VCR0NvbG9yVHlwZQAAAABOb25lAAAACXRvcE91dHNldGxvbmcAAAAAAAAACmxlZnRPdXRzZXRsb25nAAAAAAAAAAxib3R0b21PdXRzZXRsb25nAAAAAAAAAAtyaWdodE91dHNldGxvbmcAAAAAADhCSU0EKAAAAAAADAAAAAI/8AAAAAAAADhCSU0EFAAAAAAABAAAAAI4QklNBAwAAAAACnMAAAABAAAAoAAAACEAAAHgAAA94AAAClcAGAAB/9j/7QAMQWRvYmVfQ00AAf/uAA5BZG9iZQBkgAAAAAH/2wCEAAwICAgJCAwJCQwRCwoLERUPDAwPFRgTExUTExgRDAwMDAwMEQwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwBDQsLDQ4NEA4OEBQODg4UFA4ODg4UEQwMDAwMEREMDAwMDAwRDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDP/AABEIACEAoAMBIgACEQEDEQH/3QAEAAr/xAE/AAABBQEBAQEBAQAAAAAAAAADAAECBAUGBwgJCgsBAAEFAQEBAQEBAAAAAAAAAAEAAgMEBQYHCAkKCxAAAQQBAwIEAgUHBggFAwwzAQACEQMEIRIxBUFRYRMicYEyBhSRobFCIyQVUsFiMzRygtFDByWSU/Dh8WNzNRaisoMmRJNUZEXCo3Q2F9JV4mXys4TD03Xj80YnlKSFtJXE1OT0pbXF1eX1VmZ2hpamtsbW5vY3R1dnd4eXp7fH1+f3EQACAgECBAQDBAUGBwcGBTUBAAIRAyExEgRBUWFxIhMFMoGRFKGxQiPBUtHwMyRi4XKCkkNTFWNzNPElBhaisoMHJjXC0kSTVKMXZEVVNnRl4vKzhMPTdePzRpSkhbSVxNTk9KW1xdXl9VZmdoaWprbG1ub2JzdHV2d3h5ent8f/2gAMAwEAAhEDEQA/APNOmdLzuq5bcTBrNtpBcezWtH0rLHu9tdbf3nLa6n9WuldErYOqdSNma9ocMTFq3kA8Pstvsp2Vu/4r1P8Agl1H1Yx6OifVU57mB1ltLs3I8XBoccWjd+5s2/277F5xl5WRmZNuVkvNl9zi+x57kqCM5ZJyAPDCBrTeZZZREIixcpa/3W9iZvRrCKup4RbWYH2nDcWXN/lOqudbi3f1PTo/49av1l6H0npnQ8LI6dYcoZtrn/a3RLmNb7GVtH801rnP9Vn856v87/Nrl1cd1Kx/SW9MfLmVXm+kz9He307mf29lTk+UDxRMSaB9Ub0WiQoggbaFppKVVVl1rKaWGy2xwZWxoJc5zjtaxrR9JznK9l9IZi13Tn4tmRjENtxmGwv3bvTsbXY6lmNf6L/5z0Miz/S0etT+kUixz0lsf82MwutxxfQeo49Rvt6dLxeGsb611fuqGM7Joo/TXYzcj12fzXp/aa7aGDZ9Xc99fTbw6s43VbBTTkAuLGWl/oupytrPUqsZ/O/zb/Up/SUeqkpy0lqU9BdZj5OTZm42PViZDcV7rPW91j23WVen6OPb7LPstvus9P8A4XYhP6NfX0qrqd1tdVeTvOLU7fvtFb20Xem9lb8drq3v/mrr6rfTZ6np/pMf10poJLYzPq07Gw6cuvPxcoZRcMSqgXmy4ssbjWNpbbi1N3Ne/wDwj6/UZ/NKF/1dyamZQrvoyMnAG7MxKS91lTQdl79zqm49zca13p5H2a+//Te/G9S5JTlJLUs6A+hobl5uNi5Ro+0jEtdZ6m0s+001ueyl+NXkZFO19NNmR/hGV2enb+jVb9l5f7J/a8N+yfaPspM+4WbPXbLP3Hs3bH/8HYkpqK91FrRh9LLWgF2K4uIABJ+1Zjdzo+k7a3aqKv8AUv6F0n/wo7/26zUlO9/itxMTM+t1OPmUV5NLqbSarmNsaSGyPZYHNXT5+R1zG6Xfn3fUXAqxGseXWiuoWMZq31nY237VX6f07N9Ps/kLj/qDhfWDM66W/V7LpwuoVUPsFuRq0sllVjGtNOVuf+k/0S7L/Fc761H6z9Sd1k5XpChwyjk79nrh9Xp/T/R+p6Xq7P8AgElOL/i86X0mrovWPrT1PFZ1D9mN242LYAWbw3e5z2vD2e7dUxj9n6H9JYr9FnSvrt9T+s5V3TMXp/VOjV/aGZGJX6Yc0NsvbXp73bmUXVOZY+xn+FTfUmv7d9RfrVgdPa668uc+qhoJeWOZ+hDWj3Pe/wBCzYxR+o+Jk9O+o31sy8+p2NRk4zqaH2gs3vFeRTtYH/8AC5FVX/GexJT/AP/QF0cjrP1NZj0Eeq/FfhkTxbWNtTHf1/0D/wDri8wc1zXFrgWuaYIOhBHYrV+r31jzOhZDnVAXY9sevjuMB0fRe1w/m7WT7LFpdbu+qvXHu6hjZL+m59mt1N9TnV2O/wBJvxBfstd+e/0/03+jqs9TfXhE4pyFEwmeIEa8J/rMsiJxGtSiKo9Xl0YYl32M5kRSLBSCe7y02e3+o1vv/rsV7E6Bk2uD82yvp2JPuyMo7Jb+9RjH9ayf5Po0/wDba2frOeij6tdPp6JaL8WjIsFj4LXmxzGbrMhj2se19uz2f8HX6df80pJZBxRiNbOp/Rj9VohoSdKH1eYwsu/BzKM3HIbfi2MuqJEgPrcLGS0/S9zVe6hkfV+9t9+Jj5FGTeQ5lBew00ku327LNvrZFe39HRU9lXpf4S6/0/0mWkpFj0Vv1k6f+0revY9FtXV8iuzfXLTjtyLmPpyM6tzt1213q2X1Ybm/ocj/ALVW01+jYPB+swwD05tdbr8bHqbXnYth2MtLMm/PqtqsqO+m6j7T+r3/AM5X/wAJjX3Y9mCkkp3+l/WDHxcbNpsflUvzMlmQ6zEc1jixjMmp2M9zvzL/ALb7/ZYz2fzNiBR1jEo6BkdMDbrn5QBdTaWmiu5tjXt6ji/4WvJ+yM+xPr/4Sx9l9lX6qsdJJTrv676eF0VuG11eZ0d9lvqu2uYXutGTQ6tkf4Pb7/UR7et9Kqtz83p+PbXl9Srsq9O1zXVY4yPbmei9v6TJ9Sp1lFHqsq+z12/9qLv0qwUklPQP+sODfbZ1LJqtd1S3Ffi2tGw0WONH2GnM+j6lFtXtyXVNZb6mVV6ld2P/AIJf84sP7A7pBpf+zXYTaJDaxcMlj3Zzcv1dpc6r7ZZdV6Pqf0G7/TfpFz6SSlK/1L+hdJ/8KO/9us1UFf6l/Quk/wDhR3/t1mpKTfVjF6vk9WZ+xLvR6pSx12KA4tfY5gmyikxs3uo9V2y79FbUyyv+Qum6x9YPrvnfV3OvyesV3dOryH4Fn2akj1yw073DKxsVtNWNczIbs9fJxvtdXq1+lZ/Nrj+ldTyek9Ro6jihpvxnb6xYNzZgt9zfmiV9Ytb0Z/R3Y9NtLrTfXc9rvVre/wBFtvovbY2v9KzFrrfvqsSU7nQ+k/WXo/XcFvS86vFzM3Efkiyvfa1rGssuyMLKx20XOtzKfQ/SYbce/Zd6P+EV/wCsNn106vg9UZ1rqtDsbol5pvor+i+wAljnfY6fayzZsxrOoegz7V+rM/WfUrVX6xdd+uWHl4uT1ZtdWQ+vKOI9kA115bBj249bqX7q/sf0sb/CUWWf4VZP/OzPH7RLKMau3qhebrmVRY31mmrLZTbu3ejlMf8ApMe71seuz9PjVY9/6VAEEWDY8EkEGjo//9HypJJJJSlNv8w/+uz8ligkkVKSSSSUpJJJJSkkkklKSSSSUpJJJJSlf6l/Q+lf+FHf+3WaqCSSlJJJJKdz61fS6T/6bMb8j1hpJJmL5Aun8xf/2QA4QklNBCEAAAAAAGEAAAABAQAAAA8AQQBkAG8AYgBlACAAUABoAG8AdABvAHMAaABvAHAAAAAZAEEAZABvAGIAZQAgAFAAaABvAHQAbwBzAGgAbwBwACAAQwBDACAAMgAwADEANQAuADUAAAABADhCSU0EBgAAAAAABwAIAAEAAQEA/+EPnmh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8APD94cGFja2V0IGJlZ2luPSLvu78iIGlkPSJXNU0wTXBDZWhpSHpyZVN6TlRjemtjOWQiPz4gPHg6eG1wbWV0YSB4bWxuczp4PSJhZG9iZTpuczptZXRhLyIgeDp4bXB0az0iQWRvYmUgWE1QIENvcmUgNS42LWMxMzIgNzkuMTU5Mjg0LCAyMDE2LzA0LzE5LTEzOjEzOjQwICAgICAgICAiPiA8cmRmOlJERiB4bWxuczpyZGY9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkvMDIvMjItcmRmLXN5bnRheC1ucyMiPiA8cmRmOkRlc2NyaXB0aW9uIHJkZjphYm91dD0iIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdEV2dD0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlRXZlbnQjIiB4bWxuczpwaG90b3Nob3A9Imh0dHA6Ly9ucy5hZG9iZS5jb20vcGhvdG9zaG9wLzEuMC8iIHhtbG5zOmRjPSJodHRwOi8vcHVybC5vcmcvZGMvZWxlbWVudHMvMS4xLyIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ0MgMjAxNS41IChNYWNpbnRvc2gpIiB4bXA6Q3JlYXRlRGF0ZT0iMjAxNi0xMi0xNVQxNTowOToyNS0wNTowMCIgeG1wOk1ldGFkYXRhRGF0ZT0iMjAxNi0xMi0xNVQxNTowOToyNS0wNTowMCIgeG1wOk1vZGlmeURhdGU9IjIwMTYtMTItMTVUMTU6MDk6MjUtMDU6MDAiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6OGM5ZmIyMDUtOTcxMy00OTQ1LThmZWQtYTU3ODMwNWE2OTc2IiB4bXBNTTpEb2N1bWVudElEPSJhZG9iZTpkb2NpZDpwaG90b3Nob3A6NTRiYjg1MzEtMDI2Yi0xMTdhLWEwNjctYzFkYjE4ODkyMDZjIiB4bXBNTTpPcmlnaW5hbERvY3VtZW50SUQ9InhtcC5kaWQ6OTAwYTk4NWMtYzcxOS00NmVjLTg1NzgtNWQ1MGNjMDMwZTQ4IiBwaG90b3Nob3A6Q29sb3JNb2RlPSIzIiBwaG90b3Nob3A6SUNDUHJvZmlsZT0iRGlzcGxheSIgZGM6Zm9ybWF0PSJpbWFnZS9qcGVnIj4gPHhtcE1NOkhpc3Rvcnk+IDxyZGY6U2VxPiA8cmRmOmxpIHN0RXZ0OmFjdGlvbj0iY3JlYXRlZCIgc3RFdnQ6aW5zdGFuY2VJRD0ieG1wLmlpZDo5MDBhOTg1Yy1jNzE5LTQ2ZWMtODU3OC01ZDUwY2MwMzBlNDgiIHN0RXZ0OndoZW49IjIwMTYtMTItMTVUMTU6MDk6MjUtMDU6MDAiIHN0RXZ0OnNvZnR3YXJlQWdlbnQ9IkFkb2JlIFBob3Rvc2hvcCBDQyAyMDE1LjUgKE1hY2ludG9zaCkiLz4gPHJkZjpsaSBzdEV2dDphY3Rpb249InNhdmVkIiBzdEV2dDppbnN0YW5jZUlEPSJ4bXAuaWlkOjhjOWZiMjA1LTk3MTMtNDk0NS04ZmVkLWE1NzgzMDVhNjk3NiIgc3RFdnQ6d2hlbj0iMjAxNi0xMi0xNVQxNTowOToyNS0wNTowMCIgc3RFdnQ6c29mdHdhcmVBZ2VudD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTUuNSAoTWFjaW50b3NoKSIgc3RFdnQ6Y2hhbmdlZD0iLyIvPiA8L3JkZjpTZXE+IDwveG1wTU06SGlzdG9yeT4gPHBob3Rvc2hvcDpEb2N1bWVudEFuY2VzdG9ycz4gPHJkZjpCYWc+IDxyZGY6bGk+OTk1NjZBNTYxODUzQUNBRThEOUUxQTQ5MkVEREY1RTM8L3JkZjpsaT4gPHJkZjpsaT5hZG9iZTpkb2NpZDpwaG90b3Nob3A6NmZmZjVlOGItYzYzZi0xMTc5LWEwZTAtYmQzZGM0MDNiOWY4PC9yZGY6bGk+IDxyZGY6bGk+YWRvYmU6ZG9jaWQ6cGhvdG9zaG9wOjk3ZmNiNDljLWRhYjctMTE3OS05MzVjLTk5MzhmNWQzNTFhMjwvcmRmOmxpPiA8cmRmOmxpPnhtcC5kaWQ6MTM1MTIyNDgtM2ZiYy00MWQ1LWIxYmMtOThmYzc0ODRiMThkPC9yZGY6bGk+IDxyZGY6bGk+eG1wLmRpZDplODgyZDIzNS1hZDY0LTRiMGYtOTIwNy1kN2Y0YWNlYTYyOTQ8L3JkZjpsaT4gPC9yZGY6QmFnPiA8L3Bob3Rvc2hvcDpEb2N1bWVudEFuY2VzdG9ycz4gPC9yZGY6RGVzY3JpcHRpb24+IDwvcmRmOlJERj4gPC94OnhtcG1ldGE+ICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgICAgPD94cGFja2V0IGVuZD0idyI/Pv/iDNhJQ0NfUFJPRklMRQABAQAADMhhcHBsAhAAAG1udHJSR0IgWFlaIAfgAAkAHAAIAAsALGFjc3BBUFBMAAAAAEFQUEwAAAAAAAAAAAAAAAAAAAABAAD21gABAAAAANMtYXBwbAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAEWRlc2MAAAFQAAAAYmRzY20AAAG0AAABsGNwcnQAAANkAAAAI3d0cHQAAAOIAAAAFHJYWVoAAAOcAAAAFGdYWVoAAAOwAAAAFGJYWVoAAAPEAAAAFHJUUkMAAAPYAAAIDGFhcmcAAAvkAAAAIHZjZ3QAAAwEAAAAMG5kaW4AAAw0AAAAPmNoYWQAAAx0AAAALG1tb2QAAAygAAAAKGJUUkMAAAPYAAAIDGdUUkMAAAPYAAAIDGFhYmcAAAvkAAAAIGFhZ2cAAAvkAAAAIGRlc2MAAAAAAAAACERpc3BsYXkAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABtbHVjAAAAAAAAACIAAAAMaHJIUgAAAAgAAAGoa29LUgAAAAgAAAGobmJOTwAAAAgAAAGoaWQAAAAAAAgAAAGoaHVIVQAAAAgAAAGoY3NDWgAAAAgAAAGoZGFESwAAAAgAAAGodWtVQQAAAAgAAAGoYXIAAAAAAAgA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\',
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
      \'data\' => NULL,
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
            \'timestamp\' => \'1519655062\',
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
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => array(
        \'link_title\' => \'Contact\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-45\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
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
      \'data\' => NULL,
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
            \'timestamp\' => \'1519655062\',
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
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => array(
        \'link_title\' => \'FAQs\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-46\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
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
      \'data\' => NULL,
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1\',
            \'uid\' => \'1\',
            \'filename\' => \'conestoga-logo.jpg\',
            \'uri\' => \'public://conestoga-logo.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'25163\',
            \'status\' => \'1\',
            \'timestamp\' => \'1519655062\',
            \'uuid\' => \'da106610-dcd2-4df8-8e59-efb7a0c059bb\',
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
      \'data\' => NULL,
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => array(
        \'link_title\' => \'About\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-47\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'0\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
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
      \'data\' => NULL,
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
            \'timestamp\' => \'1519655062\',
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
      \'data\' => NULL,
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
            \'timestamp\' => \'1519655062\',
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
      \'data\' => NULL,
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
      \'data\' => NULL,
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
            \'timestamp\' => \'1519655062\',
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
