<?php
/**
 * @file
 * site_settings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function site_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'ck_footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'ck_footer';
  $fe_block_boxes->body = 'We respect the privacy of our CommunityKard Users

@2016 CommunityKard.com All Rights Reserved
CommunityKard.com is a Trademark of CommunityKard, LLC ';

  $export['ck_footer'] = $fe_block_boxes;

  return $export;
}
