<?php

/**
 * @file
 * Theme override to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $logo_height: The height of the logo image, if available.
 * - $logo_width: The width of the logo image, if available.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['content']: The main content of the current page.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>

<div id="page-wrapper"><div id="page">

    <header role="banner" id="header" class="amp-header"><div class="section clearfix">
      <div class="amp-header__content">
        <div class="site-branding clearfix">
          <?php if ($logo && $logo_height && $logo_width): ?>
            <a class="site-branding__logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
              <amp-img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"
                height="<?php print $logo_height; ?>" width = "<?php print $logo_width; ?>"
                layout="responsive"></amp-img>
            </a>
          <?php endif; ?>

          <?php if ($site_name || $site_slogan): ?>
            <div class="site-branding__text" id="name-and-slogan">
              <?php if ($site_name): ?>
                <?php if ($title): ?>
                  <div class="site-branding__name" id="site-name"><strong>
                      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
                    </strong></div>
                <?php else: /* Use h1 when the content title is empty */ ?>
                  <h1 class="site-branding__name" id="site-name">
                    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
                  </h1>
                <?php endif; ?>
              <?php endif; ?>

              <?php if ($site_slogan): ?>
                <div class="site-branding__slogan" id="site-slogan"><?php print $site_slogan; ?></div>
              <?php endif; ?>
            </div> <!-- /#name-and-slogan -->
          <?php endif; ?>
        </div>

        <?php print render($page['header']); ?>

      </div>
    </div></header> <!-- /.section, /#header -->

    <div id="main-wrapper"><main role="main" id="main" class="amp-main clearfix">

        <div id="content" class="amp-main__content column"><div class="section">
            <?php print $messages; ?>

            <a id="main-content"></a>
            <?php print render($title_prefix); ?>
            <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
            <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
            <?php print render($page['content']); ?>
          </div></div> <!-- /.section, /#content -->

      </main></div> <!-- /#main, /#main-wrapper -->

    <footer class="amp-footer" role="contentinfo" id="footer"><div class="amp-footer__content section">
        <?php print render($page['footer']); ?>
      </div></footer> <!-- /.section, /#footer -->

  </div></div> <!-- /#page, /#page-wrapper -->
