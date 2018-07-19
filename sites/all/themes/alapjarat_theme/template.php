<?php

/**
 * @file
 * Here we override the default HTML output of drupal.
 *
 * Refer to https://drupal.org/node/457740.
 */

// Auto-rebuild the theme registry during theme development.
if (theme_get_setting('clear_registry')) {
  // Rebuild .info data.
  system_rebuild_theme_data();
  // Rebuild theme registry.
  drupal_theme_rebuild();
}

// Add Zen Tabs styles.
if (theme_get_setting('alapjarat_theme_tabs')) {
  drupal_add_css(drupal_get_path('theme', 'alapjarat_theme') . '/css/tabs.css');
}

/**
 * Implements hook_preprocess_html().
 */
function alapjarat_theme_preprocess_html(&$variables) {
  global $user, $language;

  // Add role name classes (to allow css based show for admin/hidden from user).
  foreach ($user->roles as $role) {
    $variables['classes_array'][] = 'role-' . alapjarat_theme_id_safe($role);
  }

  // HTML Attributes
  // Use a proper attributes array for the html attributes.
  $variables['html_attributes'] = array();
  $variables['html_attributes']['lang'][] = $language->language;
  $variables['html_attributes']['dir'][] = $language->dir;

  // Convert RDF Namespaces into structured data using drupal_attributes.
  $variables['rdf_namespaces'] = array();
  if (function_exists('rdf_get_namespaces')) {
    foreach (rdf_get_namespaces() as $prefix => $uri) {
      $prefixes[] = $prefix . ': ' . $uri;
    }
    $variables['rdf_namespaces']['prefix'] = implode(' ', $prefixes);
  }

  // Flatten the HTML attributes and RDF namespaces arrays.
  $variables['html_attributes'] = drupal_attributes($variables['html_attributes']);
  $variables['rdf_namespaces'] = drupal_attributes($variables['rdf_namespaces']);

  if (!$variables['is_front']) {
    // Add unique classes for each page and website section.
    $path = drupal_get_path_alias($_GET['q']);
    list($section,) = explode('/', $path, 2);
    $variables['classes_array'][] = 'with-subnav';
    $variables['classes_array'][] = alapjarat_theme_id_safe('page-' . $path);
    $variables['classes_array'][] = alapjarat_theme_id_safe('section-' . $section);

    if (arg(0) == 'node') {
      if (arg(1) == 'add') {
        if ($section == 'node') {
          // Remove 'section-node'.
          array_pop($variables['classes_array']);
        }
        // Add 'section-node-add'.
        $variables['classes_array'][] = 'section-node-add';
      }
      elseif (is_numeric(arg(1)) && (arg(2) == 'edit' || arg(2) == 'delete')) {
        if ($section == 'node') {
          // Remove 'section-node'.
          array_pop($variables['classes_array']);
        }
        // Add 'section-node-edit' or 'section-node-delete'.
        $variables['classes_array'][] = 'section-node-' . arg(2);
      }
    }
  }
  // For normal un-themed edit pages.
  if ((arg(0) == 'node') && (arg(2) == 'edit')) {
    $variables['template_files'][] = 'page';
  }

  // Add IE classes.
  if (theme_get_setting('alapjarat_theme_ie_enabled')) {
    $alapjarat_theme_ie_enabled_versions = theme_get_setting('alapjarat_theme_ie_enabled_versions');
    if (in_array('ie8', $alapjarat_theme_ie_enabled_versions, TRUE)) {
      drupal_add_css(path_to_theme() . '/css/ie8.css', array(
        'group' => CSS_THEME,
        'browsers' => array('IE' => 'IE 8', '!IE' => FALSE),
        'preprocess' => FALSE,
      ));
      drupal_add_js(path_to_theme() . '/js/build/selectivizr-min.js');
    }
    if (in_array('ie9', $alapjarat_theme_ie_enabled_versions, TRUE)) {
      drupal_add_css(path_to_theme() . '/css/ie9.css', array(
        'group' => CSS_THEME,
        'browsers' => array('IE' => 'IE 9', '!IE' => FALSE),
        'preprocess' => FALSE,
      ));
    }
  }

  $elements[] = array(
    'name' => 'google_font_montserrat', 
    'data' => array(
      '#tag' => 'link', // The #tag is the html tag - 
      '#attributes' => array( // Set up an array of attributes inside the tag
        'href' => 'https://fonts.googleapis.com/css?family=Montserrat', 
        'rel' => 'stylesheet',
        'type' => 'text/css',
      ),
  ));

  $elements[] = array(
    'name' => 'font_awesome', 
    'data' => array(
      '#tag' => 'link', // The #tag is the html tag - 
      '#attributes' => array( // Set up an array of attributes inside the tag
        'href' => 'https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css', 
        'rel' => 'stylesheet',
        'type' => 'text/css',
      ),
  ));
  
  foreach ($elements as $element) {
    drupal_add_html_head($element['data'], $element['name']);
  }
  
}

/**
 * Implements hook_preprocess_page().
 */
function alapjarat_theme_preprocess_page(&$variables, $hook) {
  if (isset($variables['node_title'])) {
    $variables['title'] = $variables['node_title'];
  }
  // Adding classes whether #navigation is here or not.
  if (!empty($variables['main_menu']) or !empty($variables['sub_menu'])) {
    $variables['classes_array'][] = 'with-navigation';
  }
  if (!empty($variables['secondary_menu'])) {
    $variables['classes_array'][] = 'with-subnav';
  }

  // Add first/last classes to node listings about to be rendered.
  if (isset($variables['page']['content']['system_main']['nodes'])) {
    // All nids about to be loaded (without the #sorted attribute).
    $nids = element_children($variables['page']['content']['system_main']['nodes']);
    // Only add first/last classes if there is more than 1 node being rendered.
    if (count($nids) > 1) {
      $first_nid = reset($nids);
      $last_nid = end($nids);
      $first_node = $variables['page']['content']['system_main']['nodes'][$first_nid]['#node'];
      $first_node->classes_array = array('first');
      $last_node = $variables['page']['content']['system_main']['nodes'][$last_nid]['#node'];
      $last_node->classes_array = array('last');
    }
  }

  // Allow page override template suggestions based on node content type.
  if (isset($variables['node']->type) && isset($variables['node']->nid)) {
    $variables['theme_hook_suggestions'][] = 'page__' . $variables['node']->type;
    $variables['theme_hook_suggestions'][] = "page__node__" . $variables['node']->nid;
  }
}

/**
 * Implements hook_preprocess_node().
 */
function alapjarat_theme_preprocess_node(&$variables) {
  // Add a striping class.
  $variables['classes_array'][] = 'node-' . $variables['zebra'];

  // Add $unpublished variable.
  $variables['unpublished'] = (!$variables['status']) ? TRUE : FALSE;

  // Merge first/last class (from alapjarat_theme_preprocess_page) into classes array of
  // current node object.
  $node = $variables['node'];
  if (!empty($node->classes_array)) {
    $variables['classes_array'] = array_merge($variables['classes_array'], $node->classes_array);
  }
}

/**
 * Implements hook_preprocess_block().
 */
function alapjarat_theme_preprocess_block(&$variables) {
  // Add a zebra striping class.
  $variables['classes_array'][] = 'block-' . $variables['block_zebra'];

  // Add first/last block classes.
  // If block id (count) is 1, it's first in region.
  if ($variables['block_id'] == '1') {
    $variables['classes_array'][] = 'first';
  }
  // Count amount of blocks about to be rendered in the same region.
  $block_count = count(block_list($variables['elements']['#block']->region));
  if ($variables['block_id'] == $block_count) {
    $variables['classes_array'][] = 'last';
  }

  // Add simple classes.
  $variables['classes_array'][] = 'block';
}

/**
 * Implements theme_breadcrumb().
 */
function alapjarat_theme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  // Determine if we are to display the breadcrumb.
  $show_breadcrumb = theme_get_setting('alapjarat_theme_breadcrumb');
  if ($show_breadcrumb == 'yes' || $show_breadcrumb == 'admin' && arg(0) == 'admin') {

    // Optionally get rid of the homepage link.
    $show_breadcrumb_home = theme_get_setting('alapjarat_theme_breadcrumb_home');
    if (!$show_breadcrumb_home) {
      array_shift($breadcrumb);
    }

    // Return the breadcrumb with separators.
    if (!empty($breadcrumb)) {
      $breadcrumb_separator = theme_get_setting('alapjarat_theme_breadcrumb_separator');
      $trailing_separator = $title = '';
      if (theme_get_setting('alapjarat_theme_breadcrumb_title')) {
        $item = menu_get_item();
        if (!empty($item['tab_parent'])) {
          // If we are on a non-default tab, use the tab's title.
          $title = check_plain($item['title']);
        }
        else {
          $title = drupal_get_title();
        }
        if ($title) {
          $trailing_separator = $breadcrumb_separator;
        }
      }
      elseif (theme_get_setting('alapjarat_theme_breadcrumb_trailing')) {
        $trailing_separator = $breadcrumb_separator;
      }

      // Provide a navigational heading to give context for breadcrumb links to
      // screen-reader users. Make the heading invisible with
      // .element-invisible.
      $heading = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

      return $heading . '<div class="breadcrumb">' . implode($breadcrumb_separator, $breadcrumb) . $trailing_separator . $title . '</div>';
    }
  }
  // Otherwise, return an empty string.
  return '';
}

/**
 * Converts a string to a suitable html ID attribute.
 *
 * Http://www.w3.org/TR/html4/struct/global.html#h-7.5.2 specifies what makes a
 * valid ID attribute in HTML. This function:
 *
 * - Ensure an ID starts with an alpha character by optionally adding an 'n'.
 * - Replaces any character except A-Z, numbers, and underscores with dashes.
 * - Converts entire string to lowercase.
 *
 * @param string $string
 *   The string.
 *
 * @return string
 *   The converted string.
 */
function alapjarat_theme_id_safe($string) {
  // Replace with dashes anything that isn't A-Z, numbers, dashes, or
  // underscores.
  $string = strtolower(preg_replace('/[^a-zA-Z0-9_-]+/', '-', $string));
  // If the first character is not a-z, add 'n' in front.
  // Don't use ctype_alpha since its locale aware.
  if (!ctype_lower($string{0})) {
    $string = 'id' . $string;
  }
  return $string;
}

/**
 * Implements theme_menu_link().
 */
function alapjarat_theme_menu_link(array $variables) {
  $element = $variables['element'];
 
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  // Adding a class depending on the TITLE of the link (not constant)
  $element['#attributes']['class'][] = alapjarat_theme_id_safe($element['#title']);
  // Adding a class depending on the ID of the link (constant)
  if (isset($element['#original_link']['mlid']) && !empty($element['#original_link']['mlid'])) {
    $element['#attributes']['class'][] = 'mid-' . $element['#original_link']['mlid'];
  }
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Implements hook_preprocess_menu_local_task().
 */
function alapjarat_theme_preprocess_menu_local_task(&$variables) {
  $link =& $variables['element']['#link'];

  // If the link does not contain HTML already, check_plain() it now.
  // After we set 'html'=TRUE the link will not be sanitized by l().
  if (empty($link['localized_options']['html'])) {
    $link['title'] = check_plain($link['title']);
  }
  $link['localized_options']['html'] = TRUE;
  $link['title'] = '<span class="tab ' . drupal_html_class('task-' . $link['title']) . '">' . $link['title'] . '</span>';
}

/**
 * Implements theme_menu_local_tasks().
 *
 * Duplicate of theme_menu_local_tasks() but adds clearfix to tabs.
 */
function alapjarat_theme_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary clearfix">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary clearfix">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }

  return $output;
}

function alapjarat_theme_page_alter(&$page)
{
  if (arg(0) == 'search')
  {
    dpm($page);
    if (!empty($page['content']['system_main']['search_form']))
    {
      hide($page['content']['system_main']['search_form']);
    }
  }
}