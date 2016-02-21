<?php
/**
 * @file
 * deal_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function deal_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function deal_types_node_info() {
  $items = array(
    'deals' => array(
      'name' => t('deals'),
      'base' => 'node_content',
      'description' => t('Deals created by Business Owners'),
      'has_title' => '1',
      'title_label' => t('Deal Item'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
