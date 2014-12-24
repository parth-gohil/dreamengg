<?php
/**
 * @file
 * Additional file for block views..
 */

/**
 * Callback function for company portfolio block.
 * @return string
 */
function dreamengg_blocks_company_portfolio_block_view() {
  $block = array();
  
  $block['subject'] = t('About <span class="head-light">DREAM ENGINEERS & CONTRACTORS</span>');
  $block['content'] = array(
    '#markup' => '<div class="company-portfolio">'.t("Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.").'</div>'
  );

  return $block;
}

/**
 * * Callback function for company services block.
 * @return type
 */
function dreamengg_blocks_homepage_services_block_view() {
  $block = array();

  $block['content'] = array(
    '#markup' => theme('homepage_services'),
  );
  return $block;
}

/**
 * * Callback function for company manpower block.
 * @return type
 */
function dreamengg_blocks_homepage_manpower_block_view() {
  $block = array();

  $block['content'] = array(
    '#markup' => theme('homepage_manpower'),
  );
  return $block;
}

/**
 * * Callback function for company equipments block.
 * @return type
 */
function dreamengg_blocks_homepage_equipments_block_view() {
  $block = array();

  $block['content'] = array(
    '#markup' => theme('homepage_equipments'),
  );
  return $block;
}

/**
 * * Callback function for contact address block.
 * @return type
 */
function dreamengg_blocks_contact_address_block_view() {
  $block = array();

  $block['content'] = array(
    '#markup' => theme('contact_address'),
  );
  return $block;
}

/**
 * * Callback function for contact map block.
 * @return type
 */
function dreamengg_blocks_contact_map_block_view() {
  $block = array();

  $block['content'] = array(
    '#markup' => theme('contact_map'),
  );
  return $block;
}

