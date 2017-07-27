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
      \'data\' => NULL,
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
            \'timestamp\' => \'1501164655\',
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
