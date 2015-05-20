<?php
/**
 * @file
 * wsdot_structurally_deficient_bridges_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wsdot_structurally_deficient_bridges_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'structurally_deficient_bridges';
  $page->task = 'page';
  $page->admin_title = 'Structurally Deficient Bridges';
  $page->admin_description = 'Structurally deficient means that a bridge requires repair or replacement of a certain component, such as cracked or spalled concrete or the entire bridge itself.';
  $page->path = 'bridge/reporting/structurally-deficient-bridges';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_structurally_deficient_bridges__panel_context_6506b1c7-d646-434a-90f0-29bf14cd2f25';
  $handler->task = 'page';
  $handler->subtask = 'structurally_deficient_bridges';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Structurally Deficient Bridges';
  $display->uuid = 'e8a3e0e9-a8fd-48d7-ab7e-1ba916629906';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cdada4fe-8cce-4c47-9e87-d773e604c2f4';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Structurally Deficient Bridges Text',
      'title' => '',
      'body' => '<p>Structurally deficient means that a bridge requires repair or replacement of a certain component, such as cracked or spalled concrete or the entire bridge itself.</p>

<p>Being structurally deficient does not imply that the bridge is in danger of collapse or unsafe to the traveling public.</p>

<p>The following is a list of state owned bridges classified as structurally deficient as of January 2015.</p>

<p>&nbsp;</p>
',
      'format' => 'wysiwyg',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cdada4fe-8cce-4c47-9e87-d773e604c2f4';
    $display->content['new-cdada4fe-8cce-4c47-9e87-d773e604c2f4'] = $pane;
    $display->panels['middle'][0] = 'new-cdada4fe-8cce-4c47-9e87-d773e604c2f4';
    $pane = new stdClass();
    $pane->pid = 'new-f4d3990e-f7ae-44cd-9288-9c68e1f93cfe';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'structurally_deficient_bridges';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '/bridge/reporting/structurally-deficient-bridges',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f4d3990e-f7ae-44cd-9288-9c68e1f93cfe';
    $display->content['new-f4d3990e-f7ae-44cd-9288-9c68e1f93cfe'] = $pane;
    $display->panels['middle'][1] = 'new-f4d3990e-f7ae-44cd-9288-9c68e1f93cfe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['structurally_deficient_bridges'] = $page;

  return $pages;

}
