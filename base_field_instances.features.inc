<?php
/**
 * @file
 * base_field_instances.features.inc
 */

/**
 * Implements hook_node_info().
 */
function base_field_instances_node_info() {
  $items = array(
    'base_field_instances' => array(
      'name' => t('Base Field Instances'),
      'base' => 'node_content',
      'description' => t('a dummy content type to contain base field instances so other content types can easily build features using these fields.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
