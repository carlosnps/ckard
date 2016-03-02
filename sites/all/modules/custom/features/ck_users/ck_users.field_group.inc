<?php
/**
 * @file
 * ck_users.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ck_users_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_merchant_info|user|user|form';
  $field_group->group_name = 'group_merchant_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Merchant Info',
    'weight' => '8',
    'children' => array(
      0 => 'field_company_name',
      1 => 'field_webite',
      2 => 'field_phone_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_merchant_info|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Merchant Info');

  return $field_groups;
}
