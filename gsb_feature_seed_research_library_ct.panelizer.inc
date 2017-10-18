<?php
/**
 * @file
 * gsb_feature_seed_research_library_ct.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gsb_feature_seed_research_library_ct_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'seed_research_project';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:seed_research_project:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'gsb-landing-standard-page-one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
      'quicklinks' => NULL,
      'sidebar' => NULL,
      'fullheader' => NULL,
      'maintop' => NULL,
      'mainmiddlefirst' => NULL,
      'mainmiddlesecond' => NULL,
      'mainbottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1b752e04-df30-4bb5-afc7-5c9fdcdd62f9';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:seed_research_project:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5839e009-9264-4e22-bc7b-e39a6b342bcc';
  $pane->panel = 'fullheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_srl_principal_investigator';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'field_collection_fields',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'add' => 'Add',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'delete' => 'Delete',
      'description' => 1,
      'edit' => 'Edit',
      'view_mode' => 'full',
      'translate' => '',
    ),
    'context' => 'panelizer',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5839e009-9264-4e22-bc7b-e39a6b342bcc';
  $display->content['new-5839e009-9264-4e22-bc7b-e39a6b342bcc'] = $pane;
  $display->panels['fullheader'][0] = 'new-5839e009-9264-4e22-bc7b-e39a6b342bcc';
  $pane = new stdClass();
  $pane->pid = 'new-35aec136-bea9-4e7f-9a3a-35b0558d011d';
  $pane->panel = 'fullheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_srl_co_investigators';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'field_collection_view',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'add' => '',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'delete' => '',
      'description' => 1,
      'edit' => '',
      'view_mode' => 'full',
      'translate' => '',
    ),
    'context' => 'panelizer',
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
  $pane->uuid = '35aec136-bea9-4e7f-9a3a-35b0558d011d';
  $display->content['new-35aec136-bea9-4e7f-9a3a-35b0558d011d'] = $pane;
  $display->panels['fullheader'][1] = 'new-35aec136-bea9-4e7f-9a3a-35b0558d011d';
  $pane = new stdClass();
  $pane->pid = 'new-88028512-4a36-4e01-8455-0b101231bab3';
  $pane->panel = 'fullheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_month';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(),
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '88028512-4a36-4e01-8455-0b101231bab3';
  $display->content['new-88028512-4a36-4e01-8455-0b101231bab3'] = $pane;
  $display->panels['fullheader'][2] = 'new-88028512-4a36-4e01-8455-0b101231bab3';
  $pane = new stdClass();
  $pane->pid = 'new-60a167ad-936b-47e5-914a-c47256460043';
  $pane->panel = 'fullheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_year';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(),
      'format_type' => 'long',
      'fromto' => 'both',
      'multiple_from' => '',
      'multiple_number' => '',
      'multiple_to' => '',
      'show_remaining_days' => FALSE,
      'show_repeat_rule' => 'show',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '60a167ad-936b-47e5-914a-c47256460043';
  $display->content['new-60a167ad-936b-47e5-914a-c47256460043'] = $pane;
  $display->panels['fullheader'][3] = 'new-60a167ad-936b-47e5-914a-c47256460043';
  $pane = new stdClass();
  $pane->pid = 'new-84f627e7-5246-4cd7-b6a2-f5ecb445a143';
  $pane->panel = 'fullheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_award_type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(),
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '84f627e7-5246-4cd7-b6a2-f5ecb445a143';
  $display->content['new-84f627e7-5246-4cd7-b6a2-f5ecb445a143'] = $pane;
  $display->panels['fullheader'][4] = 'new-84f627e7-5246-4cd7-b6a2-f5ecb445a143';
  $pane = new stdClass();
  $pane->pid = 'new-67e7943c-38c4-49af-8e6a-d7f167dbc545';
  $pane->panel = 'fullheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_status';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(),
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '67e7943c-38c4-49af-8e6a-d7f167dbc545';
  $display->content['new-67e7943c-38c4-49af-8e6a-d7f167dbc545'] = $pane;
  $display->panels['fullheader'][5] = 'new-67e7943c-38c4-49af-8e6a-d7f167dbc545';
  $pane = new stdClass();
  $pane->pid = 'new-545629d0-1d47-42ea-896f-77640aa23913';
  $pane->panel = 'fullheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_abstract';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(),
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '545629d0-1d47-42ea-896f-77640aa23913';
  $display->content['new-545629d0-1d47-42ea-896f-77640aa23913'] = $pane;
  $display->panels['fullheader'][6] = 'new-545629d0-1d47-42ea-896f-77640aa23913';
  $pane = new stdClass();
  $pane->pid = 'new-5e167d78-1029-4814-bc23-a4304ea56c58';
  $pane->panel = 'fullheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_research_locations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(),
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '5e167d78-1029-4814-bc23-a4304ea56c58';
  $display->content['new-5e167d78-1029-4814-bc23-a4304ea56c58'] = $pane;
  $display->panels['fullheader'][7] = 'new-5e167d78-1029-4814-bc23-a4304ea56c58';
  $pane = new stdClass();
  $pane->pid = 'new-4741bb6d-9204-473c-981a-ed4d6883dc0e';
  $pane->panel = 'fullheader';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_research_results';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'field_collection_view',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'add' => 'Add',
      'conditions' => array(),
      'delete' => 'Delete',
      'description' => TRUE,
      'edit' => 'Edit',
      'view_mode' => 'full',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '4741bb6d-9204-473c-981a-ed4d6883dc0e';
  $display->content['new-4741bb6d-9204-473c-981a-ed4d6883dc0e'] = $pane;
  $display->panels['fullheader'][8] = 'new-4741bb6d-9204-473c-981a-ed4d6883dc0e';
  $pane = new stdClass();
  $pane->pid = 'new-f89ad9d4-ce17-41df-beb0-8513d8ddee6e';
  $pane->panel = 'fullheader';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'f89ad9d4-ce17-41df-beb0-8513d8ddee6e';
  $display->content['new-f89ad9d4-ce17-41df-beb0-8513d8ddee6e'] = $pane;
  $display->panels['fullheader'][9] = 'new-f89ad9d4-ce17-41df-beb0-8513d8ddee6e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5839e009-9264-4e22-bc7b-e39a6b342bcc';
  $panelizer->display = $display;
  $export['node:seed_research_project:default'] = $panelizer;

  return $export;
}
