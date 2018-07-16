<?php

/**
 * Recursively substitute special patterns in array
 * @param $var
 * @param $substarray
 */
function y__token_substitute(& $var, $substarray) {
  if (!is_array($var)) {
    if (in_array($var, array_keys($substarray), TRUE)) {
      $var = $substarray[$var];
    }
    elseif (is_string($var)) {
      $var = strtr($var, $substarray);
    }
  }
  else {
    foreach ($var as & $value) {
      y__token_substitute($value, $substarray);
    }
  }
  return $var;
}

/**
 * Build an array of tokens in form token=>'[token]' for substitution-handling
 * @param array $tokens
 * @return array
 */
function y__token_build_list(array $tokens, $prefix = '[', $suffix = ']') {
  $ret = array();
  foreach ($tokens as $token) {
    $ret[$token] = $prefix . $token . $suffix;
  }
  return $ret;
}

function y__token_set_values(array $tokens, $values) {
  $substitution = array();
  foreach ($tokens as $key => $token) {
    $substitution[$token] = is_object($values)
      ? ($values->$key ?? '')
      : (is_array($values)
        ? ($values[$key] ?? '')
        : $values);
  }
  return $substitution;
}

/**
 * Display a query result set as a table using the given render rules
 * @param $resultset // stuff to display, array of arrays or objects
 * @param null $render // settings to initialize output
 * @return array|null  // table render array
 */
function y__display_queryresults($resultset, $config) {
  $solo = (array) reset($resultset);
  $tokens = y__token_build_list(array_keys($solo));
  $context = $config['protocol']['context'] ?? array();
  $config += array(
    'rowaccess' => array(),
    'colaccess' => array()
  );
  $rowaccess = $config['rowaccess'];
  $colaccess = $config['colaccess'];

  $row_def = $config['render']['iterate'] ?? array_values($tokens);
  $rows = array();

  foreach ($resultset as $result) {
    $result = (array) $result;
    $substitution = array_combine($tokens, array_values($result)) + $context;
    if (isset($rowaccess['callback'])) {
      $args = array($result) + $rowaccess['arguments'] ?? array();
      if (!call_user_func_array($rowaccess['callback'], $args)) {
        continue;
      }
    }
    $defined_row = $row_def;
    $row = y__token_substitute($defined_row, $substitution);
//    if( isset($colaccess['callback']) ) {
//      if( $function = y__plugin($colaccess, 'callback') ) {
//        $args = array( $row_def, $row );
//        if( !empty($colaccess['arguments'])) {
//          $args = array_merge($args, $colaccess['arguments']);
//        }
//        $row = call_user_func_array($function, $args);
//      }
//    }
    $rows[] = $row;
  }
  if (!isset($substitution)) {
    $substitution = $context;
  }
  $substitution['[@iteration]'] = $rows;
  $substitution['[@keys]'] = array_keys($solo);
  $substitution['[@values]'] = array_values($solo);
  $substitution = array_merge($substitution, $context);

  $render = $config['render']['content'] ?? array(
      "#theme" => 'table',
      "#empty" => t('No results'),
      "#header" => '[@keys]',
      '#rows' => '[@iteration]'
    );
  $render = y__token_substitute($render, $substitution);
  return $render;
}

/**
 * transform a token of a particular type into its values
 * @param $token of form
 *   global: globalvarname: globalvarproperty OR
 *           globalvarname
 * @return token value if successful, null if unsuccessful
 */
function _y__token_data(array $token) {
  $value = reset($token);
  $method = key($token);
  switch ($method) {
    case 'arg': // return a value at a numerical index into a context array
      $args = &drupal_static(__FUNCTION__, array());
      return $args[$value];
    case 'global': // return a global variable value
      if (is_array($value)) {
        $varprop = reset($value);
        $varname = key($value);
        global $$varname;
        return $$varname->$varprop;
      }
      else {
        global $$value;
        return $$value;
      }
      break;
    case 'session': // return a session variable value
      return $_SESSION[$value];
      break;
    case 'callback': // return the result of a callback
      if (is_array($value)) {
        $name = key($value);
        if (is_integer($name)) {
          $function = reset($value);
          $args = array();
        }
        else {
          $function = $name;
          if (!($args = reset($value))) {
            $args = array();
          }
        }
      }
      else {
        $function = $value;
        $args = array();
      }

      return call_user_func_array($function, $args);
  }

  return NULL;
}

// Helper function to show a query string
function _y__query_get_string(SelectQueryInterface $query) {
  $string = (string) $query;
  $arguments = $query->arguments();

  if (!empty($arguments) && is_array($arguments)) {
    foreach ($arguments as $placeholder => &$value) {
      if (is_string($value)) {
        $value = "'$value'";
      }
    }

    $string = strtr($string, $arguments);
  }

  return $string;
}

/**
 * Build a query from a query definition array
 * @param $config
 * @return array
 */
function y__query_build($config) {
  if (empty($config['base table'])) {
    return array();
  }

  $config += array('arguments' => array(), 'build' => array());
  // Get data values
  $substitution = $config['protocol']['context'] ?? array();
  foreach ($config['arguments'] as $name => $value) {
    $substitution[$name] = _y__token_data($value);
  }

  // Make the query
  $basetable = reset($config['base table']);
  $basetablealias = $config['base table'][$basetable];
  $query = db_select($basetable, $basetablealias);
  foreach ($config['build'] as $querycfg) {
    foreach ($querycfg as $db_op => $args) {
      y__token_substitute($args, $substitution);
      if (in_array($db_op, array(
        'addExpression',
        'addField',
        'addJoin',
        'extend',
        'innerJoin',
        'join',
        'leftJoin',
        'rightJoin',
      ))) {
        $query = call_user_func_array(array($query, $db_op), $args);
      }
      else {
        call_user_func_array(array($query, $db_op), $args);
      }
    }
  }
  return $query;
}

/**
 * Execute a query and display and return results
 * @param $config array of query, arguments, and display
 *   query:
 *     base table:
 *       base_table_name: base_table_name_alias
 *     arguments:
 *       name_of_arg: definition_of_arg (see y__q_datagetter for how to define this
 *     query:
 *     - operation: arguments
 *       differentoperation: arguments
 *     - operation: morearguments...
 *   display:
 *     display callback: name of a function to process the results of the query
 * @return array
 */
function y__views() {
  $args = func_get_args();
  $ret = array();
  $views = array_shift($args);
  if (!is_array($views)) {
    $views = array($views);
  }
  drupal_static('_y__token_data', $args, TRUE);

  foreach ($views as $config) {
    if (empty($config['query']) || !($query = y__query_build($config['query']))) {
      return array();
    }
    $querystring = _y__query_get_string($query);
    $queryresult = $query->execute()->fetchAll();

    // Return results or display output
    if (!($displayfunction = y__plugin($config, 'display', 'callback'))) {
      $displayfunction = 'y__display_queryresults';
    }
    $render = call_user_func_array($displayfunction, array(
      $queryresult,
      $config['display'] ?? array()
    ));
    $ret[] = $render;
  }

  if ((count($ret) == 1) && is_integer($key = key($ret))) {
    return $ret[$key];
  }
  return $ret;
}

/**
 * Someday, this should return context data
 * @param $context
 * @return null
 */
function _y__page_context($context) {
  return NULL;
}

/**
 * Main function to display a laid-out paid using the 'page' protocol
 * @param $id
 * @param null $module
 * @return array
 */
function y__page_render($id, $module = NULL) {
  $ret = array("#type" => 'page');
  $pagedefs = y__protocol('page', 'layout', $module);
  // $context = isset($pagedefs[$id]['context']) ? _y__page_context($pagedefs[$id]['context']) : array();
  foreach ($pagedefs[$id]['render'] as $key => $pagedef) {
    $ret[$key] = $pagedef;
  }
  return $ret;
}
