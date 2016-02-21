<?php
/**
 * @file
 * homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'home Page';
  $page->admin_description = '';
  $page->path = 'homepage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
    'right' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '80ba01cb-073f-463f-8aab-d404a45ea26d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d624177-4bca-4a0b-bd37-d8a41e151244';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<b>Welcome to Community Kard</b>
<p>CommunityKard brings together local merchants and loyal customers in your neighborhood!</p>
To find out what Local Communities we are in, contact us at <a href="mailto:info@communitykard.com?Subject=Communites">info@communitykard.com</a>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'towcol',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d624177-4bca-4a0b-bd37-d8a41e151244';
    $display->content['new-1d624177-4bca-4a0b-bd37-d8a41e151244'] = $pane;
    $display->panels['left'][0] = 'new-1d624177-4bca-4a0b-bd37-d8a41e151244';
    $pane = new stdClass();
    $pane->pid = 'new-426a9f44-4bff-4004-aac0-0f14842a0b4d';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'views-homepage-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '426a9f44-4bff-4004-aac0-0f14842a0b4d';
    $display->content['new-426a9f44-4bff-4004-aac0-0f14842a0b4d'] = $pane;
    $display->panels['right'][0] = 'new-426a9f44-4bff-4004-aac0-0f14842a0b4d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1d624177-4bca-4a0b-bd37-d8a41e151244';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  return $pages;

}
