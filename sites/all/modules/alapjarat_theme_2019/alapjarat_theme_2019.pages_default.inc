<?php
/**
 * @file
 * alapjarat_theme_2019.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function alapjarat_theme_2019_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__article_2019';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Article_2019',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Taxonómia kifejezés from Tartalom (on Tartalom: Published [field_published])',
        'keyword' => 'taxonomy_term',
        'name' => 'entity_from_field:field_published-node-taxonomy_term',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node edit form from node',
        'keyword' => 'node_form',
        'name' => 'node_edit_form_from_node',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => 'article_2019',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'a_article' => 'a_article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'alapjarat_theme_2019',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'node_pane',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd01002e5-a6cd-4b74-9c05-c5f1542121bd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__article_2019';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-771a85da-dccb-4c03-9b86-354f110fb632';
  $pane->panel = 'center';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '771a85da-dccb-4c03-9b86-354f110fb632';
  $display->content['new-771a85da-dccb-4c03-9b86-354f110fb632'] = $pane;
  $display->panels['center'][0] = 'new-771a85da-dccb-4c03-9b86-354f110fb632';
  $pane = new stdClass();
  $pane->pid = 'new-f9b8d36d-6b73-478d-86c1-efec89da0ec5';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f9b8d36d-6b73-478d-86c1-efec89da0ec5';
  $display->content['new-f9b8d36d-6b73-478d-86c1-efec89da0ec5'] = $pane;
  $display->panels['center'][1] = 'new-f9b8d36d-6b73-478d-86c1-efec89da0ec5';
  $pane = new stdClass();
  $pane->pid = 'new-1afacd9d-cf30-4199-ab76-f0dbd4ceab3b';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_title2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1afacd9d-cf30-4199-ab76-f0dbd4ceab3b';
  $display->content['new-1afacd9d-cf30-4199-ab76-f0dbd4ceab3b'] = $pane;
  $display->panels['center'][2] = 'new-1afacd9d-cf30-4199-ab76-f0dbd4ceab3b';
  $pane = new stdClass();
  $pane->pid = 'new-0361bf6b-5a2e-48ad-9c4a-c222baccfd8e';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'author_picture',
      'image_link' => 'content',
    ),
    'context' => 'relationship_entity_from_field:field_published-node-taxonomy_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0361bf6b-5a2e-48ad-9c4a-c222baccfd8e';
  $display->content['new-0361bf6b-5a2e-48ad-9c4a-c222baccfd8e'] = $pane;
  $display->panels['center'][3] = 'new-0361bf6b-5a2e-48ad-9c4a-c222baccfd8e';
  $pane = new stdClass();
  $pane->pid = 'new-fead48ef-1d12-41ce-976b-42d1543a1f11';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_published';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'fead48ef-1d12-41ce-976b-42d1543a1f11';
  $display->content['new-fead48ef-1d12-41ce-976b-42d1543a1f11'] = $pane;
  $display->panels['center'][4] = 'new-fead48ef-1d12-41ce-976b-42d1543a1f11';
  $pane = new stdClass();
  $pane->pid = 'new-d0cdd85e-e4c4-4699-b007-d28cb0ecd8d3';
  $pane->panel = 'center';
  $pane->type = 'token';
  $pane->subtype = 'node:published';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Közzétéve:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'd0cdd85e-e4c4-4699-b007-d28cb0ecd8d3';
  $display->content['new-d0cdd85e-e4c4-4699-b007-d28cb0ecd8d3'] = $pane;
  $display->panels['center'][5] = 'new-d0cdd85e-e4c4-4699-b007-d28cb0ecd8d3';
  $pane = new stdClass();
  $pane->pid = 'new-9354d871-2863-49fb-8ff1-a840d9250d15';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Youtube Subscriber',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<script src="https://apis.google.com/js/platform.js"></script>
<div class="g-ytsubscribe" data-channelid="UCueleOZ2QFAaVSHXheZlFig" data-layout="default" data-count="default"></div>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'youtube',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '9354d871-2863-49fb-8ff1-a840d9250d15';
  $display->content['new-9354d871-2863-49fb-8ff1-a840d9250d15'] = $pane;
  $display->panels['center'][6] = 'new-9354d871-2863-49fb-8ff1-a840d9250d15';
  $pane = new stdClass();
  $pane->pid = 'new-3febc495-5010-436c-9e9c-2d5d79305e23';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Facebook like and share',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="fb-like" data-href="%node:url" data-layout="button_count" data-action="like" data-size="small" data-show-faces="false" data-share="false"></div>
<div class="fb-share-button" data-href="%node:url" data-layout="button" data-size="small" data-mobile-iframe="true"><a target="_blank" href="https://www.facebook.com/sharer/sharer.php?u=https%3A%2F%2Fdevelopers.facebook.com%2Fdocs%2Fplugins%2F&amp;src=sdkpreparse" class="fb-xfbml-parse-ignore">Megosztás</a></div>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'fb-like-share',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '3febc495-5010-436c-9e9c-2d5d79305e23';
  $display->content['new-3febc495-5010-436c-9e9c-2d5d79305e23'] = $pane;
  $display->panels['center'][7] = 'new-3febc495-5010-436c-9e9c-2d5d79305e23';
  $pane = new stdClass();
  $pane->pid = 'new-2f0f4428-94ac-474b-b005-fa5bed80d385';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Facebook save',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="fb-save" data-uri="%node:url" data-size="large"></div>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'fb-save',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '2f0f4428-94ac-474b-b005-fa5bed80d385';
  $display->content['new-2f0f4428-94ac-474b-b005-fa5bed80d385'] = $pane;
  $display->panels['center'][8] = 'new-2f0f4428-94ac-474b-b005-fa5bed80d385';
  $pane = new stdClass();
  $pane->pid = 'new-02db2c16-7fdb-420d-91d9-67de62bc9e24';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_subtitled';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '02db2c16-7fdb-420d-91d9-67de62bc9e24';
  $display->content['new-02db2c16-7fdb-420d-91d9-67de62bc9e24'] = $pane;
  $display->panels['center'][9] = 'new-02db2c16-7fdb-420d-91d9-67de62bc9e24';
  $pane = new stdClass();
  $pane->pid = 'new-6645b1c1-1bc8-4299-827a-f164bc2b48ed';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Banner',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '640x360',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'article-banner',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '6645b1c1-1bc8-4299-827a-f164bc2b48ed';
  $display->content['new-6645b1c1-1bc8-4299-827a-f164bc2b48ed'] = $pane;
  $display->panels['center'][10] = 'new-6645b1c1-1bc8-4299-827a-f164bc2b48ed';
  $pane = new stdClass();
  $pane->pid = 'new-b831b875-bba3-4ce1-ac46-114bbc1082ed';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_text';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'alapjarat-article',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'b831b875-bba3-4ce1-ac46-114bbc1082ed';
  $display->content['new-b831b875-bba3-4ce1-ac46-114bbc1082ed'] = $pane;
  $display->panels['center'][11] = 'new-b831b875-bba3-4ce1-ac46-114bbc1082ed';
  $pane = new stdClass();
  $pane->pid = 'new-ef380c1f-a01f-40b0-b092-93c95ef8fad6';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_source';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Forrás:',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'ef380c1f-a01f-40b0-b092-93c95ef8fad6';
  $display->content['new-ef380c1f-a01f-40b0-b092-93c95ef8fad6'] = $pane;
  $display->panels['center'][12] = 'new-ef380c1f-a01f-40b0-b092-93c95ef8fad6';
  $pane = new stdClass();
  $pane->pid = 'new-ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_gallery';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'juicebox_formatter',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'file_view_mode' => 'default',
      'image_style' => '',
      'jlib_galleryWidth' => '100%',
      'jlib_galleryHeight' => '80%',
      'jlib_backgroundColor' => '#222222',
      'jlib_textColor' => 'rgba(255,255,255,1)',
      'jlib_thumbFrameColor' => 'rgba(255,255,255,.5)',
      'jlib_showOpenButton' => 1,
      'jlib_showExpandButton' => 1,
      'jlib_showThumbsButton' => 1,
      'jlib_useThumbDots' => 0,
      'jlib_useFullscreenExpand' => 1,
      'manual_config' => '',
      'custom_parent_classes' => '',
      'linkurl_source' => '',
      'linkurl_target' => '_blank',
      'incompatible_file_action' => 'show_icon_and_link',
      'thumb_style' => 'juicebox_square_thumbnail',
      'caption_source' => '',
      'title_source' => 'title',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0';
  $display->content['new-ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0'] = $pane;
  $display->panels['center'][13] = 'new-ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0';
  $pane = new stdClass();
  $pane->pid = 'new-2bcc488a-ca6b-443a-ba17-88d14181e34a';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_tagsa';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Címkék:',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = '2bcc488a-ca6b-443a-ba17-88d14181e34a';
  $display->content['new-2bcc488a-ca6b-443a-ba17-88d14181e34a'] = $pane;
  $display->panels['center'][14] = 'new-2bcc488a-ca6b-443a-ba17-88d14181e34a';
  $pane = new stdClass();
  $pane->pid = 'new-b1cff760-1538-4a59-b4db-5ecfb0085e6c';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Facebook comments',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="fb-comments" data-href="%node:url" data-width="100%" data-numposts="5"></div>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = 'b1cff760-1538-4a59-b4db-5ecfb0085e6c';
  $display->content['new-b1cff760-1538-4a59-b4db-5ecfb0085e6c'] = $pane;
  $display->panels['center'][15] = 'new-b1cff760-1538-4a59-b4db-5ecfb0085e6c';
  $pane = new stdClass();
  $pane->pid = 'new-cdcb7403-5eda-4484-b942-c686975717ae';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'article3-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'article4',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = 'cdcb7403-5eda-4484-b942-c686975717ae';
  $display->content['new-cdcb7403-5eda-4484-b942-c686975717ae'] = $pane;
  $display->panels['center'][16] = 'new-cdcb7403-5eda-4484-b942-c686975717ae';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__article_2019'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__front-page-2019';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Default Page 2019',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'front-page-2019',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'amp_request',
          'settings' => NULL,
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'social',
          ),
          'context' => 'argument_string_1',
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'alapjarat_theme_2019',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 9,
          1 => 8,
          2 => 3,
          3 => 2,
          4 => 1,
          5 => 4,
          6 => 5,
          7 => 7,
          8 => 10,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_menu',
          1 => 'search',
        ),
        'parent' => 'main',
        'class' => 'header',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'logo',
          1 => 'banner',
        ),
        'parent' => 'main',
        'class' => 'letterhead',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'second_menu',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'logo' => array(
        'type' => 'region',
        'title' => 'logo',
        'width' => '40',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'banner' => array(
        'type' => 'region',
        'title' => 'Stb.',
        'width' => '60',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 1,
      ),
      'second_menu' => array(
        'type' => 'region',
        'title' => 'Plus',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 1,
      ),
      'main_menu' => array(
        'type' => 'region',
        'title' => 'main menu',
        'width' => '79.99999450748106',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'search' => array(
        'type' => 'region',
        'title' => 'search',
        'width' => '20.000005492518945',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'search',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_content',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'main_content' => array(
        'type' => 'region',
        'title' => 'first',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => 'first',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'e',
        ),
        'parent' => 'main',
        'class' => 'ecdh-api',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'video_block',
        ),
        'parent' => 'main',
        'class' => 'my_footer',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'admin_menu',
          1 => 'user',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'admin_menu' => array(
        'type' => 'region',
        'title' => 'Admin menu',
        'width' => 50,
        'width_type' => '%',
        'parent' => '8',
        'class' => 'editor-menu',
        'hide_empty' => 0,
      ),
      'user' => array(
        'type' => 'region',
        'title' => 'user',
        'width' => 50,
        'width_type' => '%',
        'parent' => '8',
        'class' => 'user_name',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'drupal_message',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'drupal_message' => array(
        'type' => 'region',
        'title' => 'Drupal message',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_content_',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'main_content_' => array(
        'type' => 'region',
        'title' => 'Main content',
        'width' => 50,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'e' => array(
        'type' => 'region',
        'title' => 'ECDH Search Api',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      'video_block' => array(
        'type' => 'region',
        'title' => 'Video block',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'banner' => NULL,
      'logo' => NULL,
      'second_menu' => NULL,
      'main_menu' => NULL,
      'search' => NULL,
      'main_content' => NULL,
      'footer' => NULL,
      'footer_text' => NULL,
      'so' => NULL,
      'time' => NULL,
      'footer_' => NULL,
      'footer_text_' => NULL,
      'banner_' => NULL,
      'admin_menu' => NULL,
      'user' => NULL,
      'drupal_message' => NULL,
      'ecdh_search_api' => NULL,
      'main_content_' => NULL,
      'right' => NULL,
      'e' => NULL,
      'video_block' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd742165c-f337-4e3b-955d-af0e6c0a3a21';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__front-page-2019';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-edab7bbd-e406-40d1-94d1-1aa406b2ff43';
  $pane->panel = 'admin_menu';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-admin-menu';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'my_admin_menu',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'edab7bbd-e406-40d1-94d1-1aa406b2ff43';
  $display->content['new-edab7bbd-e406-40d1-94d1-1aa406b2ff43'] = $pane;
  $display->panels['admin_menu'][0] = 'new-edab7bbd-e406-40d1-94d1-1aa406b2ff43';
  $pane = new stdClass();
  $pane->pid = 'new-eba687b9-9c67-4cd3-a84b-0d000cff9dfb';
  $pane->panel = 'admin_menu';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-writer-menu';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'my_admin_menu',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'eba687b9-9c67-4cd3-a84b-0d000cff9dfb';
  $display->content['new-eba687b9-9c67-4cd3-a84b-0d000cff9dfb'] = $pane;
  $display->panels['admin_menu'][1] = 'new-eba687b9-9c67-4cd3-a84b-0d000cff9dfb';
  $pane = new stdClass();
  $pane->pid = 'new-de8223ae-43c8-480e-a237-9cf0a7d05392';
  $pane->panel = 'drupal_message';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'de8223ae-43c8-480e-a237-9cf0a7d05392';
  $display->content['new-de8223ae-43c8-480e-a237-9cf0a7d05392'] = $pane;
  $display->panels['drupal_message'][0] = 'new-de8223ae-43c8-480e-a237-9cf0a7d05392';
  $pane = new stdClass();
  $pane->pid = 'new-64e87cc0-5355-498b-81f7-28674aa25d77';
  $pane->panel = 'e';
  $pane->type = 'company_search';
  $pane->subtype = 'company_search';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'whatever' => NULL,
    'override_title' => 1,
    'override_title_text' => 'Több mint 30 000  autós<br>szolgáltató közül választhatsz!',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'ecdh-api',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '64e87cc0-5355-498b-81f7-28674aa25d77';
  $display->content['new-64e87cc0-5355-498b-81f7-28674aa25d77'] = $pane;
  $display->panels['e'][0] = 'new-64e87cc0-5355-498b-81f7-28674aa25d77';
  $pane = new stdClass();
  $pane->pid = 'new-8cdf61b2-331e-4559-aa53-586ba40ff595';
  $pane->panel = 'logo';
  $pane->type = 'page_logo';
  $pane->subtype = 'page_logo';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'logo',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8cdf61b2-331e-4559-aa53-586ba40ff595';
  $display->content['new-8cdf61b2-331e-4559-aa53-586ba40ff595'] = $pane;
  $display->panels['logo'][0] = 'new-8cdf61b2-331e-4559-aa53-586ba40ff595';
  $pane = new stdClass();
  $pane->pid = 'new-5c3bc418-9028-4ab9-a45a-01c532d0b312';
  $pane->panel = 'logo';
  $pane->type = 'page_slogan';
  $pane->subtype = 'page_slogan';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5c3bc418-9028-4ab9-a45a-01c532d0b312';
  $display->content['new-5c3bc418-9028-4ab9-a45a-01c532d0b312'] = $pane;
  $display->panels['logo'][1] = 'new-5c3bc418-9028-4ab9-a45a-01c532d0b312';
  $pane = new stdClass();
  $pane->pid = 'new-3a580b48-2727-47af-856f-23a6f3fc14fa';
  $pane->panel = 'main_content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Default page big banner',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '970x250',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'default-page-big-banner',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3a580b48-2727-47af-856f-23a6f3fc14fa';
  $display->content['new-3a580b48-2727-47af-856f-23a6f3fc14fa'] = $pane;
  $display->panels['main_content'][0] = 'new-3a580b48-2727-47af-856f-23a6f3fc14fa';
  $pane = new stdClass();
  $pane->pid = 'new-7b06fd4c-abe6-429a-9da9-cb639ea1b034';
  $pane->panel = 'main_content';
  $pane->type = 'panels_mini';
  $pane->subtype = 'hamburger_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7b06fd4c-abe6-429a-9da9-cb639ea1b034';
  $display->content['new-7b06fd4c-abe6-429a-9da9-cb639ea1b034'] = $pane;
  $display->panels['main_content'][1] = 'new-7b06fd4c-abe6-429a-9da9-cb639ea1b034';
  $pane = new stdClass();
  $pane->pid = 'new-319da000-6189-42d9-828d-ae6039657b7b';
  $pane->panel = 'main_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'one',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '319da000-6189-42d9-828d-ae6039657b7b';
  $display->content['new-319da000-6189-42d9-828d-ae6039657b7b'] = $pane;
  $display->panels['main_content'][2] = 'new-319da000-6189-42d9-828d-ae6039657b7b';
  $pane = new stdClass();
  $pane->pid = 'new-21b2ec35-e1c9-4a7f-95da-ed96d647cc18';
  $pane->panel = 'main_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_10';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'four',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '21b2ec35-e1c9-4a7f-95da-ed96d647cc18';
  $display->content['new-21b2ec35-e1c9-4a7f-95da-ed96d647cc18'] = $pane;
  $display->panels['main_content'][3] = 'new-21b2ec35-e1c9-4a7f-95da-ed96d647cc18';
  $pane = new stdClass();
  $pane->pid = 'new-adeb6074-bbf7-4668-863f-d1d56eaccfb9';
  $pane->panel = 'main_content_';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'adeb6074-bbf7-4668-863f-d1d56eaccfb9';
  $display->content['new-adeb6074-bbf7-4668-863f-d1d56eaccfb9'] = $pane;
  $display->panels['main_content_'][0] = 'new-adeb6074-bbf7-4668-863f-d1d56eaccfb9';
  $pane = new stdClass();
  $pane->pid = 'new-41b7e39e-88ed-4d21-9ddc-1f26d61fa3fb';
  $pane->panel = 'main_menu';
  $pane->type = 'block';
  $pane->subtype = 'system-main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'main_menu',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '41b7e39e-88ed-4d21-9ddc-1f26d61fa3fb';
  $display->content['new-41b7e39e-88ed-4d21-9ddc-1f26d61fa3fb'] = $pane;
  $display->panels['main_menu'][0] = 'new-41b7e39e-88ed-4d21-9ddc-1f26d61fa3fb';
  $pane = new stdClass();
  $pane->pid = 'new-355b7143-4370-4aa9-ae9d-4b55100e016a';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_16';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'a_article' => 'a_article',
          ),
        ),
        'context' => 'node',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '355b7143-4370-4aa9-ae9d-4b55100e016a';
  $display->content['new-355b7143-4370-4aa9-ae9d-4b55100e016a'] = $pane;
  $display->panels['right'][0] = 'new-355b7143-4370-4aa9-ae9d-4b55100e016a';
  $pane = new stdClass();
  $pane->pid = 'new-9ded4e28-117d-47d8-9765-7e91a175953b';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'event-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'event',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9ded4e28-117d-47d8-9765-7e91a175953b';
  $display->content['new-9ded4e28-117d-47d8-9765-7e91a175953b'] = $pane;
  $display->panels['right'][1] = 'new-9ded4e28-117d-47d8-9765-7e91a175953b';
  $pane = new stdClass();
  $pane->pid = 'new-c8812251-416b-419c-b50b-5e823a41e6cf';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'first-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'random_article',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c8812251-416b-419c-b50b-5e823a41e6cf';
  $display->content['new-c8812251-416b-419c-b50b-5e823a41e6cf'] = $pane;
  $display->panels['right'][2] = 'new-c8812251-416b-419c-b50b-5e823a41e6cf';
  $pane = new stdClass();
  $pane->pid = 'new-76900dcc-6cdf-4260-a00a-3ca5a66737ff';
  $pane->panel = 'right';
  $pane->type = 'articles_archive';
  $pane->subtype = 'articles_archive';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'date_format' => '',
    'override_title' => 1,
    'override_title_text' => 'Archive',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'archive',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '76900dcc-6cdf-4260-a00a-3ca5a66737ff';
  $display->content['new-76900dcc-6cdf-4260-a00a-3ca5a66737ff'] = $pane;
  $display->panels['right'][3] = 'new-76900dcc-6cdf-4260-a00a-3ca5a66737ff';
  $pane = new stdClass();
  $pane->pid = 'new-86e8d848-d560-4aef-9090-0595b1b02f9f';
  $pane->panel = 'search';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-search_api_search-page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'search',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '86e8d848-d560-4aef-9090-0595b1b02f9f';
  $display->content['new-86e8d848-d560-4aef-9090-0595b1b02f9f'] = $pane;
  $display->panels['search'][0] = 'new-86e8d848-d560-4aef-9090-0595b1b02f9f';
  $pane = new stdClass();
  $pane->pid = 'new-8f77f31f-7d66-4c63-b2fe-09cec42bbabd';
  $pane->panel = 'user';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 5,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => 'Hello %user:name',
    'format' => 'plain_text',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'user_name',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8f77f31f-7d66-4c63-b2fe-09cec42bbabd';
  $display->content['new-8f77f31f-7d66-4c63-b2fe-09cec42bbabd'] = $pane;
  $display->panels['user'][0] = 'new-8f77f31f-7d66-4c63-b2fe-09cec42bbabd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__front-page-2019'] = $handler;

  return $export;
}
