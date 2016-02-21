<?php
/**
 * @file
 * site_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function site_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_bartik_files';
  $strongarm->value = array(
    0 => 'public://color/bartik-b70996af/logo.png',
    1 => 'public://color/bartik-b70996af/colors.css',
  );
  $export['color_bartik_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_bartik_logo';
  $strongarm->value = 'public://color/bartik-b70996af/logo.png';
  $export['color_bartik_logo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_bartik_palette';
  $strongarm->value = array(
    'top' => '#e99d57',
    'bottom' => '#e99d57',
    'bg' => '#ffffff',
    'sidebar' => '#f6f6f2',
    'sidebarborders' => '#f9f9f9',
    'footer' => '#e99d57',
    'titleslogan' => '#fffeff',
    'text' => '#3b3b3b',
    'link' => '#0071B3',
  );
  $export['color_bartik_palette'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_bartik_stylesheets';
  $strongarm->value = array(
    0 => 'public://color/bartik-b70996af/colors.css',
  );
  $export['color_bartik_stylesheets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'homepage';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Community Kard';
  $export['site_name'] = $strongarm;

  return $export;
}
