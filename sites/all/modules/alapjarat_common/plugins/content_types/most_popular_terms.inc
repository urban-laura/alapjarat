<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Most popular terms'),
  'description' => t('Find most popular terms used most of the times.'),
  'category' => t('Custom Panes'),
  'edit form' => 'alapjarat_common_most_popular_terms_settings',
  'render callback' => 'alapjarat_common_most_popular_terms_render',
  'admin info' => 'alapjarat_common_most_popular_terms_info',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * Edit form.
 */
function alapjarat_common_most_popular_terms_settings($form, &$form_state) {
 $conf = $form_state['conf'];

 $form['count'] = array(
   '#type' => 'textfield',
   '#title' => t('Number of most popular terms'),
   '#default_value' => $conf['count'],
 );

 return $form;
}


/**
 * Edit form submit function.
 */
function alapjarat_common_most_popular_terms_settings_submit($form, &$form_state) {
  $form_state['conf']['count'] = $form_state['values']['count'];
}


function alapjarat_common_most_popular_terms_render($subtype, $conf, $args, $contexts) {
	$block = new stdClass();

	// initial content is blank
	$block->title = t('Archive'); // This will be overridden by the user within the panel options.
	$block->content = alapjarat_common_most_popular_terms();

	return $block;
} 


