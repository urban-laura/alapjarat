# ExAMPle Subtheme

This ExAMPle Subtheme serves as a demonstration for how you can provide
a subtheme that extends the AMP Base theme to provide custom styles.

Please refer to the README at the root of amptheme for full installation
instructions to get your site ready for AMP.

To create your own custom subtheme, make sure to do the following
additional steps beyond what you would normally do to create a subtheme:

- Create a theme that has the value of `base theme =` set to `amptheme`.
  This lets the AMP Base theme provide markup defaults that carry
  through to a custom theme.
- In template.php, you need the following preprocess function:

  `/**
    * Preprocess all templates.
    */
   function amptheme_preprocess(&$vars, $hook) {
     $vars['ampsubtheme_path_file'] = DRUPAL_ROOT . '/' .
       drupal_get_path('theme', YOUR_THEME_MACHINE_NAME);
   }`
   
  Make sure to replace YOUR_THEME_MACHINE_NAME with the name of your
  custom subtheme with single quotes on either side. See the
  `template.php` file in `ampsubtheme_example` to see how to do this.
- In your custom theme directory, create a directory named `css`.
- Add a file named `amp-custom-styles.css` to your `css` directory.
- Custom CSS can be placed into the `amp-custom-styles.css` file.

Make sure to follow guidelines at https://www.ampproject.org/ on allowed
styles and markup in order to have valid HTML. Please note that CSS and
JS added through drupal_add_css, drupal_add_js, #attached
keys on render arrays, or the .info file will not be loaded on
AMP-enabled pages

Install your custom theme and set it as the theme that will be used on
AMP-enabled pages at `/admin/config/content/amp`: the AMP module must be
installed to view this configuration page.

## Provide feedback
- This theme and the associated module and library are still in development.
  Try them out! We welcome your feedback.

## Sponsored by
- Google for creating the AMP Project and sponsoring development
- Lullabot for development of the module, theme, and library to work with the
  specifications

## Current maintainer:
- Marc Drummond - https://www.drupal.org/u/mdrummond
