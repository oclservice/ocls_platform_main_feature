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

* Navigate to `admin/structure/features` on the site from which you wish to
export a configuration
* Take a look for **Overridden** or **Needs Review** features - these are ones
that have (likely) been modified in some way. You can click on each feature to
view what's in it.
* On that feature's configuration page, either check off individual parts of the
configuration and **Revert components** to revert parts of the configuration, or
click the **RECREATE** tab to re-export the configuration
* On the **RECREATE** tab, click **Download feature** to grab a copy of the
configuration as it currently exists on the site. This will give you a module
(in a `.tar` file) representing that feature.
* Extract the module from the `.tar` file and use the extracted folder to
overwrite the folder of the same name in this repository
  * Doing this should likely follow `git` best practices, i.e., fork this
    repository, make your changes locally, make a pull request back to the
    source fork, and have someone review and merge
* Once the updates are made to this repository, `git pull` the copy on the
server
* Either run `drush fr FEATURE_NAME` on the server, where `FEATURE_NAME` is the
name of the feature you re-exported, or from the admin interface for the site
you want to update, navigate to `admin/structure/features`, click on the feature
you want to update, check off all the components, and click **Revert
components**
  * Of note with this: the status of features is site-dependent (e.g., a feature
could be enabled on 5 sites, or only 1). Drush will run against an individual
site if done from within that site folder, but in general, it's safest to revert
features from the admin interface for the site you're working on.

### Features description

Feature sets contained in this repository can be found by navigating to
`admin/structure/features`; they are split up into three major categories:

* Generalized configurations suitable for all sites, including:
  * `ocls_basesite_suggester_config`, which contains the configuration for the
    Islandora Solr Suggester module, which is identical on all sites
  * `ocls_basic_pages`, which contains **Node export** components shared by all
    sites
  * `ocls_main_theme_feature`, which contains components that are shared by each
    site theme (so that they are not duplicated multiple times in each theme
    feature)
  * `ocls_theme_modifications`, which contains views overrides shared across all
    sites
* Individualized Solr configurations containing search configuration and
metadata display for one site; these all use the naming convention
`ocls_SITE_solr_metadata_config`, and include:
  * The full **Islandora Solr Fields Configuration** component defining the
    field display, sort fields, facets, and advanced search fields used by
    Islandora Solr
  * The **Islandora Solr Metadata Configurations** component created for that
    site, which defines the fields that display on object view pages
  * Any **Strongarm** variables Solr requires to function; these are typically
    variables defined by the Islandora Solr module (such as the Solr facet limit
    or the number of results to display), and the names of these variables will
    typically be prefixed by `islandora_solr_` or `islandora_solr_metadata_`.
* Individualized theme configurations; these use the naming convention
`ocls_SITE_theme_feature`, can be found under the 'Multisite Theme Features'
section, and will contain:
  * **Block Contents** and **Block Settings** to define block placement and
    configuration
  * **Node Export** to support various display pieces specific to that site
  * **Menu Links** and **Menus** to be placed around the site
  * Any **Strongarm** variables the theme requires
  * Any **Views** defined by the site

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
