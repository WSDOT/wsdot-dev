<?php

/**
 * @file
 * wsf_spotlight_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wsf_spotlight_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'spotlight_queue';
  $view->description = 'Display a list of all nodes in queue \'WSF Home Page Spotlight Items\'';
  $view->tag = 'nodequeue';
  $view->base_table = 'node';
  $view->human_name = 'Spotlight Queue';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Queue \'WSF Home Page Spotlight Items\'';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Entityqueue: Node Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'wsf_home_page_spotlight_items' => 'wsf_home_page_spotlight_items',
    'wsdot_home_page_news_articles' => 0,
    'wsdot_home_page_slideshow_items' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Sort criterion: Entityqueue: Node Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  /* Filter criterion: Entityqueue: Node In Queue */
  $handler->display->display_options['filters']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['filters']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['value'] = '1';
  $handler->display->display_options['filters']['entityqueue_relationship']['group'] = 1;
  /* Filter criterion: Content: Published status or admin user */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'nodequeue/spotlight';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['id'] = 'spotlight';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_spotlight_link']['id'] = 'field_spotlight_link';
  $handler->display->display_options['fields']['field_spotlight_link']['table'] = 'field_data_field_spotlight_link';
  $handler->display->display_options['fields']['field_spotlight_link']['field'] = 'field_spotlight_link';
  $handler->display->display_options['fields']['field_spotlight_link']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotlight_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotlight_link']['settings'] = array(
    'custom_title' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_spotlight_link]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'spotlight_image',
    'image_link' => '',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Spotlight';
  $handler->display->display_options['fields']['field_description']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_description']['element_label_class'] = 'pane-title';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;

  /* Display: L3 footer pane */
  $handler = $view->new_display('panel_pane', 'L3 footer pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['id'] = 'l3-spotlight';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_spotlight_link']['id'] = 'field_spotlight_link';
  $handler->display->display_options['fields']['field_spotlight_link']['table'] = 'field_data_field_spotlight_link';
  $handler->display->display_options['fields']['field_spotlight_link']['field'] = 'field_spotlight_link';
  $handler->display->display_options['fields']['field_spotlight_link']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotlight_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotlight_link']['settings'] = array(
    'custom_title' => '',
  );
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_spotlight_link]';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'l3-spotlight-footer-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'l3_spotlight_footer_image',
    'image_link' => '',
  );
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = 'Spotlight';
  $handler->display->display_options['fields']['field_description']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_description']['element_label_class'] = 'l3-footer-pane-title';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['spotlight_queue'] = $view;

  return $export;
}
