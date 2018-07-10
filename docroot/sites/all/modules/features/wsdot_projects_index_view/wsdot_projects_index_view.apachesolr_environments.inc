<?php
/**
 * @file
 * wsdot_projects_index_view.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function wsdot_projects_index_view_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'acquia_search_server_1';
  $environment->name = 'Acquia Search';
  $environment->url = 'http://useast1-c1.acquia-search.com/solr/CDGZ-73191';
  $environment->service_class = 'AcquiaSearchService';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_read_only' => 1,
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array();
  $export['acquia_search_server_1'] = $environment;

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_read_only' => '0',
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array();
  $export['solr'] = $environment;

  return $export;
}
