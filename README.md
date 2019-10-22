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

### Features description and best practices

Feature sets contained in this repository can be found by navigating to
`admin/structure/features`; they are split up into three major categories:

* Generalized configurations suitable for all sites; these can be found
under the 'Features' section and will contain:
  * Any basic **Node export** components shared by all sites
  * **Strongarm** variables shared by all sites
* Individualized Solr configurations containing search configuration and
metadata display for one site; these can be found under the 'Features' section
and will contain:
  * The full **Islandora Solr Fields Configuration** component
  * The **Islandora Solr Metadata Configurations** component created for that
    site
  * Any **Strongarm** variables Solr requires to function
* Individualized theme configurations; these can be found under the 'Multisite
Theme Features' section and will contain:
  * **Block Contents** and **Block Settings** to define block placement and
    configuration
  * **Node Export** to support various display pieces
  * **Menu Links** and **Menus** to be placed around the site
  * Any **Strongarm** variables the theme requires
  * Any **Views** defined by the site

There is also a basic Solr configuration and basic theme configuration for use
in the case where a site does not have or need a specific configuration.
Otherwise, one of each of the latter two types of features exists per site.

No permissions features are defined by default. **Roles must be finalized before
exporting permissions as features** as collisions can occur when re-importing
them. To state the importance of this plainly: re-importing permissions after
making changes to roles can and will remove permissions from people who had
them, and give permissions to people who did not. **Do not re-export permission
features after making changes to roles**.

This includes exporting and re-exporting Solr field and metadata configurations,
as these contain permissions to view and work with Solr fields.
