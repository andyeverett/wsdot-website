<?php
/**
 * @file
 * wsdot_abstract_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wsdot_abstract_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_core_metadata|node|abstracts|form';
  $field_group->group_name = 'group_core_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publications';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Core Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'field_last_modified_date',
      1 => 'field_publication_number',
      2 => 'field_subjects',
      3 => 'field_description',
      4 => 'field_orginating_organizations',
      5 => 'field_number_of_pages',
      6 => 'field_related_publications',
      7 => 'field_chapter',
      8 => 'field_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-core-metadata field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_core_metadata|node|abstracts|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_manuals_metadata|node|abstracts|form';
  $field_group->group_name = 'group_manuals_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publications';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Manuals Specific Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'field_contact_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Manuals Specific Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-manuals-metadata field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_manuals_metadata|node|abstracts|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_reports_metadata|node|abstracts|form';
  $field_group->group_name = 'group_research_reports_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publications';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Research Reports Metadata',
    'weight' => '5',
    'children' => array(
      0 => 'field_authors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Research Reports Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-research-reports-metadata field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_research_reports_metadata|node|abstracts|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_revision_history|node|abstracts|form';
  $field_group->group_name = 'group_revision_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publications';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Revision History',
    'weight' => '7',
    'children' => array(
      0 => 'field_version_date',
      1 => 'field_publication_version_',
      2 => 'field_complete',
      3 => 'field_revision',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Revision History',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-revision-history field-group-fieldset',
        'description' => 'Revision history of manual',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_revision_history|node|abstracts|form'] = $field_group;

  return $export;
}