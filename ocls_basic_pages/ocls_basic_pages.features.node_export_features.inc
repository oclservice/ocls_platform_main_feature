<?php
/**
 * @file
 * ocls_basic_pages.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ocls_basic_pages_node_export_features_default() {
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
      \'menu\' => array(
        \'link_title\' => \'Partner Institutions\',
        \'mlid\' => 0,
        \'plid\' => \'0\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-49\',
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
        \'source\' => \'node/6\',
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
)',
);
  return $node_export;
}
