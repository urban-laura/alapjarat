<?php
/**
 * Created by: hugh
 * Date: 7/6/17
 * Time: 8:53 AM
 */
/** YAML parsing callbacks *********************************/

/**
 * YAML parse callable for a general function call. Watch out with this one!
 * If passed in value is a single string, the function is called.
 * If the passed in value is an array, then the first parameter is the function
 * name and the rest are parameters to be passed to it.
 * Example:
 *   description: !call [ t, this is a description of %parameter, { '%parameter': something } ]
 * will set 'description' element to translated version of "this is a description of something"
 */
function y__yaml_callable_call_user_func_array($value, $tag, $flags) {
  if (is_array($value)) {
    $function = array_shift($value);
  }
  else {
    $function = $value;
    $value = array();
  }
  return function_exists($function) ? call_user_func_array($function, $value) : NULL;
}

/**
 * YAML parse callable to Drupal t() translate a string
 * Example:
 *   description: !t my description is pithy
 */
function y__yaml_callable_t($value, $tag, $flags) {
  return t($value);
}

/*
 * Returns current module as set in the local parameters
 * Example:
 *   module: !module # sets 'module' element to the current module name
 */
function y__yaml_callable_plugin_module($value, $tag, $flags) {
  // $plugin = & drupal_static('y__yaml_plugin_values', array());
  $params = _y__stack_peek('y__yaml_plugin_values');
  return $params['module'];
}

/*
 * YAML callable to return the current path within Drupal. If a value is given,
 * it is appended to the path:
 * Examples:
 *   path: !path # sets 'path' element to sites/all/modules/mymodule/config/myprotocol
 *   path: !path mystyles.css # sets 'path' to sites/all/modules/mymodule/config/myprotocol/mystyles.css
 */
function y__yaml_callable_plugin_path($value = NULL, $tag, $flags) {
  // $plugin = & drupal_static('y__yaml_plugin_values', array());
  $params = _y__stack_peek('y__yaml_plugin_values');
  // if ($value === NULL) {
  if (empty($value)) {
    return rtrim($params['path'], '/');
  }
  return $params['path'] . $value;
}

/*
 * YAML callable to return the path relative to the module directory
 * Some Drupal APIs use this instead of full path within Drupal. 
 * Return path does not have trailing slash.
 * If value is passed in, then that value is treated as an extender onto the path
 * Examples:
 *   path: !relativepath # might point to something like config/layout
 *   css: !relativepath mystyles.css # might point to config/layout/mystyles.css
 */
function y__yaml_callable_plugin_relativepath($value = NULL, $tag, $flags) {
  $path = '';
  // $plugin = & drupal_static('y__yaml_plugin_values', array());
  $params = _y__stack_peek('y__yaml_plugin_values');
  $module_path = drupal_get_path('module', $params['module']);
  if (($pos = strrpos($params['path'], $module_path)) !== FALSE) {
    $path = substr($params['path'], $pos + strlen($module_path) + 1);
    if ($value === NULL) {
      $path = rtrim($path, '/');
    }
    else {
      $path = $path . $value;
    }
  }
  return $path;
}

/*
 * YAML parse callable to return a filename base or uri.
 * If no value is passed in, then the current base filename is returned
 * If a value is passed in, then a full Drupal path to a filename with value as
 * the extension concatenated is returned. The path is the same as the path to
 * the current YAML file.
 * Example:
 *   file: !name ".inc" # sets 'file' element to fullpathtoyamlfilewithfilebase.inc
 */
function y__yaml_callable_plugin_name($value, $tag, $flags) {
  // $plugin = & drupal_static('y__yaml_plugin_values', array());
  $params = _y__stack_peek('y__yaml_plugin_values');
  if ($value === NULL) {
    return $params['name'];
  }
  return $params['path'] . $params['name'] . $value;
}

/*
 * YAML parse callable to return local variables.
 * If a single value is sent, then it is the local variable to return.
 * If an array of values is sent, then an array of those values are returned.
 * If an array of key/pair is sent then local values[key] are returned as returned values[pair]
 */
function y__yaml_callable_plugin_local($values, $tag, $flags) {
  $params = _y__stack_peek('y__yaml_plugin_values');
  if (!is_array($values)) {
    return isset($params[$values]) ? $params[$values] : '';
  }
  $ret = array();
  foreach ($values as $key => $value) {
    if (is_integer($key)) {
      if (isset($params[$value])) {
        $ret[] = $params[$value];
      }
    }
    else {
      if (isset($params[$key])) {
        $ret[$value] = $params[$key];
      }
    }
  }
  return $ret;
}

/*
 * YAML parse callable to return the path to the current module... and add a
 * sub-path to the end if a value is given
 * Example:
 *   path: !modulepath # sets 'path' element to current module path
 *   path: !modulepath config # sets 'path' to current module's config directory
 */
function y__yaml_callable_plugin_modulepath($value, $tag, $flags) {
  // $plugin = & drupal_static('y__yaml_plugin_values', array());
  $params = _y__stack_peek('y__yaml_plugin_values');
  $modulepath = $params['modulepath'];
  if ($value) {
    $modulepath .= '/' . $value;
  }
  return $modulepath;
}

/*
 * YAML parse callable to evaluate PHP. Intent is for minor evaluations like 
 * MENU_CONSTANTS
 */
function y__yaml_callable_eval($value, $tag, $flags) {
  $ret = array();
  if (!is_array($value)) {
    $value = array($value);
  }
  foreach ($value as $key => $evalline) {
    $evalline = '$ret[$key]=' . $evalline . ';';
    eval($evalline);
  }
  $retval = ((count($ret) == 1) && is_numeric($key)) ? reset($ret) : $ret;
  return $retval;
}

/**
 * YAML parse callable for general variable functionality, set, increment, and
 * decrement YAML variables
 * Example:
 *   weight: !var 7 # initialize a weight at seveb
 *   weight: !var +: 5 
 *   !var { ++: weight }
 * @return mixed|null
 */
// todo: this needs some ironing out
function y__yaml_callable_var($value, $tag, $flags) {
  static $idx = 0;
  $staticvar = &drupal_static('y__static ' . $tag, array());

  if (!is_array($value)) {
    $staticvar[$idx] = $value;
  }
  else {
    foreach ($value as $opcode => $target) {
      if (is_numeric($opcode)) {
        $translate = array(
          '++' => 'inc',
          'inc' => 'inc',
          '--' => 'dec',
          'dec' => 'dec'
        );
        $opcode = $translate[$target] ?? NULL;
        $target = $opcode ? 0 : 1;
      }
      switch ($opcode) {
        case 'inc':
        case '+':
          $staticvar[$idx] = $staticvar[$idx] + $target;
          break;
        case 'dec':
        case '-':
          $staticvar[$idx] = $staticvar[$idx] - $target;
          break;
        default:
          $staticvar[$opcode] = $target;
      }
    }
  }
  return $staticvar[$idx];
}

// push var onto top of the stack
function _y__stack_push($stackname, $var) {
  $stack = &drupal_static($stackname, array());
  array_push($stack, $var);
}

// pop top element off stack
function _y__stack_pop($stackname) {
  $stack = &drupal_static($stackname, array());
  return array_pop($stack);
}

// get value of current stop of stack
function _y__stack_peek($stackname) {
  $stack = &drupal_static($stackname, array());
  return end($stack);
}

// change current element at top of stack (equiv of pop then push
function _y__stack_set($stackname, $var) {
  $stack = &drupal_static($stackname, array());
  array_pop($stack);
  array_push($stack, $var);
}

/**
 * YAML parsing callable to override / set a plugin value
 * Plugin values are set automatically. If you want to override one tempoorarily,
 * this is the way to do it. See code for which values are available.
 * Example:
 *   !setplugin { module: bc } # masquerade as the bc module 
 * @return mixed|null
 */
function y__yaml_callable_plugin_set($value, $tag, $flags) {
  //$plugin = & drupal_static('y__yaml_plugin_values', array());
  $plugin = &_y__stack_peek('y__yaml_plugin_values');
  $plugin = array_merge($plugin, $value);
  return $value;
}

/**
 * YAML parsing callable info for menu API discoverable plugin
 * The return array has the menu API array items:
 * - 'file' refer to a default filename of the YAML base filename plus '.inc'
 * - 'file path' is the path to that file
 * If passed in value is an array, then its values will be added to the array of
 * return values
 * Examples:
 *   !menucallback
 *   !menucallback { 'callback arguments': [ 1 ] } 
 * @return mixed|null
 * */
function y__yaml_callable_plugin_menucallback($value, $tag, $flags) {
  $plugin = _y__stack_peek('y__yaml_plugin_values');
  $includefilearray = array(
    'file' => $plugin['file'],
    'file path' => trim($plugin['path'], "/\\")
  );
  if (!$value || !is_array($value)) {
    $ret = $includefilearray;
  }
  else {
    $ret = $value + $includefilearray;
  }
  return $ret;
}
/*
 * YAML parsing callable to create a plugin callback array of form:
 *   array( 'function' => callbackfunctionname 
 *          'uri' => 'whereverImAt.inc' )
 * If value is single entry,
 * - then value is assumed to be the callback function name
 * - uri is assumed to be the full path to the YAML base filename plus '.inc'
 * Otherwise,
 * - the 'plugin' element states which local context elements should be included 
 *     with the result
 * - the other value elements areto be included with the result and can override 
 *     elements from the 'plugin' entry
 */
function y__yaml_callable_plugin_callback($value, $tag, $flags) {
  $result = array();
  $includefilearray = array();
  // $plugin = & drupal_static('y__yaml_plugin_values', array());
  $plugin = _y__stack_peek('y__yaml_plugin_values');
  if (!is_array($value)) {
    $result['function'] = $value;
    $includefilearray['uri'] = $plugin['uri'];
  }
  else {
    if (!empty($value['plugin'])) {
      $keys = is_array($value['plugin']) ? $value['plugin'] : array($value['plugin']);
      foreach ($keys as $key) {
        $includefilearray[$key] = $plugin[$key];
      }
      unset($value['plugin']);
    }
    $result = $value;
  }
  $result += $includefilearray;
  return $result;
}

/*
 * YAML parsing callable to fetch data from a protocol (this can result in 
 *   infinite loops! if you are not careful)
 * If value is single entry, 
 * - then this is shorthand for targetprotocol/id/api/module
 * - separating delimiter can be changed by starting the shorthand with a different delimiter
 * Otherwise value is an array where,
 *   'target' points to the target protocol
 *   'id' points to the id within the target protocol to key on
 *   'api' points to the api to use
 *   'module' defaults to the current module and can target other modules
 * Examples:
 *   !protocol protocol/id/api
 *   !protocol |protocol/uses/slashes|so/does/id|api/too|othermodule
 *   !protocol { target: targetprotocol, id: targetid, api: targetapi
 */
function y__yaml_callable_plugin_protocol($value, $tag, $flags) {
  $plugin = _y__stack_peek('y__yaml_plugin_values');
  if (!is_array($value)) {
    $value = array($value => array());
  }
  if (count($value) == 1) {
    $shorthandkeys = array('target', 'id', 'api', 'module');
    $params = array();
    $matches = array();
    $shorthand = key($value);
    $delim = '/';
    if (preg_match('/([\W]*)(.*)$/', $shorthand, $matches)) {
      $shorthand = $matches[2];
      if ($matches[1]) {
        $delim = $matches[1];
      }
    }
    foreach (explode($delim, $shorthand) as $index => $shortval) {
      $params[$shorthandkeys[$index] ?? $index] = $shortval;
    }
    $params['context'] = reset($value);
    $value = $params;
  }
  $params = $value + $plugin;
  $yinfo = y__protocol($params['target'], $params['api'], $params['module']);
  $ret = $yinfo[$params['id']] ?? array();
  $ret['protocol'] = $value; // save original protocol request info with result
  return $ret;
}

/**
 * Set plugin values
 * @param array $initarray

function y__yaml_plugin_values( $initarray=array() ) {
$plugin = & drupal_static('y__yaml_plugin_values', array());
$plugin = $initarray;
}
 */
