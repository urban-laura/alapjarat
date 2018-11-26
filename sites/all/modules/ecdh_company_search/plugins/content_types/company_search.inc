<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Company search with ECDH API'),
  'description' => t('Search ECDH company database by ECDH API.'),
  'category' => t('Custom Panes'),
  'edit form' => 'ecdh_company_search_company_search_settings',
  'render callback' => 'ecdh_company_search_company_search_render',
  'admin info' => 'ecdh_company_search_company_search_info',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * Edit form.
 */
function ecdh_company_search_company_search_settings($form, &$form_state) {
 $conf = $form_state['conf'];

 $form['count'] = array(
   '#type' => 'textfield',
   '#title' => t('Whatever'),
   '#default_value' => $conf['whatever'],
 );

 return $form;
}


/**
 * Edit form submit function.
 */
function ecdh_company_search_company_search_settings_submit($form, &$form_state) {
  $form_state['conf']['whatever'] = $form_state['values']['whatever'];
}


function ecdh_company_search_company_search_render($subtype, $conf, $args, $contexts) {
	$block = new stdClass();

	// initial content is blank
	$block->title = t('Company search'); // This will be overridden by the user within the panel options.
	$block->content = drupal_get_form('ecdh_company_search_form');

	return $block;
} 


