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
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>This glossary consolidates all the terms included on our published <a href="http://www.wsdot.wa.gov/publications/manuals/index.htm">WSDOT Manuals</a> website.
Terms are listed alphabetically and identified by the manual (and occasionally manuals) they appear in. Where a term has entries in multiple manuals with differing definitions, the entries from each manual are distinguished using parentheses, e.g. ‘right of way (Design)’ vs ‘right of way (Highway Runoff).</p>
<p>The Library and WSDOT Knowledge Services are interested in further development of this glossary, both to improve consistency and increase ease of access. If you have any questions, comments, or see any errors, please send them to <a href="mailto:woodwaf@wsdot.wa.gov">Riley Woodward-Pratt</a>.</p>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
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
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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

  /* Display: Bridge Design */
  $handler = $view->new_display('page', 'Bridge Design', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Glossary - Bridge Design manual';
  $handler->display->display_options['display_description'] = 'Bridge Design manual';
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
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
    27626 => '27626',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/bridge-design';

  /* Display: Consultant Services */
  $handler = $view->new_display('page', 'Consultant Services', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Glossary - Consultant Services manual';
  $handler->display->display_options['display_description'] = 'Consultant Services manual';
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
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
    27631 => '27631',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/consultant-services';

  /* Display: Cost Estimating */
  $handler = $view->new_display('page', 'Cost Estimating', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Glossary - Cost Estimating manual';
  $handler->display->display_options['display_description'] = 'Cost Estimating manual';
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
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
    27636 => '27636',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/cost-estimating';

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
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
    27641 => '27641',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/design';

  /* Display: Design - ADA/Pedestrian */
  $handler = $view->new_display('page', 'Design - ADA/Pedestrian', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Glossary - Design - ADA/Pedestrian manual';
  $handler->display->display_options['display_description'] = 'Design - ADA/Pedestrian manual';
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
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
    27646 => '27646',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/design-ada';

  /* Display: Environmental */
  $handler = $view->new_display('page', 'Environmental', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Glossary - Environmental manual';
  $handler->display->display_options['display_description'] = 'Environmental manual';
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
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
    27651 => '27651',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/environmental';

  /* Display: Highway Runoff */
  $handler = $view->new_display('page', 'Highway Runoff', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Glossary - Highway Runoff manual';
  $handler->display->display_options['display_description'] = 'Highway Runoff manual';
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
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
    27656 => '27656',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/highway-runoff';

  /* Display: Right of Way */
  $handler = $view->new_display('page', 'Right of Way', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Glossary - Right of Way manual';
  $handler->display->display_options['display_description'] = 'Right of Way manual';
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
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
    27661 => '27661',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/right-way';

  /* Display: Roadside */
  $handler = $view->new_display('page', 'Roadside', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Glossary - Roadside manual';
  $handler->display->display_options['display_description'] = 'Roadside manual';
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
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
    27666 => '27666',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/roadside';

  /* Display: Roadside Policy */
  $handler = $view->new_display('page', 'Roadside Policy', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Glossary - Roadside Policy manual';
  $handler->display->display_options['display_description'] = 'Roadside Policy manual';
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
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
    27671 => '27671',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/roadside-policy';

  /* Display: Standard Specifications */
  $handler = $view->new_display('page', 'Standard Specifications', 'page_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Glossary - Standard Specifications manual';
  $handler->display->display_options['display_description'] = 'Standard Specifications manual';
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
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
    27676 => '27676',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/standard-specifications';

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
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_source']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_source']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_source']['delta_offset'] = '0';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
    27681 => '27681',
  );
  $handler->display->display_options['filters']['field_source_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid']['vocabulary'] = 'source';
  $handler->display->display_options['path'] = 'engineering-standards/manuals/glossary/utilities';
  $export['manuals_glossary'] = $view;

  return $export;
}
