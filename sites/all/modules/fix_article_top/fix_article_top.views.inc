<?php

function fix_article_top_views_query_alter(&$view, &$query) {

	if (($view->name == 'first' && $view->current_display == 'panel_pane_10') 
		|| ($view->name == 'articles_2019' && $view->current_display == 'panel_pane_10')){

	    $fixed_article = fix_article_exists();

	    if (!empty($fixed_article)) {
		    $new_query = db_select('node', 'n');
		    $new_query->leftJoin('publication_date', 'pd', 'pd.nid = n.nid');
		    $new_query
		    ->fields('n', array('nid'))
		    ->condition('n.status', 1)
		    ->condition('n.type', 'a_article')
		    ->orderBy('pd.published_at', 'DESC')
		    ->range(0,5);

		    $result = $new_query->execute();
		    $first_round = TRUE;
		    foreach ($result as $row) {
		      $nids[] = $row->nid;
		      if ($first_round) {
		        $nids[] = $fixed_article;
		        $first_round = FALSE;
		      }
		    }
		    
		    array_pop($nids);

		    $query->add_where(1,'node.nid', $nids, 'IN');
		}


	}
}

