<?php

function alapjarat_common_views_query_alter(&$view, &$query) {

  $news_lists = array('panel_pane_5', 'panel_pane_6', 'panel_pane_3', 'panel_pane_4',
    'panel_pane_7', 'panel_pane_8', 'panel_pane_11', 'panel_pane_12', 'panel_pane_13',
    'panel_pane_14', 'panel_pane_15');

	if ($view->name == 'first' && in_array($view->current_display, $news_lists)) {

	    $results = views_get_view_result('first', 'panel_pane_2');
	    foreach ($results as $row) {
	      $nids[] = $row->nid;
	    }

	    $results = views_get_view_result('first', 'panel_pane_10');
	    foreach ($results as $row) {
	      $nids[] = $row->nid;
	    }

	    $query->add_where(1,'node.nid', $nids, 'NOT IN');

	}
}