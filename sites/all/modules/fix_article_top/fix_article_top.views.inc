<?php

function fix_article_top_views_query_alter(&$view, &$query) {

	if ($view->name == 'first' && $view->current_display == 'panel_pane_10') {

	    $new_query = db_select('node', 'n')
	    ->fields('n', array('nid'))
	    ->condition('n.status', 1)
	    ->condition('n.type', 'a_article')
	    ->orderBy('n.changed', 'DESC')
	    ->range(0,5);

	    $result = $new_query->execute();
	    foreach ($result as $row) {
	    	$nids[] = $row->nid;
	    }


	    $fixed = db_select('field_data_field_article_fixing', 'f')
	    ->fields('f', array('entity_id'))
	    ->condition('f.field_article_fixing_value', '1')
	    ->orderBy('f.entity_id', 'DESC')
	    ->range(0,1);

	    $result = $fixed->execute();
	    foreach ($result as $row) {
	    	$fixed_article[] = $row->entity_id;
	    }

	    $nids[1] = $fixed_article[0]; 

	    $query->add_where(1,'node.nid', $nids, 'IN');


	}
}

