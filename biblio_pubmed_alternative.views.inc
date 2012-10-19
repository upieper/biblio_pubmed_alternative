<?php
function biblio_pubmed_alternative_views_data() {

  $data['biblio_pubmed_alt']['table']['group']  = t('Biblio');
  $data['biblio_pubmed_alt']['table']['base']  = array(
      'field' => 'nid',
      'title' => t('PubMed Table'),
      'help' => t('This table contains PubMed Identifiers'),
      'weight' => 10,
  );

  $data['biblio_pubmed_alt']['table']['join'] = array(
      'node' => array(
          'left_field' => 'nid',
          'field' => 'nid',
      ),
  );

  $data['biblio_pubmed_alt']['biblio_pubmed_id'] = array(
      'title' => t('PubMed ID'),
      'help' => t('The PubMed ID (http://pubmed.org)'),
      'field' => array(
          'handler' => 'views_handler_field',
          'click sortable' => TRUE,
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_integer',
      ),
      'argument' => array(
          'handler' => 'views_handler_argument_integer',
      ),

  );
  $data['biblio_pubmed_alt']['biblio_pmcid'] = array(
      'title' => t('PMCID'),
      'help' => t('The PubMed Central ID (http://www.ncbi.nlm.nih.gov/pmc/)'),
      'field' => array(
          'handler' => 'views_handler_field',
          'click sortable' => TRUE,
      ),
      'sort' => array(
          'handler' => 'views_handler_sort',
      ),
      'filter' => array(
          'handler' => 'views_handler_filter_string',
      ),
      'argument' => array(
          'handler' => 'views_handler_argument_string',
      ),

  );

  return $data;
}

