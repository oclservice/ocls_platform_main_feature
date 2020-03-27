# OCLS Platform Main Feature

## Introduction

This repository contains both the generalized configurations required for all
OCLS sites, as well as several specific configurations required for individual
sites.

## Requirements

This module requires the following modules/libraries:

* [Features](https://www.drupal.org/project/features)

Additionally, individual submodules may have their own requirements based on
what they work with.

## Installation

Install as usual, see [this](https://drupal.org/documentation/install/modules-themes/modules-7) for further information.

## Troubleshooting/Issues

Having problems or solved a problem? Contact [discoverygarden](http://support.discoverygarden.ca).

## Maintainers/Sponsors

Current maintainers:

* [discoverygarden](http://www.discoverygarden.ca)

## Development

### Rules of the road

**Features code should not be directly modified**; rather:

* Make your changes on the site itself
* Notify [discoverygarden](http://support.discoverygarden.ca) so that these
changes can be reviewed to be exported as features, so that configuration drift
does not occur on the site.

### Features description

Feature sets contained in this repository can be found by navigating to
`admin/structure/features`; they are split up into four major categories:

* Generalized configurations suitable for all sites, including:
  * `ocls_basesite_suggester_config`, which contains the configuration for the
    Islandora Solr Suggester module, which is identical on all sites.
  * `ocls_theme_modifications`, which contains views overrides shared across all
    sites.
  * `ocls_platform_content_types`, which contains configurations for content types
     and content fields.
* Individualized Solr configurations containing search configuration and
metadata display for one site; these all use the naming convention
`ocls_SITE_solr_metadata_config`, can be found under the 'OCLS <site> Site
 Features' section, and include:
  * The full **Islandora Solr Fields Configuration** component defining the
    field display, sort fields, facets, and advanced search fields used by
    Islandora Solr.
  * The **Islandora Solr Metadata Configurations** component created for that
    site, which defines the fields that display on object view pages.
  * Any **Strongarm** variables Solr requires to function; these are typically
    variables defined by the Islandora Solr module (such as the Solr facet limit
    or the number of results to display), and the names of these variables will
    typically be prefixed by `islandora_solr_` or `islandora_solr_metadata_`.
* Individualized theme configurations; these use the naming convention.
`ocls_SITE_theme_feature`, can be found under the 'OCLS <site> Site Features'
section, and will contain:
  * **Block Contents** and **Block Settings** to define block placement and
    configuration.
  * **Node Export** to support various display pieces specific to that site.
  * Some **Menu Links** and **Menus** to be placed around the site.
  * Any **Strongarm** variables the theme requires.
  * Some **Views** defined by the site.
* Individualized miscellaneous configurations; these use the naming convention `ocls_SITE_main_feature`, can be found under the 'OCLS <site> Site Features' section, and contain a variety of configurations. Some elements in these features could make more sense as part of the theme features, but they got bundled in with the main feature initially, and just haven't had a reason to be separated out; probably in an effort to keep the theme features relatively low maintenance and simple. Grouping configuration in a feature is like sorting file storage: there are various approaches, with very few hard limitations, so it can be as granular as it needs to be.

There is also a basic Solr configuration and basic theme configuration for use
in the case where a site does not have or need a specific configuration.
Otherwise, one of each of the latter two types of features exists per site.

### Best practices

**The Solr configurations should be considered off-limits**; these
configurations are volatile, and the `discoverygarden_features_safety` module
should be turned on to avoid changes to these.

No permissions features are defined by default. **Roles must be finalized before
exporting permissions as features** as collisions can occur when re-importing
them. To state the importance of this plainly: if roles are added, removed, or
otherwise moved, and permissions are changed, exporting permissions in a feature
and then importing them later can and will remove permissions from people who
had them, and give permissions to people who did not. **Changes to permissions
and roles should be done in communication with discoverygarden**. Enabling
`discoverygarden_features_safety` will prevent users from being able to make
changes to permissions, mitigating this issue.

Exporting and re-exporting Solr field and metadata configurations also has
permissions implications, as they contain permissions to view and work with Solr
fields. `discoverygarden_features_safety` should ensure both of these remain
intact.
