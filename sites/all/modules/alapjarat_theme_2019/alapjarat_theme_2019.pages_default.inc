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
        'class' => '',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'node_pane article',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
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
  $pane->access = array(
    'plugins' => array(),
  );
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'd0cdd85e-e4c4-4699-b007-d28cb0ecd8d3';
  $display->content['new-d0cdd85e-e4c4-4699-b007-d28cb0ecd8d3'] = $pane;
  $display->panels['center'][5] = 'new-d0cdd85e-e4c4-4699-b007-d28cb0ecd8d3';
  $pane = new stdClass();
  $pane->pid = 'new-058c8cab-b5fa-422e-b641-ab28a1c99156';
  $pane->panel = 'center';
  $pane->type = 'token';
  $pane->subtype = 'node:created';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '058c8cab-b5fa-422e-b641-ab28a1c99156';
  $display->content['new-058c8cab-b5fa-422e-b641-ab28a1c99156'] = $pane;
  $display->panels['center'][6] = 'new-058c8cab-b5fa-422e-b641-ab28a1c99156';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '9354d871-2863-49fb-8ff1-a840d9250d15';
  $display->content['new-9354d871-2863-49fb-8ff1-a840d9250d15'] = $pane;
  $display->panels['center'][7] = 'new-9354d871-2863-49fb-8ff1-a840d9250d15';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '3febc495-5010-436c-9e9c-2d5d79305e23';
  $display->content['new-3febc495-5010-436c-9e9c-2d5d79305e23'] = $pane;
  $display->panels['center'][8] = 'new-3febc495-5010-436c-9e9c-2d5d79305e23';
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '2f0f4428-94ac-474b-b005-fa5bed80d385';
  $display->content['new-2f0f4428-94ac-474b-b005-fa5bed80d385'] = $pane;
  $display->panels['center'][9] = 'new-2f0f4428-94ac-474b-b005-fa5bed80d385';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '02db2c16-7fdb-420d-91d9-67de62bc9e24';
  $display->content['new-02db2c16-7fdb-420d-91d9-67de62bc9e24'] = $pane;
  $display->panels['center'][10] = 'new-02db2c16-7fdb-420d-91d9-67de62bc9e24';
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
    'body' => '<div id="adoceangemhulanmisqqjf"></div>
<script type="text/javascript">
/* (c)AdOcean 2003-2019, alapjarat.hu.osszoldal.640x360_1 */
ado.slave(\'adoceangemhulanmisqqjf\', {myMaster: \'w0D8GanBjeVLul4hdqqyvqK8n.yv.z.VJ02vJJLUHYL.M7\' });
</script>',
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '6645b1c1-1bc8-4299-827a-f164bc2b48ed';
  $display->content['new-6645b1c1-1bc8-4299-827a-f164bc2b48ed'] = $pane;
  $display->panels['center'][11] = 'new-6645b1c1-1bc8-4299-827a-f164bc2b48ed';
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'b831b875-bba3-4ce1-ac46-114bbc1082ed';
  $display->content['new-b831b875-bba3-4ce1-ac46-114bbc1082ed'] = $pane;
  $display->panels['center'][12] = 'new-b831b875-bba3-4ce1-ac46-114bbc1082ed';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'background-none',
  );
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'ef380c1f-a01f-40b0-b092-93c95ef8fad6';
  $display->content['new-ef380c1f-a01f-40b0-b092-93c95ef8fad6'] = $pane;
  $display->panels['center'][13] = 'new-ef380c1f-a01f-40b0-b092-93c95ef8fad6';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'background-none',
  );
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = 'ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0';
  $display->content['new-ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0'] = $pane;
  $display->panels['center'][14] = 'new-ca6aa9f1-ab4c-456b-a0fb-84efbd1618e0';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'background-none',
  );
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '2bcc488a-ca6b-443a-ba17-88d14181e34a';
  $display->content['new-2bcc488a-ca6b-443a-ba17-88d14181e34a'] = $pane;
  $display->panels['center'][15] = 'new-2bcc488a-ca6b-443a-ba17-88d14181e34a';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'background-none',
  );
  $pane->extras = array();
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = 'b1cff760-1538-4a59-b4db-5ecfb0085e6c';
  $display->content['new-b1cff760-1538-4a59-b4db-5ecfb0085e6c'] = $pane;
  $display->panels['center'][16] = 'new-b1cff760-1538-4a59-b4db-5ecfb0085e6c';
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
    'css_class' => 'background-none',
  );
  $pane->extras = array();
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = 'cdcb7403-5eda-4484-b942-c686975717ae';
  $display->content['new-cdcb7403-5eda-4484-b942-c686975717ae'] = $pane;
  $display->panels['center'][17] = 'new-cdcb7403-5eda-4484-b942-c686975717ae';
  $pane = new stdClass();
  $pane->pid = 'new-c7e461fc-5423-4994-aa9f-47d38d8ab448';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_test_options';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'field_collection_fields',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'full',
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
  $pane->position = 18;
  $pane->locks = array();
  $pane->uuid = 'c7e461fc-5423-4994-aa9f-47d38d8ab448';
  $display->content['new-c7e461fc-5423-4994-aa9f-47d38d8ab448'] = $pane;
  $display->panels['center'][18] = 'new-c7e461fc-5423-4994-aa9f-47d38d8ab448';
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
          9 => 11,
          10 => 12,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_menu',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_menu_',
          1 => 'logo',
          2 => 'banner',
        ),
        'parent' => 'main',
        'class' => 'header',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'second_menu',
          1 => 'search_',
        ),
        'parent' => 'main',
        'class' => 'letterhead',
        'hide_empty' => 0,
      ),
      'logo' => array(
        'type' => 'region',
        'title' => 'mobile logo',
        'width' => 40,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'mobil-logo search',
        'hide_empty' => 0,
      ),
      'banner' => array(
        'type' => 'region',
        'title' => 'search',
        'width' => '19.999999999999996',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'search search-tablet',
        'hide_empty' => 1,
      ),
      'second_menu' => array(
        'type' => 'region',
        'title' => 'logo',
        'width' => '40.001538224888485',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 1,
      ),
      'main_menu' => array(
        'type' => 'region',
        'title' => 'Mobile menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'mobile-menu',
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
        'class' => 'first-block',
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
        'class' => '',
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
        'class' => 'main-center',
        'hide_empty' => 1,
      ),
      'main_content_' => array(
        'type' => 'region',
        'title' => 'Main content',
        'width' => 50,
        'width_type' => '%',
        'parent' => '10',
        'class' => 'main-content',
        'hide_empty' => 0,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '10',
        'class' => 'right-bar',
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
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'popular_tags',
          1 => 'calculator',
          2 => 'car_partner',
          3 => 'connection',
          4 => 'connection_',
        ),
        'parent' => 'main',
        'class' => 'menu-footer',
        'hide_empty' => 0,
      ),
      'popular_tags' => array(
        'type' => 'region',
        'title' => 'Popular Tags',
        'width' => '25',
        'width_type' => '%',
        'parent' => '11',
        'class' => 'popular-tags',
        'hide_empty' => 0,
      ),
      'calculator' => array(
        'type' => 'region',
        'title' => 'Calculator',
        'width' => '25',
        'width_type' => '%',
        'parent' => '11',
        'class' => 'calculator',
        'hide_empty' => 0,
      ),
      'car_partner' => array(
        'type' => 'region',
        'title' => 'Car partner',
        'width' => '25',
        'width_type' => '%',
        'parent' => '11',
        'class' => 'car-partner',
        'hide_empty' => 0,
      ),
      'connection' => array(
        'type' => 'region',
        'title' => 'Glossory',
        'width' => 12.5,
        'width_type' => '%',
        'parent' => '11',
        'class' => 'glossory',
        'hide_empty' => 0,
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'copyright',
          1 => 'social_media_menu',
        ),
        'parent' => 'main',
        'class' => 'my-footer',
        'hide_empty' => 0,
      ),
      'copyright' => array(
        'type' => 'region',
        'title' => 'Copyright',
        'width' => 50,
        'width_type' => '%',
        'parent' => '12',
        'class' => 'copyright',
        'hide_empty' => 0,
      ),
      'social_media_menu' => array(
        'type' => 'region',
        'title' => 'Social Media Menu',
        'width' => 50,
        'width_type' => '%',
        'parent' => '12',
        'class' => 'social-media-menu',
        'hide_empty' => 0,
      ),
      'search_' => array(
        'type' => 'region',
        'title' => 'Stb.',
        'width' => '59.99846177511152',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'main_menu_' => array(
        'type' => 'region',
        'title' => 'main menu',
        'width' => 40,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'connection_' => array(
        'type' => 'region',
        'title' => 'Connection',
        'width' => 12.5,
        'width_type' => '%',
        'parent' => '11',
        'class' => 'connection',
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
      'popular_tags' => NULL,
      'calculator' => NULL,
      'car_partner' => NULL,
      'connection' => NULL,
      'copyright' => NULL,
      'social_media_menu' => NULL,
      'search_' => NULL,
      'main_menu_' => NULL,
      'connection_' => NULL,
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
  $pane->pid = 'new-0a89c741-3323-43d2-87d2-ab7c84bef31f';
  $pane->panel = 'banner';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-search_api_search-page_1';
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
  $pane->uuid = '0a89c741-3323-43d2-87d2-ab7c84bef31f';
  $display->content['new-0a89c741-3323-43d2-87d2-ab7c84bef31f'] = $pane;
  $display->panels['banner'][0] = 'new-0a89c741-3323-43d2-87d2-ab7c84bef31f';
  $pane = new stdClass();
  $pane->pid = 'new-1b3dae25-7117-4e5d-8eb9-dbd07df8b637';
  $pane->panel = 'calculator';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-calculators';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Kalkulátorok',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1b3dae25-7117-4e5d-8eb9-dbd07df8b637';
  $display->content['new-1b3dae25-7117-4e5d-8eb9-dbd07df8b637'] = $pane;
  $display->panels['calculator'][0] = 'new-1b3dae25-7117-4e5d-8eb9-dbd07df8b637';
  $pane = new stdClass();
  $pane->pid = 'new-0e5a4261-52ff-4b33-a346-6f140db744b8';
  $pane->panel = 'car_partner';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'HIRDETÉSI LEHETŐSÉGEK',
    'title_heading' => 'span',
    'body' => '<a href="https://atmedia.hu/rolunk/online%20ertekesites/23"><img src="/sites/all/themes/alapjarat_theme_2019/images/atmedia.png"></a>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'atmedia',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0e5a4261-52ff-4b33-a346-6f140db744b8';
  $display->content['new-0e5a4261-52ff-4b33-a346-6f140db744b8'] = $pane;
  $display->panels['car_partner'][0] = 'new-0e5a4261-52ff-4b33-a346-6f140db744b8';
  $pane = new stdClass();
  $pane->pid = 'new-52e9751d-3cad-4253-9b5d-3ba082aec358';
  $pane->panel = 'car_partner';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'partners',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '52e9751d-3cad-4253-9b5d-3ba082aec358';
  $display->content['new-52e9751d-3cad-4253-9b5d-3ba082aec358'] = $pane;
  $display->panels['car_partner'][1] = 'new-52e9751d-3cad-4253-9b5d-3ba082aec358';
  $pane = new stdClass();
  $pane->pid = 'new-43d08d74-7184-49e7-b630-b1219bdd569b';
  $pane->panel = 'connection';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'span',
    'body' => '<span class="pane-title"><a href="/autos-kifejezesek">Autós kifejezések<a></span>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '43d08d74-7184-49e7-b630-b1219bdd569b';
  $display->content['new-43d08d74-7184-49e7-b630-b1219bdd569b'] = $pane;
  $display->panels['connection'][0] = 'new-43d08d74-7184-49e7-b630-b1219bdd569b';
  $pane = new stdClass();
  $pane->pid = 'new-a8ab6f5b-1470-4503-afd6-7953ab18b569';
  $pane->panel = 'connection';
  $pane->type = 'views_panes';
  $pane->subtype = 'glossary_list-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'random-glossory',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a8ab6f5b-1470-4503-afd6-7953ab18b569';
  $display->content['new-a8ab6f5b-1470-4503-afd6-7953ab18b569'] = $pane;
  $display->panels['connection'][1] = 'new-a8ab6f5b-1470-4503-afd6-7953ab18b569';
  $pane = new stdClass();
  $pane->pid = 'new-8b90915d-b332-4f16-8107-4eb10661be94';
  $pane->panel = 'connection_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => 'Kapcsolat',
    'title_heading' => 'span',
    'body' => '<a href="/impresszum" class="link">Impresszum</a>
<a href="/mediaajanlat" class="link">Médiaajánlat</a>
<a href="/jogi-nyilatkozat" class="link">Jogi nyilatkozat</a>
<a href="/kapcsolat" class="link">Elérhetőségek</a>
<a href="mailto:info@alapjarat.hu" class="mail">info@alapjarat.hu</a>
<a href="tel:+36302752672" class="tel">+36 30 275 2672</a>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8b90915d-b332-4f16-8107-4eb10661be94';
  $display->content['new-8b90915d-b332-4f16-8107-4eb10661be94'] = $pane;
  $display->panels['connection_'][0] = 'new-8b90915d-b332-4f16-8107-4eb10661be94';
  $pane = new stdClass();
  $pane->pid = 'new-c81fdb5b-e269-443d-9ed6-9534a92ba8d8';
  $pane->panel = 'copyright';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<ul>
<li class="left">© Copyright 2019, <a href="/">alapjarat.hu</a> & <a href="https://www.ecdh.hu/">ecdh.hu</a></li>
<li class="right">1097 Budapest, Könyves Kálmán krt. 12-14.</li>
<li class="atmedia text">HIRDETÉSI LEHETŐSÉGEK</li>
<li class="atmedia"><a href="https://atmedia.hu/rolunk/online%20ertekesites/23"><img src="/sites/all/themes/alapjarat_theme_2019/images/atmedia.png"></a></li>
</ul>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c81fdb5b-e269-443d-9ed6-9534a92ba8d8';
  $display->content['new-c81fdb5b-e269-443d-9ed6-9534a92ba8d8'] = $pane;
  $display->panels['copyright'][0] = 'new-c81fdb5b-e269-443d-9ed6-9534a92ba8d8';
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
      1 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'whatever' => NULL,
    'override_title' => 1,
    'override_title_text' => '<span>Több mint 30 000</span> autós szolgáltató közül választhatsz!',
    'override_title_heading' => 'div',
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
  $pane->pid = 'new-d619e578-3f54-47c7-810c-d95b0b15af06';
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
    'css_id' => 'mobile-logo',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd619e578-3f54-47c7-810c-d95b0b15af06';
  $display->content['new-d619e578-3f54-47c7-810c-d95b0b15af06'] = $pane;
  $display->panels['logo'][0] = 'new-d619e578-3f54-47c7-810c-d95b0b15af06';
  $pane = new stdClass();
  $pane->pid = 'new-c7c59d39-f5ce-411f-a7fc-a0afd2bc726a';
  $pane->panel = 'logo';
  $pane->type = 'block';
  $pane->subtype = 'views--exp-search_api_search-page_1';
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
    'css_id' => 'search-mobile',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c7c59d39-f5ce-411f-a7fc-a0afd2bc726a';
  $display->content['new-c7c59d39-f5ce-411f-a7fc-a0afd2bc726a'] = $pane;
  $display->panels['logo'][1] = 'new-c7c59d39-f5ce-411f-a7fc-a0afd2bc726a';
  $pane = new stdClass();
  $pane->pid = 'new-37cdfdeb-8191-41f4-b1dc-d7c5d10b8db7';
  $pane->panel = 'main_content';
  $pane->type = 'panels_mini';
  $pane->subtype = 'hamburger_menu_2019';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '37cdfdeb-8191-41f4-b1dc-d7c5d10b8db7';
  $display->content['new-37cdfdeb-8191-41f4-b1dc-d7c5d10b8db7'] = $pane;
  $display->panels['main_content'][0] = 'new-37cdfdeb-8191-41f4-b1dc-d7c5d10b8db7';
  $pane = new stdClass();
  $pane->pid = 'new-3a580b48-2727-47af-856f-23a6f3fc14fa';
  $pane->panel = 'main_content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'admin_title' => 'Default page big banner',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div id="adoceangemhuvbeelqqftr"></div>
<script type="text/javascript">
/* (c)AdOcean 2003-2019, alapjarat.hu.osszoldal.970x250 */
ado.slave(\'adoceangemhuvbeelqqftr\', {myMaster: \'w0D8GanBjeVLul4hdqqyvqK8n.yv.z.VJ02vJJLUHYL.M7\' });
</script>',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3a580b48-2727-47af-856f-23a6f3fc14fa';
  $display->content['new-3a580b48-2727-47af-856f-23a6f3fc14fa'] = $pane;
  $display->panels['main_content'][1] = 'new-3a580b48-2727-47af-856f-23a6f3fc14fa';
  $pane = new stdClass();
  $pane->pid = 'new-2d81fd88-3c14-4888-831f-734edc6a598d';
  $pane->panel = 'main_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_2';
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
  $pane->uuid = '2d81fd88-3c14-4888-831f-734edc6a598d';
  $display->content['new-2d81fd88-3c14-4888-831f-734edc6a598d'] = $pane;
  $display->panels['main_content'][2] = 'new-2d81fd88-3c14-4888-831f-734edc6a598d';
  $pane = new stdClass();
  $pane->pid = 'new-f6510969-8189-4cf7-940e-22443cd54d1b';
  $pane->panel = 'main_content';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_10';
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
  $pane->uuid = 'f6510969-8189-4cf7-940e-22443cd54d1b';
  $display->content['new-f6510969-8189-4cf7-940e-22443cd54d1b'] = $pane;
  $display->panels['main_content'][3] = 'new-f6510969-8189-4cf7-940e-22443cd54d1b';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'adeb6074-bbf7-4668-863f-d1d56eaccfb9';
  $display->content['new-adeb6074-bbf7-4668-863f-d1d56eaccfb9'] = $pane;
  $display->panels['main_content_'][0] = 'new-adeb6074-bbf7-4668-863f-d1d56eaccfb9';
  $pane = new stdClass();
  $pane->pid = 'new-54c02c93-b04f-4664-85a1-78ad86eca7c6';
  $pane->panel = 'main_menu';
  $pane->type = 'panels_mini';
  $pane->subtype = 'mobil_menu';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '54c02c93-b04f-4664-85a1-78ad86eca7c6';
  $display->content['new-54c02c93-b04f-4664-85a1-78ad86eca7c6'] = $pane;
  $display->panels['main_menu'][0] = 'new-54c02c93-b04f-4664-85a1-78ad86eca7c6';
  $pane = new stdClass();
  $pane->pid = 'new-7ce027aa-b14d-405f-8f72-369ef04075f3';
  $pane->panel = 'main_menu_';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-main-menu-2019';
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
  $pane->uuid = '7ce027aa-b14d-405f-8f72-369ef04075f3';
  $display->content['new-7ce027aa-b14d-405f-8f72-369ef04075f3'] = $pane;
  $display->panels['main_menu_'][0] = 'new-7ce027aa-b14d-405f-8f72-369ef04075f3';
  $pane = new stdClass();
  $pane->pid = 'new-c68ebcae-a594-4de2-9501-80b26f344c08';
  $pane->panel = 'popular_tags';
  $pane->type = 'most_popular_terms';
  $pane->subtype = 'most_popular_terms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'count' => '5',
    'override_title' => 1,
    'override_title_text' => 'Népszerű címkék',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c68ebcae-a594-4de2-9501-80b26f344c08';
  $display->content['new-c68ebcae-a594-4de2-9501-80b26f344c08'] = $pane;
  $display->panels['popular_tags'][0] = 'new-c68ebcae-a594-4de2-9501-80b26f344c08';
  $pane = new stdClass();
  $pane->pid = 'new-4179b5a2-7bea-4d1b-b3e0-eedbdc134f30';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_16';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'impress',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      1 => array(
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
    'logic' => 'or',
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'right-top-5',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4179b5a2-7bea-4d1b-b3e0-eedbdc134f30';
  $display->content['new-4179b5a2-7bea-4d1b-b3e0-eedbdc134f30'] = $pane;
  $display->panels['right'][0] = 'new-4179b5a2-7bea-4d1b-b3e0-eedbdc134f30';
  $pane = new stdClass();
  $pane->pid = 'new-2f70b553-9cf1-4809-b32b-1fbd861301b5';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'a_article' => 'a_article',
          ),
        ),
        'context' => 'node',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'impress',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'admin_title' => 'Banner1 (Front page & Article & Impress)',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div id="adoceangemhuxbghpsegvj"></div>
<script type="text/javascript">
/* (c)AdOcean 2003-2019, alapjarat.hu.osszoldal.300x250_1 */
ado.slave(\'adoceangemhuxbghpsegvj\', {myMaster: \'w0D8GanBjeVLul4hdqqyvqK8n.yv.z.VJ02vJJLUHYL.M7\' });
</script>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2f70b553-9cf1-4809-b32b-1fbd861301b5';
  $display->content['new-2f70b553-9cf1-4809-b32b-1fbd861301b5'] = $pane;
  $display->panels['right'][1] = 'new-2f70b553-9cf1-4809-b32b-1fbd861301b5';
  $pane = new stdClass();
  $pane->pid = 'new-7a819861-78f3-4b68-b1b5-3e7259f5836f';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'event-panel_pane_2';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7a819861-78f3-4b68-b1b5-3e7259f5836f';
  $display->content['new-7a819861-78f3-4b68-b1b5-3e7259f5836f'] = $pane;
  $display->panels['right'][2] = 'new-7a819861-78f3-4b68-b1b5-3e7259f5836f';
  $pane = new stdClass();
  $pane->pid = 'new-897406d6-6976-49a1-bfa5-f7cfcf5487c7';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'a_article' => 'a_article',
          ),
        ),
        'context' => 'node',
        'not' => TRUE,
      ),
      2 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'impress',
        ),
        'context' => 'empty',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Banner1 (Pages)',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div id="adoceangemhuxbghpsegvj"></div>
<script type="text/javascript">
/* (c)AdOcean 2003-2019, alapjarat.hu.osszoldal.300x250_1 */
ado.slave(\'adoceangemhuxbghpsegvj\', {myMaster: \'w0D8GanBjeVLul4hdqqyvqK8n.yv.z.VJ02vJJLUHYL.M7\' });
</script>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '897406d6-6976-49a1-bfa5-f7cfcf5487c7';
  $display->content['new-897406d6-6976-49a1-bfa5-f7cfcf5487c7'] = $pane;
  $display->panels['right'][3] = 'new-897406d6-6976-49a1-bfa5-f7cfcf5487c7';
  $pane = new stdClass();
  $pane->pid = 'new-09519ba1-11ea-4ed4-961a-5b15085aea52';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'impress',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
      2 => array(
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
    'logic' => 'or',
  );
  $pane->configuration = array(
    'admin_title' => 'Banner2 (Article & Impress)',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div id="adoceangemhulcdidljsgh"></div>
<script type="text/javascript">
/* (c)AdOcean 2003-2019, alapjarat.hu.osszoldal.300x250_2 */
ado.slave(\'adoceangemhulcdidljsgh\', {myMaster: \'w0D8GanBjeVLul4hdqqyvqK8n.yv.z.VJ02vJJLUHYL.M7\' });
</script>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '09519ba1-11ea-4ed4-961a-5b15085aea52';
  $display->content['new-09519ba1-11ea-4ed4-961a-5b15085aea52'] = $pane;
  $display->panels['right'][4] = 'new-09519ba1-11ea-4ed4-961a-5b15085aea52';
  $pane = new stdClass();
  $pane->pid = 'new-58926611-b751-4330-8a43-23315fdc9b81';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'a_article' => 'a_article',
          ),
        ),
        'context' => 'node',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'impress',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'small',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '58926611-b751-4330-8a43-23315fdc9b81';
  $display->content['new-58926611-b751-4330-8a43-23315fdc9b81'] = $pane;
  $display->panels['right'][5] = 'new-58926611-b751-4330-8a43-23315fdc9b81';
  $pane = new stdClass();
  $pane->pid = 'new-e54b872d-fcb8-44d9-a169-223c46ac0130';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'admin_title' => 'Banner2 (Front page)',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div id="adoceangemhulcdidljsgh"></div>
<script type="text/javascript">
/* (c)AdOcean 2003-2019, alapjarat.hu.osszoldal.300x250_2 */
ado.slave(\'adoceangemhulcdidljsgh\', {myMaster: \'w0D8GanBjeVLul4hdqqyvqK8n.yv.z.VJ02vJJLUHYL.M7\' });
</script>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'e54b872d-fcb8-44d9-a169-223c46ac0130';
  $display->content['new-e54b872d-fcb8-44d9-a169-223c46ac0130'] = $pane;
  $display->panels['right'][6] = 'new-e54b872d-fcb8-44d9-a169-223c46ac0130';
  $pane = new stdClass();
  $pane->pid = 'new-d4a11f2e-976c-404d-b37b-6f9c7b47e19a';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Mailchimp',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<!-- Begin MailChimp Signup Form -->
<link href="//cdn-images.mailchimp.com/embedcode/classic-10_7.css" rel="stylesheet" type="text/css">
<style type="text/css">
	#mc_embed_signup{background:#fff; clear:left; font:14px Helvetica,Arial,sans-serif; }
	/* Add your own MailChimp form style overrides in your site stylesheet or in this style block.
	   We recommend moving this block and the preceding CSS link to the HEAD of your HTML file. */
</style>
<div id="mc_embed_signup">
<form action="https://ecdh.us15.list-manage.com/subscribe/post?u=ba2de3b04f01f0c0af7a1d614&amp;id=d48ce2c620" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate>
    <div id="mc_embed_signup_scroll">





<!--CSAK EHHEZ NYÚLJATOK-->
<p><span>Iratkozz fel hírlevelünkre!</span> Minden 500. feliratkozó után 5db Alapjáratos pólót sorsolunk ki.</p>
<div class="mc-field-group">
	<input type="text" value="" placeholder="Név:" name="MMERGE2" class="required" id="mce-MMERGE2">
</div>
<div class="mc-field-group">
<input type="email" value="" placeholder="E-mail cím:"  name="EMAIL" class="required email" id="mce-EMAIL">
</div>
<div class="mc-field-group input-group">
<input type="radio" class="required" value="Elfogadom az adatkezelési szabályzatot."  name="MMERGE1" id="mce-MMERGE1-0"><label>Elfogadom az <a href="/adatkezelesi-szabalyzat" target="_blank"> Adatkezelési szabályzatot.</a></label>
</div>
<div class="mc-field-group input-group consent">
<input type="radio" class="required" value="Hozzájárulok ahhoz, hogy az Alapjárat hírlevelet küldjön számomra." name="MMERGE3" id="mce-MMERGE3-0"><label for="mce-MMERGE3-0">Hozzájárulok ahhoz, hogy az Alapjárat hírlevelet küldjön számomra.</label>
</div>




	<div id="mce-responses" class="clear">
		<div class="response" id="mce-error-response" style="display:none"></div>
		<div class="response" id="mce-success-response" style="display:none"></div>
	</div>    <!-- real people should not fill this in and expect good things - do not remove this or risk form bot signups-->
    <div style="position: absolute; left: -5000px;" aria-hidden="true"><input type="text" name="b_ba2de3b04f01f0c0af7a1d614_d48ce2c620" tabindex="-1" value=""></div>
    <div class="clear"><input type="submit" value="Feliratkozás" name="subscribe" id="mc-embedded-subscribe" class="button"></div>
    </div>
</form>
</div>
<script type=\'text/javascript\' src=\'//s3.amazonaws.com/downloads.mailchimp.com/js/mc-validate.js\'></script><script type=\'text/javascript\'>(function($) {window.fnames = new Array(); window.ftypes = new Array();fnames[2]=\'MMERGE2\';ftypes[2]=\'text\';fnames[0]=\'EMAIL\';ftypes[0]=\'email\';fnames[1]=\'MMERGE1\';ftypes[1]=\'radio\';fnames[3]=\'MMERGE3\';ftypes[3]=\'radio\'; /*
 * Translated default messages for the $ validation plugin.
 * Locale: HU
 */
$.extend($.validator.messages, {
	required: "Kötelező megadni.",
	email: "Érvényes e-mail címnek kell lennie.",
});}(jQuery));var $mcj = jQuery.noConflict(true);</script>
<!--End mc_embed_signup-->',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'd4a11f2e-976c-404d-b37b-6f9c7b47e19a';
  $display->content['new-d4a11f2e-976c-404d-b37b-6f9c7b47e19a'] = $pane;
  $display->panels['right'][7] = 'new-d4a11f2e-976c-404d-b37b-6f9c7b47e19a';
  $pane = new stdClass();
  $pane->pid = 'new-c086729d-f690-4a6b-8ace-50b3ed433769';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => TRUE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'a_article' => 'a_article',
          ),
        ),
        'context' => 'node',
        'not' => TRUE,
      ),
      2 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'impress',
        ),
        'context' => 'empty',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Banner2 (Pages)',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div id="adoceangemhulcdidljsgh"></div>
<script type="text/javascript">
/* (c)AdOcean 2003-2019, alapjarat.hu.osszoldal.300x250_2 */
ado.slave(\'adoceangemhulcdidljsgh\', {myMaster: \'w0D8GanBjeVLul4hdqqyvqK8n.yv.z.VJ02vJJLUHYL.M7\' });
</script>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'c086729d-f690-4a6b-8ace-50b3ed433769';
  $display->content['new-c086729d-f690-4a6b-8ace-50b3ed433769'] = $pane;
  $display->panels['right'][8] = 'new-c086729d-f690-4a6b-8ace-50b3ed433769';
  $pane = new stdClass();
  $pane->pid = 'new-76900dcc-6cdf-4260-a00a-3ca5a66737ff';
  $pane->panel = 'right';
  $pane->type = 'articles_archive';
  $pane->subtype = 'articles_archive';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'node_type',
        'settings' => array(
          'type' => array(
            'a_article' => 'a_article',
          ),
        ),
        'context' => 'node',
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'impress',
        ),
        'context' => 'empty',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'date_format' => '',
    'override_title' => 1,
    'override_title_text' => 'Archive',
    'override_title_heading' => 'span',
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '76900dcc-6cdf-4260-a00a-3ca5a66737ff';
  $display->content['new-76900dcc-6cdf-4260-a00a-3ca5a66737ff'] = $pane;
  $display->panels['right'][9] = 'new-76900dcc-6cdf-4260-a00a-3ca5a66737ff';
  $pane = new stdClass();
  $pane->pid = 'new-8cdf61b2-331e-4559-aa53-586ba40ff595';
  $pane->panel = 'second_menu';
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
  $display->panels['second_menu'][0] = 'new-8cdf61b2-331e-4559-aa53-586ba40ff595';
  $pane = new stdClass();
  $pane->pid = 'new-5c3bc418-9028-4ab9-a45a-01c532d0b312';
  $pane->panel = 'second_menu';
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
  $display->panels['second_menu'][1] = 'new-5c3bc418-9028-4ab9-a45a-01c532d0b312';
  $pane = new stdClass();
  $pane->pid = 'new-1d7281d1-8f17-4e9b-982d-32261e04fc28';
  $pane->panel = 'social_media_menu';
  $pane->type = 'views_panes';
  $pane->subtype = 'menu-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'social-media',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1d7281d1-8f17-4e9b-982d-32261e04fc28';
  $display->content['new-1d7281d1-8f17-4e9b-982d-32261e04fc28'] = $pane;
  $display->panels['social_media_menu'][0] = 'new-1d7281d1-8f17-4e9b-982d-32261e04fc28';
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

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_bdf5fc45-a72f-488c-afd5-ee2e4c5cefcb';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'List panel 2019',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
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
        'title' => 'Középen',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'taxonomy-page',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5ebca362-47e2-4591-b496-c72aebeb346e';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_bdf5fc45-a72f-488c-afd5-ee2e4c5cefcb';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-dad59414-fd35-47a6-ac8a-4e5e8c3b2048';
  $pane->panel = 'center';
  $pane->type = 'term_name';
  $pane->subtype = 'term_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_term_1',
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
  $pane->uuid = 'dad59414-fd35-47a6-ac8a-4e5e8c3b2048';
  $display->content['new-dad59414-fd35-47a6-ac8a-4e5e8c3b2048'] = $pane;
  $display->panels['center'][0] = 'new-dad59414-fd35-47a6-ac8a-4e5e8c3b2048';
  $pane = new stdClass();
  $pane->pid = 'new-cd8b8f2c-a01d-49f0-80bb-4a2eabaab2ba';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_page_2019-panel_pane_1';
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
  $pane->uuid = 'cd8b8f2c-a01d-49f0-80bb-4a2eabaab2ba';
  $display->content['new-cd8b8f2c-a01d-49f0-80bb-4a2eabaab2ba'] = $pane;
  $display->panels['center'][1] = 'new-cd8b8f2c-a01d-49f0-80bb-4a2eabaab2ba';
  $pane = new stdClass();
  $pane->pid = 'new-e95058e3-0cc6-4949-9499-cab92cdc0fdd';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_page_2019-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e95058e3-0cc6-4949-9499-cab92cdc0fdd';
  $display->content['new-e95058e3-0cc6-4949-9499-cab92cdc0fdd'] = $pane;
  $display->panels['center'][2] = 'new-e95058e3-0cc6-4949-9499-cab92cdc0fdd';
  $pane = new stdClass();
  $pane->pid = 'new-4ae3ea2c-0e2b-4faa-849c-761481151204';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_page_2019-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4ae3ea2c-0e2b-4faa-849c-761481151204';
  $display->content['new-4ae3ea2c-0e2b-4faa-849c-761481151204'] = $pane;
  $display->panels['center'][3] = 'new-4ae3ea2c-0e2b-4faa-849c-761481151204';
  $pane = new stdClass();
  $pane->pid = 'new-709c7333-b3b6-4e4c-b81c-92158b54b078';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_page_2019-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '709c7333-b3b6-4e4c-b81c-92158b54b078';
  $display->content['new-709c7333-b3b6-4e4c-b81c-92158b54b078'] = $pane;
  $display->panels['center'][4] = 'new-709c7333-b3b6-4e4c-b81c-92158b54b078';
  $pane = new stdClass();
  $pane->pid = 'new-40c762d0-add2-4ca2-909f-812bfaf4a72a';
  $pane->panel = 'center';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'taxonomy_term:description';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'term_vocabulary',
        'settings' => array(
          'machine_name' => array(
            'glossary' => 'glossary',
          ),
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_term_1',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '40c762d0-add2-4ca2-909f-812bfaf4a72a';
  $display->content['new-40c762d0-add2-4ca2-909f-812bfaf4a72a'] = $pane;
  $display->panels['center'][5] = 'new-40c762d0-add2-4ca2-909f-812bfaf4a72a';
  $pane = new stdClass();
  $pane->pid = 'new-a5db1ac2-4d2a-4086-a394-1965a6b51fd8';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'term_vocabulary',
        'settings' => array(
          'machine_name' => array(
            'glossary' => 'glossary',
          ),
        ),
        'context' => 'argument_term_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<a href="/autos-kifejezesek" class="glossory-link">&lt;&lt; Ugrás az Autós kifejezések listára</a>',
    'format' => 'admin_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'a5db1ac2-4d2a-4086-a394-1965a6b51fd8';
  $display->content['new-a5db1ac2-4d2a-4086-a394-1965a6b51fd8'] = $pane;
  $display->panels['center'][6] = 'new-a5db1ac2-4d2a-4086-a394-1965a6b51fd8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_bdf5fc45-a72f-488c-afd5-ee2e4c5cefcb'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function alapjarat_theme_2019_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'archive_2019';
  $page->task = 'page';
  $page->admin_title = 'Archive 2019';
  $page->admin_description = '';
  $page->path = 'archive';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_archive_2019__panel_context_e7c3c98b-fb58-4347-bd14-31ef5b0a56f4';
  $handler->task = 'page';
  $handler->subtask = 'archive_2019';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
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
        'title' => 'Középen',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'archive',
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
  $display->title = 'Archive';
  $display->uuid = '142be34e-3991-42fd-b229-043696a7271d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_archive_2019__panel_context_e7c3c98b-fb58-4347-bd14-31ef5b0a56f4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-21653c76-754d-48cd-993a-68d06b8ef14a';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_page_2019-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '21653c76-754d-48cd-993a-68d06b8ef14a';
  $display->content['new-21653c76-754d-48cd-993a-68d06b8ef14a'] = $pane;
  $display->panels['center'][0] = 'new-21653c76-754d-48cd-993a-68d06b8ef14a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['archive_2019'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page_2019';
  $page->task = 'page';
  $page->admin_title = 'Front page 2019';
  $page->admin_description = '';
  $page->path = 'front-page';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_2019__panel_context_58404c87-650a-4a05-9982-23e8e2c96187';
  $handler->task = 'page';
  $handler->subtask = 'front_page_2019';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
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
        'class' => 'front-page',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 0,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 2,
          2 => 3,
          3 => 4,
        ),
        'parent' => 'canvas',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'helpfu__info_a',
          1 => 'tech',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'helpfu__info_a' => array(
        'type' => 'region',
        'title' => 'Actual',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'a-1',
        'hide_empty' => 0,
      ),
      'tech' => array(
        'type' => 'region',
        'title' => 'Tech',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'a-2',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'helpful_info__test',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'rajtracs',
          1 => 'tuning',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'rajtracs' => array(
        'type' => 'region',
        'title' => 'Rajtracs',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'a-1',
        'hide_empty' => 0,
      ),
      'tuning' => array(
        'type' => 'region',
        'title' => 'Tuning',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'a-2',
        'hide_empty' => 0,
      ),
      'helpful_info__test' => array(
        'type' => 'region',
        'title' => 'Helpful info, Test',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'elmondo',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'elmondo' => array(
        'type' => 'region',
        'title' => 'Elmondo',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one' => NULL,
      'four' => NULL,
      'helpfu__info_a' => NULL,
      'helpfu__info_b' => NULL,
      'our_partners' => NULL,
      'big_world' => NULL,
      'tech' => NULL,
      'rajtracs' => NULL,
      'tuning' => NULL,
      'helpful_info__test' => NULL,
      'elmondo' => NULL,
    ),
    'one' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'dffecd62-0e61-470b-afd9-4b94533760c6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_front_page_2019__panel_context_58404c87-650a-4a05-9982-23e8e2c96187';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-072f1778-7410-407f-95f5-b7389388a3e7';
  $pane->panel = 'elmondo';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_13';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'big many',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '072f1778-7410-407f-95f5-b7389388a3e7';
  $display->content['new-072f1778-7410-407f-95f5-b7389388a3e7'] = $pane;
  $display->panels['elmondo'][0] = 'new-072f1778-7410-407f-95f5-b7389388a3e7';
  $pane = new stdClass();
  $pane->pid = 'new-c1e967a3-07a7-48bb-9407-1dd861cbb785';
  $pane->panel = 'helpful_info__test';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Banner',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div id="adoceangemhulanmisqqjf"></div>
<script type="text/javascript">
/* (c)AdOcean 2003-2019, alapjarat.hu.osszoldal.640x360_1 */
ado.slave(\'adoceangemhulanmisqqjf\', {myMaster: \'w0D8GanBjeVLul4hdqqyvqK8n.yv.z.VJ02vJJLUHYL.M7\' });
</script>',
    'format' => 'admin_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'banner',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c1e967a3-07a7-48bb-9407-1dd861cbb785';
  $display->content['new-c1e967a3-07a7-48bb-9407-1dd861cbb785'] = $pane;
  $display->panels['helpful_info__test'][0] = 'new-c1e967a3-07a7-48bb-9407-1dd861cbb785';
  $pane = new stdClass();
  $pane->pid = 'new-65ad036f-6dd9-4976-a25a-0aee8f650468';
  $pane->panel = 'helpful_info__test';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'big  a-1 helpful-info',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '65ad036f-6dd9-4976-a25a-0aee8f650468';
  $display->content['new-65ad036f-6dd9-4976-a25a-0aee8f650468'] = $pane;
  $display->panels['helpful_info__test'][1] = 'new-65ad036f-6dd9-4976-a25a-0aee8f650468';
  $pane = new stdClass();
  $pane->pid = 'new-b1f6131d-cd30-42d1-aa11-84e42c9e9033';
  $pane->panel = 'helpful_info__test';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'small a-2 helpful-info',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b1f6131d-cd30-42d1-aa11-84e42c9e9033';
  $display->content['new-b1f6131d-cd30-42d1-aa11-84e42c9e9033'] = $pane;
  $display->panels['helpful_info__test'][2] = 'new-b1f6131d-cd30-42d1-aa11-84e42c9e9033';
  $pane = new stdClass();
  $pane->pid = 'new-f9ab9876-3e84-4132-9dae-c92c4f78c5e0';
  $pane->panel = 'helpful_info__test';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'big many',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f9ab9876-3e84-4132-9dae-c92c4f78c5e0';
  $display->content['new-f9ab9876-3e84-4132-9dae-c92c4f78c5e0'] = $pane;
  $display->panels['helpful_info__test'][3] = 'new-f9ab9876-3e84-4132-9dae-c92c4f78c5e0';
  $pane = new stdClass();
  $pane->pid = 'new-52732c9e-e8f6-4262-b48a-f63b0ef572d1';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'big',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '52732c9e-e8f6-4262-b48a-f63b0ef572d1';
  $display->content['new-52732c9e-e8f6-4262-b48a-f63b0ef572d1'] = $pane;
  $display->panels['helpfu__info_a'][0] = 'new-52732c9e-e8f6-4262-b48a-f63b0ef572d1';
  $pane = new stdClass();
  $pane->pid = 'new-37648ce9-a78c-4931-84d8-47b6b9d88777';
  $pane->panel = 'helpfu__info_a';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'small',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '37648ce9-a78c-4931-84d8-47b6b9d88777';
  $display->content['new-37648ce9-a78c-4931-84d8-47b6b9d88777'] = $pane;
  $display->panels['helpfu__info_a'][1] = 'new-37648ce9-a78c-4931-84d8-47b6b9d88777';
  $pane = new stdClass();
  $pane->pid = 'new-40fb1274-0dd3-4cda-a187-d2a30f796b1c';
  $pane->panel = 'rajtracs';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_12';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'big',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '40fb1274-0dd3-4cda-a187-d2a30f796b1c';
  $display->content['new-40fb1274-0dd3-4cda-a187-d2a30f796b1c'] = $pane;
  $display->panels['rajtracs'][0] = 'new-40fb1274-0dd3-4cda-a187-d2a30f796b1c';
  $pane = new stdClass();
  $pane->pid = 'new-f6e351fe-b025-42b7-b7b1-425e2a06a3ae';
  $pane->panel = 'rajtracs';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_18';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'small',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f6e351fe-b025-42b7-b7b1-425e2a06a3ae';
  $display->content['new-f6e351fe-b025-42b7-b7b1-425e2a06a3ae'] = $pane;
  $display->panels['rajtracs'][1] = 'new-f6e351fe-b025-42b7-b7b1-425e2a06a3ae';
  $pane = new stdClass();
  $pane->pid = 'new-79410826-498e-44d8-887a-b3eef99bb4fa';
  $pane->panel = 'tech';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'big',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '79410826-498e-44d8-887a-b3eef99bb4fa';
  $display->content['new-79410826-498e-44d8-887a-b3eef99bb4fa'] = $pane;
  $display->panels['tech'][0] = 'new-79410826-498e-44d8-887a-b3eef99bb4fa';
  $pane = new stdClass();
  $pane->pid = 'new-d4a5da4b-d368-4fe4-b3ea-9007c0ee91b0';
  $pane->panel = 'tech';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_17';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'small',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd4a5da4b-d368-4fe4-b3ea-9007c0ee91b0';
  $display->content['new-d4a5da4b-d368-4fe4-b3ea-9007c0ee91b0'] = $pane;
  $display->panels['tech'][1] = 'new-d4a5da4b-d368-4fe4-b3ea-9007c0ee91b0';
  $pane = new stdClass();
  $pane->pid = 'new-dfe1d175-f921-47f7-8c55-ee7fbb84e644';
  $pane->panel = 'tuning';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_11';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'big',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dfe1d175-f921-47f7-8c55-ee7fbb84e644';
  $display->content['new-dfe1d175-f921-47f7-8c55-ee7fbb84e644'] = $pane;
  $display->panels['tuning'][0] = 'new-dfe1d175-f921-47f7-8c55-ee7fbb84e644';
  $pane = new stdClass();
  $pane->pid = 'new-cdef0ed8-286b-49eb-9e73-7d324df84150';
  $pane->panel = 'tuning';
  $pane->type = 'views_panes';
  $pane->subtype = 'articles_2019-panel_pane_19';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'small',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cdef0ed8-286b-49eb-9e73-7d324df84150';
  $display->content['new-cdef0ed8-286b-49eb-9e73-7d324df84150'] = $pane;
  $display->panels['tuning'][1] = 'new-cdef0ed8-286b-49eb-9e73-7d324df84150';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page_2019'] = $page;

  return $pages;

}
