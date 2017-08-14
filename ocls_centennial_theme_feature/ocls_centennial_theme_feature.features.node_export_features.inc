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
      \'field_image_block\' => array(),
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
)',
);
  return $node_export;
}
