<?php
/**
 * @file
 * ocls_seneca_theme_feature.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function ocls_seneca_theme_feature_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><em>Seneca\'s Libraries</em> provide students, faculty and staff with resources and services both online and on-site to enhance academic pursuits.</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p><em>Seneca\'s Libraries</em> provide students, faculty and staff with resources and services both online and on-site to enhance academic pursuits.</p>\\n",
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
            \'filename\' => \'seneca-libraries-logo.png\',
            \'uri\' => \'public://seneca-libraries-logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'9403\',
            \'status\' => \'1\',
            \'timestamp\' => \'1502392664\',
            \'uuid\' => \'4d0d615c-1524-4ded-8ea4-800cd855abd6\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1100\',
            \'height\' => \'120\',
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
      \'title\' => \'Footer Data (Seneca)\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'image_block\',
      \'uid\' => \'1\',
      \'uuid\' => \'ebebd6b2-9363-4797-9cc9-82fd6601b854\',
      \'vid\' => NULL,
      \'vuuid\' => \'e2b7fe38-eadc-47ba-a8ec-1e7fcce36d16\',
    ),
)',
);
  return $node_export;
}
