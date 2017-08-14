<?php
/**
 * @file
 * ocls_fleming_theme_feature.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ocls_fleming_theme_feature_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris posuere finibus justo, id feugiat justo efficitur sed. Phasellus accumsan blandit felis et sagittis. Interdum et malesuada fames ac ante ipsum primis in faucibus. Sed porttitor tristique nisi ac maximus. Nulla luctus quis odio vitae cursus.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris posuere finibus justo, id feugiat justo efficitur sed. Phasellus accumsan blandit felis et sagittis. Interdum et malesuada fames ac ante ipsum primis in faucibus. Sed porttitor tristique nisi ac maximus. Nulla luctus quis odio vitae cursus.</p>\\n",
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
            \'filename\' => \'fleming_png.png\',
            \'uri\' => \'public://fleming_png.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'14922\',
            \'status\' => \'1\',
            \'timestamp\' => \'1502715297\',
            \'uuid\' => \'3709d6f8-34ef-41c3-b8a8-8a2e81b2cc17\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1000\',
            \'height\' => \'146\',
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
      \'title\' => \'Footer Data (Fleming)\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'89ce52ca-c7c7-4e91-9823-dca9ee8b4968\',
      \'vid\' => NULL,
      \'vuuid\' => \'e6d3af2c-a1b6-422d-abf1-79706994c548\',
    ),
)',
);
  return $node_export;
}
