<?php
/**
 * @file
 * ocls_platform_main_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ocls_platform_main_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'Associate XML Forms'.
  $permissions['Associate XML Forms'] = array(
    'name' => 'Associate XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'Create XML Forms'.
  $permissions['Create XML Forms'] = array(
    'name' => 'Create XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'Delete XML Forms'.
  $permissions['Delete XML Forms'] = array(
    'name' => 'Delete XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'Edit XML Forms'.
  $permissions['Edit XML Forms'] = array(
    'name' => 'Edit XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'Edit existing OCR stream'.
  $permissions['Edit existing OCR stream'] = array(
    'name' => 'Edit existing OCR stream',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_paged_content',
  );

  // Exported permission: 'Import entities from csv'.
  $permissions['Import entities from csv'] = array(
    'name' => 'Import entities from csv',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_entities_csv_import',
  );

  // Exported permission: 'List XML Forms'.
  $permissions['List XML Forms'] = array(
    'name' => 'List XML Forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xml_form_builder',
  );

  // Exported permission: 'Manage CSL Citations'.
  $permissions['Manage CSL Citations'] = array(
    'name' => 'Manage CSL Citations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'csl',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access google analytics reports'.
  $permissions['access google analytics reports'] = array(
    'name' => 'access google analytics reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'google_analytics_reports',
  );

  // Exported permission: 'access own authorizations'.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access own consumers'.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access system charts'.
  $permissions['access system charts'] = array(
    'name' => 'access system charts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system_charts',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add fedora datastreams'.
  $permissions['add fedora datastreams'] = array(
    'name' => 'add fedora datastreams',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'add or remove islandora object lock'.
  $permissions['add or remove islandora object lock'] = array(
    'name' => 'add or remove islandora object lock',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_object_lock',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer any social profiles'.
  $permissions['administer any social profiles'] = array(
    'name' => 'administer any social profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'socialmedia',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer chart'.
  $permissions['administer chart'] = array(
    'name' => 'administer chart',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'chart',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer compound relationships'.
  $permissions['administer compound relationships'] = array(
    'name' => 'administer compound relationships',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_compound_object',
  );

  // Exported permission: 'administer consumers'.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer css injection'.
  $permissions['administer css injection'] = array(
    'name' => 'administer css injection',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'css_injector',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer google analytics reports api'.
  $permissions['administer google analytics reports api'] = array(
    'name' => 'administer google analytics reports api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'google_analytics_reports_api',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer islandora entities'.
  $permissions['administer islandora entities'] = array(
    'name' => 'administer islandora entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_entities',
  );

  // Exported permission: 'administer islandora ip embargoes'.
  $permissions['administer islandora ip embargoes'] = array(
    'name' => 'administer islandora ip embargoes',
    'roles' => array(
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_ip_embargo',
  );

  // Exported permission: 'administer islandora oai'.
  $permissions['administer islandora oai'] = array(
    'name' => 'administer islandora oai',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_oai',
  );

  // Exported permission: 'administer islandora object locking'.
  $permissions['administer islandora object locking'] = array(
    'name' => 'administer islandora object locking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_object_lock',
  );

  // Exported permission: 'administer islandora solr'.
  $permissions['administer islandora solr'] = array(
    'name' => 'administer islandora solr',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_solr',
  );

  // Exported permission: 'administer islandora_bookmark'.
  $permissions['administer islandora_bookmark'] = array(
    'name' => 'administer islandora_bookmark',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_bookmark',
  );

  // Exported permission: 'administer islandora_bookmark_csv_exports'.
  $permissions['administer islandora_bookmark_csv_exports'] = array(
    'name' => 'administer islandora_bookmark_csv_exports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_bookmark_csv_exports',
  );

  // Exported permission: 'administer islandora_solr_metadata'.
  $permissions['administer islandora_solr_metadata'] = array(
    'name' => 'administer islandora_solr_metadata',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_solr_metadata',
  );

  // Exported permission: 'administer islandora_xacml_api'.
  $permissions['administer islandora_xacml_api'] = array(
    'name' => 'administer islandora_xacml_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_xacml_api',
  );

  // Exported permission: 'administer islandora_xacml_editor'.
  $permissions['administer islandora_xacml_editor'] = array(
    'name' => 'administer islandora_xacml_editor',
    'roles' => array(
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_xacml_editor',
  );

  // Exported permission: 'administer islandora_xquery'.
  $permissions['administer islandora_xquery'] = array(
    'name' => 'administer islandora_xquery',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_xquery',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer oauth'.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'administer owlcarousel settings'.
  $permissions['administer owlcarousel settings'] = array(
    'name' => 'administer owlcarousel settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'owlcarousel_ui',
  );

  // Exported permission: 'administer own social profiles'.
  $permissions['administer own social profiles'] = array(
    'name' => 'administer own social profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'socialmedia',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer social media'.
  $permissions['administer social media'] = array(
    'name' => 'administer social media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'socialmedia',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer superfish'.
  $permissions['administer superfish'] = array(
    'name' => 'administer superfish',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'superfish',
  );

  // Exported permission: 'administer system charts'.
  $permissions['administer system charts'] = array(
    'name' => 'administer system charts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system_charts',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer widgets sets'.
  $permissions['administer widgets sets'] = array(
    'name' => 'administer widgets sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'widgets',
  );

  // Exported permission: 'administer xacml inheritance'.
  $permissions['administer xacml inheritance'] = array(
    'name' => 'administer xacml inheritance',
    'roles' => array(
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_xacml_editor',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'assign all roles'.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass inactive object state'.
  $permissions['bypass inactive object state'] = array(
    'name' => 'bypass inactive object state',
    'roles' => array(
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_simple_workflow',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'can embargo any object'.
  $permissions['can embargo any object'] = array(
    'name' => 'can embargo any object',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_scholar_embargo',
  );

  // Exported permission: 'can embargo owned objects'.
  $permissions['can embargo owned objects'] = array(
    'name' => 'can embargo owned objects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_scholar_embargo',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'control islandora ip embargoes'.
  $permissions['control islandora ip embargoes'] = array(
    'name' => 'control islandora ip embargoes',
    'roles' => array(
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_ip_embargo',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create child collection'.
  $permissions['create child collection'] = array(
    'name' => 'create child collection',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_basic_collection',
  );

  // Exported permission: 'create datastreams'.
  $permissions['create datastreams'] = array(
    'name' => 'create datastreams',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'create image_block content'.
  $permissions['create image_block content'] = array(
    'name' => 'create image_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create institution content'.
  $permissions['create institution content'] = array(
    'name' => 'create institution content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create islandora_autocomplete_fields content'.
  $permissions['create islandora_autocomplete_fields content'] = array(
    'name' => 'create islandora_autocomplete_fields content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create objects'.
  $permissions['create objects'] = array(
    'name' => 'create objects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create relationships'.
  $permissions['create relationships'] = array(
    'name' => 'create relationships',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image_block content'.
  $permissions['delete any image_block content'] = array(
    'name' => 'delete any image_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any institution content'.
  $permissions['delete any institution content'] = array(
    'name' => 'delete any institution content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any islandora_autocomplete_fields content'.
  $permissions['delete any islandora_autocomplete_fields content'] = array(
    'name' => 'delete any islandora_autocomplete_fields content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete datastreams'.
  $permissions['delete datastreams'] = array(
    'name' => 'delete datastreams',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'delete fedora objects and datastreams'.
  $permissions['delete fedora objects and datastreams'] = array(
    'name' => 'delete fedora objects and datastreams',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'delete objects'.
  $permissions['delete objects'] = array(
    'name' => 'delete objects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image_block content'.
  $permissions['delete own image_block content'] = array(
    'name' => 'delete own image_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own institution content'.
  $permissions['delete own institution content'] = array(
    'name' => 'delete own institution content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own islandora_autocomplete_fields content'.
  $permissions['delete own islandora_autocomplete_fields content'] = array(
    'name' => 'delete own islandora_autocomplete_fields content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete relationships'.
  $permissions['delete relationships'] = array(
    'name' => 'delete relationships',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image_block content'.
  $permissions['edit any image_block content'] = array(
    'name' => 'edit any image_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any institution content'.
  $permissions['edit any institution content'] = array(
    'name' => 'edit any institution content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any islandora_autocomplete_fields content'.
  $permissions['edit any islandora_autocomplete_fields content'] = array(
    'name' => 'edit any islandora_autocomplete_fields content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit fedora metadata'.
  $permissions['edit fedora metadata'] = array(
    'name' => 'edit fedora metadata',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own image_block content'.
  $permissions['edit own image_block content'] = array(
    'name' => 'edit own image_block content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own institution content'.
  $permissions['edit own institution content'] = array(
    'name' => 'edit own institution content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own islandora_autocomplete_fields content'.
  $permissions['edit own islandora_autocomplete_fields content'] = array(
    'name' => 'edit own islandora_autocomplete_fields content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit scholar metadata'.
  $permissions['edit scholar metadata'] = array(
    'name' => 'edit scholar metadata',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_entities',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'export islandora bookmarks'.
  $permissions['export islandora bookmarks'] = array(
    'name' => 'export islandora bookmarks',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'islandora_bookmark',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'export taxonomy by csv'.
  $permissions['export taxonomy by csv'] = array(
    'name' => 'export taxonomy by csv',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate datastream token'.
  $permissions['generate datastream token'] = array(
    'name' => 'generate datastream token',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import or export menu'.
  $permissions['import or export menu'] = array(
    'name' => 'import or export menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_import',
  );

  // Exported permission: 'import taxonomy by csv'.
  $permissions['import taxonomy by csv'] = array(
    'name' => 'import taxonomy by csv',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: 'ingest fedora objects'.
  $permissions['ingest fedora objects'] = array(
    'name' => 'ingest fedora objects',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'islandora_batch_manage_queue'.
  $permissions['islandora_batch_manage_queue'] = array(
    'name' => 'islandora_batch_manage_queue',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_batch',
  );

  // Exported permission: 'list relationships'.
  $permissions['list relationships'] = array(
    'name' => 'list relationships',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'manage collection policy'.
  $permissions['manage collection policy'] = array(
    'name' => 'manage collection policy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_basic_collection',
  );

  // Exported permission: 'manage deleted objects'.
  $permissions['manage deleted objects'] = array(
    'name' => 'manage deleted objects',
    'roles' => array(
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'manage inactive objects'.
  $permissions['manage inactive objects'] = array(
    'name' => 'manage inactive objects',
    'roles' => array(
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_simple_workflow',
  );

  // Exported permission: 'manage islandora ip embargoes'.
  $permissions['manage islandora ip embargoes'] = array(
    'name' => 'manage islandora ip embargoes',
    'roles' => array(
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_ip_embargo',
  );

  // Exported permission: 'manage islandora object lock'.
  $permissions['manage islandora object lock'] = array(
    'name' => 'manage islandora object lock',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_object_lock',
  );

  // Exported permission: 'manage object properties'.
  $permissions['manage object properties'] = array(
    'name' => 'manage object properties',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'migrate collection members'.
  $permissions['migrate collection members'] = array(
    'name' => 'migrate collection members',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_basic_collection',
  );

  // Exported permission: 'modify datastreams'.
  $permissions['modify datastreams'] = array(
    'name' => 'modify datastreams',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'modify object properties'.
  $permissions['modify object properties'] = array(
    'name' => 'modify object properties',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'oauth authorize any consumers'.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'oauth register any consumers'.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'oauth_common',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'regenerate derivatives for an object'.
  $permissions['regenerate derivatives for an object'] = array(
    'name' => 'regenerate derivatives for an object',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'replace a datastream with new content, preserving version history'.
  $permissions['replace a datastream with new content, preserving version history'] = array(
    'name' => 'replace a datastream with new content, preserving version history',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'revert to old datastream'.
  $permissions['revert to old datastream'] = array(
    'name' => 'revert to old datastream',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'search and replace with xquery'.
  $permissions['search and replace with xquery'] = array(
    'name' => 'search and replace with xquery',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_xquery',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'search islandora solr'.
  $permissions['search islandora solr'] = array(
    'name' => 'search islandora solr',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'islandora_solr',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'share islandora bookmarks'.
  $permissions['share islandora bookmarks'] = array(
    'name' => 'share islandora bookmarks',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_bookmark',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node_export',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use islandora find & replace'.
  $permissions['use islandora find & replace'] = array(
    'name' => 'use islandora find & replace',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_find_replace',
  );

  // Exported permission: 'use islandora_bookmark'.
  $permissions['use islandora_bookmark'] = array(
    'name' => 'use islandora_bookmark',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'islandora_bookmark',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format islandora_solr_metadata_filtered_html'.
  $permissions['use text format islandora_solr_metadata_filtered_html'] = array(
    'name' => 'use text format islandora_solr_metadata_filtered_html',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'view datastreams'.
  $permissions['view datastreams'] = array(
    'name' => 'view datastreams',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'view fedora repository objects'.
  $permissions['view fedora repository objects'] = array(
    'name' => 'view fedora repository objects',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'view marcxml output'.
  $permissions['view marcxml output'] = array(
    'name' => 'view marcxml output',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_marcxml',
  );

  // Exported permission: 'view objects'.
  $permissions['view objects'] = array(
    'name' => 'view objects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_rest',
  );

  // Exported permission: 'view old datastream versions'.
  $permissions['view old datastream versions'] = array(
    'name' => 'view old datastream versions',
    'roles' => array(
      'Content Contributor' => 'Content Contributor',
      'Submissions Reviewer' => 'Submissions Reviewer',
      'administrator' => 'administrator',
    ),
    'module' => 'islandora',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view technical metadata'.
  $permissions['view technical metadata'] = array(
    'name' => 'view technical metadata',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'islandora_fits',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  return $permissions;
}
