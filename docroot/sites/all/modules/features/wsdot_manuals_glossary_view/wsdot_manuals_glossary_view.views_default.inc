<?php
/**
 * @file
 * wsdot_manuals_glossary_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wsdot_manuals_glossary_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'manuals_glossary';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Manuals Glossary';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Glossary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Citation */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_citation']['hide_empty'] = TRUE;
  /* Field: Taxonomy term: See also */
  $handler->display->display_options['fields']['field_see_also']['id'] = 'field_see_also';
  $handler->display->display_options['fields']['field_see_also']['table'] = 'field_data_field_see_also';
  $handler->display->display_options['fields']['field_see_also']['field'] = 'field_see_also';
  $handler->display->display_options['fields']['field_see_also']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_see_also']['hide_empty'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'glossary' => 'glossary',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'manuals_glossary:block_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Citation */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_citation']['hide_empty'] = TRUE;
  /* Field: Taxonomy term: See also */
  $handler->display->display_options['fields']['field_see_also']['id'] = 'field_see_also';
  $handler->display->display_options['fields']['field_see_also']['table'] = 'field_data_field_see_also';
  $handler->display->display_options['fields']['field_see_also']['field'] = 'field_see_also';
  $handler->display->display_options['fields']['field_see_also']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_see_also']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '1';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '1';
  $handler->display->display_options['arguments']['name']['case'] = 'upper';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';

  /* Display: Utilities */
  $handler = $view->new_display('page', 'Utilities', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Glossary - Utilities manual';
  $handler->display->display_options['display_description'] = 'Utilities manual';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'manuals_glossary:block_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Citation */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_citation']['hide_empty'] = TRUE;
  /* Field: Taxonomy term: See also */
  $handler->display->display_options['fields']['field_see_also']['id'] = 'field_see_also';
  $handler->display->display_options['fields']['field_see_also']['table'] = 'field_data_field_see_also';
  $handler->display->display_options['fields']['field_see_also']['field'] = 'field_see_also';
  $handler->display->display_options['fields']['field_see_also']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_see_also']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'glossary' => 'glossary',
  );
  /* Filter criterion: Taxonomy term: Source (field_source) */
  $handler->display->display_options['filters']['field_source_tid']['id'] = 'field_source_tid';
  $handler->display->display_options['filters']['field_source_tid']['table'] = 'field_data_field_source';
  $handler->display->display_options['filters']['field_source_tid']['field'] = 'field_source_tid';
  $handler->display->display_options['filters']['field_source_tid']['value'] = array(
    27013 => '27013',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/utilities';

  /* Display: Design */
  $handler = $view->new_display('page', 'Design', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Glossary - Design manual';
  $handler->display->display_options['display_description'] = 'Design manual';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: View area */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'manuals_glossary:block_1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Citation */
  $handler->display->display_options['fields']['field_citation']['id'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['table'] = 'field_data_field_citation';
  $handler->display->display_options['fields']['field_citation']['field'] = 'field_citation';
  $handler->display->display_options['fields']['field_citation']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_citation']['hide_empty'] = TRUE;
  /* Field: Taxonomy term: See also */
  $handler->display->display_options['fields']['field_see_also']['id'] = 'field_see_also';
  $handler->display->display_options['fields']['field_see_also']['table'] = 'field_data_field_see_also';
  $handler->display->display_options['fields']['field_see_also']['field'] = 'field_see_also';
  $handler->display->display_options['fields']['field_see_also']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_see_also']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'glossary' => 'glossary',
  );
  /* Filter criterion: Taxonomy term: Source (field_source) */
  $handler->display->display_options['filters']['field_source_tid']['id'] = 'field_source_tid';
  $handler->display->display_options['filters']['field_source_tid']['table'] = 'field_data_field_source';
  $handler->display->display_options['filters']['field_source_tid']['field'] = 'field_source_tid';
  $handler->display->display_options['filters']['field_source_tid']['value'] = array(
    27005 => '27005',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/design';
  $export['manuals_glossary'] = $view;

  return $export;
}
