<?php
/**
 * @file
 * gsb_feature_seed_research_library_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_seed_research_library_ct_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_award_date|node|seed_research_project|form';
  $field_group->group_name = 'group_award_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'seed_research_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Award Date',
    'weight' => '5',
    'children' => array(
      0 => 'field_month',
      1 => 'field_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_award_date|node|seed_research_project|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Award Date');

  return $field_groups;
}
