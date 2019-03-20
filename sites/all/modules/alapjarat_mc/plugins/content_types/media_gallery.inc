<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Media gallery'),
  'description' => t('Collect images and videos in one place.'),
  'category' => t('Custom Panes'),
  'edit form' => 'alapjarat_mc_media_gallery_settings',
  'render callback' => 'alapjarat_mc_media_gallery_render',
  'admin info' => 'alapjarat_common_most_popular_terms_info',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * Edit form.
 */
function alapjarat_mc_media_gallery_settings($form, &$form_state) {
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
function alapjarat_mc_media_gallery_settings_submit($form, &$form_state) {
  $form_state['conf']['count'] = $form_state['values']['count'];
}


function alapjarat_mc_media_gallery_render($subtype, $conf, $args, $contexts) {
	$block = new stdClass();

	// initial content is blank
	$block->title = t('Archive'); // This will be overridden by the user within the panel options.
	$block->content = alapjarat_mc_media_page();

	return $block;
} 

