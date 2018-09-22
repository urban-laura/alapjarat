# AMP Drupal theme

## Requirements
* [AMP Module](https://www.drupal.org/project/amp)
* [AMP PHP Library](https://github.com/Lullabot/amp-library)

## Suggested 
* [Composer Manager](https://www.drupal.org/project/composer_manager)

## Introduction
The AMP theme works together with the AMP module
(https://www.drupal.org/project/amp) and AMP library
(https://github.com/Lullabot/amp-library) to convert Drupal pages into
pages that comply with the AMP standard (https://www.ampproject.org/).

This project includes the AMP Base theme, which handles markup changes
needed for all AMP-based themes, and the ExAMPle Subtheme, which shows
how to set custom styles with AMP. The ExAMPle theme extends the AMP
Base theme. You can create your own subtheme that extends the AMP Base
theme to create a custom design for the AMP pages on your site.

## Initial setup
- Download the AMP theme to your site: place it in the `themes`
  directory, typically within your `sites\all` directory, optionally
  within a  `contrib` subdirectory.
- Install the AMP Base theme and optionally the ExAMPle Subtheme: you
  could also choose to install a custom subtheme. The AMP module will
  try to set the ExAMPle Subtheme as the default AMP theme, if it is
  installed.
- Follow the instructions at `https://www.drupal.org/project/amp` to
  download and install the AMP module and the associated AMP library.
  Then follow the instructions to configure your site for AMP. Without
  doing so, the AMP theme will not provide valid AMP-compliant markup.
- Once the AMP module has been installed, select your preferred theme
  for AMP pages at `/admin/config/content/amp`.
- Make sure to go to `/admin/structure/block/list/{AMP-THEME-NAME}`
  in order to set up the blocks for the AMP page.

## Viewing AMP pages
- Once configured, the AMP module, AMP library and AMP theme work
  together to provide valid AMP markup for nodes with AMP-enabled
  content types at paths with `?amp` at the end of the URL. If a query
  string already exists for a page, adding `&amp` somewhere after the
  existing `?` will also work.

## Provide feedback
- This theme and the associated module and library are still in development.
  Try them out! We welcome your feedback.

## Sponsored by
- Google for creating the AMP Project and sponsoring development
- Lullabot for development of the module, theme, and library to work with the
  specifications

## Current maintainer:
- Marc Drummond - https://www.drupal.org/u/mdrummond
