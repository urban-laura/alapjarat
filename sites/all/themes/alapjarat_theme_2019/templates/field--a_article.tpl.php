<?php

/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used by Drupal core, which uses theme functions instead for
 * performance reasons. The markup is the same, though, so if you want to use
 * template files rather than functions to extend field theming, copy this to
 * your custom theme. See theme_field() for a discussion of performance.
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
?>
<!--
This file is not used by Drupal core, which uses theme functions instead.
See http://api.drupal.org/api/function/theme_field/7 for details.
After copying this file to your theme's folder and customizing it, remove this
HTML comment.
-->

<?php
	// <meta property='article:author' content='https://www.facebook.com/YOUR-NAME' />
	$head_content = drupal_add_html_head();
	if (!isset($head_content['article:author'])) {
		$author = taxonomy_term_load($element['#object']->field_published[LANGUAGE_NONE][0]['tid']);
		if (!empty($author->field_facebook_id)) {
			$meta = array(
			  '#tag' => 'meta',
			  '#attributes' => array(
			    'property' => 'article:author',
			    'content' => $author->field_facebook_id[LANGUAGE_NONE][0]['value'],
			  ),
			);
			drupal_add_html_head($meta, 'article:author');

			$meta = array(
			  '#tag' => 'meta',
			  '#attributes' => array(
			    'property' => 'article:publisher',
			    'content' => 'https://www.facebook.com/alapjarat',
			  ),
			);
			drupal_add_html_head($meta, 'article:publisher');

		}
    }

?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>>

      	<?php
		if ($element['#field_name'] == 'field_title2') {
	        print('<h1>');
	    }
	    if ($element['#field_name'] == 'field_subtitled') {
	      	print('<h2>');
	    }

	    if ($element['#field_name'] == 'field_text') {
	      $item = render($item);
	      if (module_exists('alapjarat_common')) {
	        $item = alapjarat_common_find_glossary(render($item), $element['#object']);
	      }

	      if (!empty($element['#object']->field_quiz)) {
	        $item .= $element['#object']->field_quiz[LANGUAGE_NONE][0]['value'];
	      }

	      if (!empty($element['#object']->field_wp_post_id)) {
	        $item = alapjarat_common_embed_youtube(render($item));
	        $item = alapjarat_common_embed_fb_videos(render($item));
	        $item = alapjarat_common_embed_instagram(render($item));
	      }
	    }



	    print render($item); 

	    if ($element['#field_name'] == 'field_subtitled') {
	      	print('</h2>');
	      }
	      	
	    if ($element['#field_name'] == 'field_title2') {
	        print('</h1>');
     	}


      	?></div>

    <?php endforeach; ?>
  </div>
</div>
