<?php

/**
 * @file
 * Theme override for the basic structure of a single Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 * - $amp-skip_link: Markup for skip link.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?><!doctype html>
<html amp lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>">
  <head>
    <meta charset="utf-8">
    <title><?php print $head_title; ?></title>
    <?php print $head; ?>
    <?php include $amptheme_path_file . '/templates/amp-css/amp-boilerplate-styles-min.inc' ?>
    <?php if (!empty($ampsubtheme_path_file)): ?>
      <style amp-custom>
        <?php include $ampsubtheme_path_file . '/css/amp-custom-styles.css' ?>
      </style>
    <?php endif; ?>
    <script async src="https://cdn.ampproject.org/v0.js"></script>
  </head>
  <body class="<?php print $classes; ?>" <?php print $attributes;?>>
    <?php if (!empty($amp_skip_link)): ?>
      <?php print render($amp_skip_link); ?>
    <?php endif; ?>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
  </body>
</html>
