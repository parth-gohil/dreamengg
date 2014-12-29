<?php
/**
 * @file
 * dreamengg_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dreamengg_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:<nolink>
  $menu_links['main-menu_about-us:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'About Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-us:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_achievement:company/achievements
  $menu_links['main-menu_achievement:company/achievements'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'company/achievements',
    'router_path' => 'company/achievements',
    'link_title' => 'Achievement',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_achievement:company/achievements',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:<nolink>',
  );
  // Exported menu link: main-menu_company-profile:company/profile
  $menu_links['main-menu_company-profile:company/profile'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'company/profile',
    'router_path' => 'company/profile',
    'link_title' => 'Company Profile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_company-profile:company/profile',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:<nolink>',
  );
  // Exported menu link: main-menu_contact-us:contact
  $menu_links['main-menu_contact-us:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact-us:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_equipments:equipments
  $menu_links['main-menu_equipments:equipments'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'equipments',
    'router_path' => 'equipments',
    'link_title' => 'Equipments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_equipments:equipments',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_services:<nolink>',
  );
  // Exported menu link: main-menu_gallery:gallery
  $menu_links['main-menu_gallery:gallery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_gallery:gallery',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:<nolink>',
  );
  // Exported menu link: main-menu_history-to-present:company/history
  $menu_links['main-menu_history-to-present:company/history'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'company/history',
    'router_path' => 'company/history',
    'link_title' => 'History to Present',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_history-to-present:company/history',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:<nolink>',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_manpower:manpower
  $menu_links['main-menu_manpower:manpower'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manpower',
    'router_path' => 'manpower',
    'link_title' => 'Manpower',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manpower:manpower',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_services:<nolink>',
  );
  // Exported menu link: main-menu_our-team:<front>
  $menu_links['main-menu_our-team:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Our Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_our-team:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about-us:<nolink>',
  );
  // Exported menu link: main-menu_project-completed:project/completed
  $menu_links['main-menu_project-completed:project/completed'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'project/completed',
    'router_path' => 'project/completed',
    'link_title' => 'Project Completed',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_project-completed:project/completed',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_project:<nolink>',
  );
  // Exported menu link: main-menu_project-inhand:project/inhand
  $menu_links['main-menu_project-inhand:project/inhand'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'project/inhand',
    'router_path' => 'project/inhand',
    'link_title' => 'Project InHand',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_project-inhand:project/inhand',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_project:<nolink>',
  );
  // Exported menu link: main-menu_project:<nolink>
  $menu_links['main-menu_project:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Project',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_project:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_services:<nolink>
  $menu_links['main-menu_services:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_services:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Achievement');
  t('Company Profile');
  t('Contact Us');
  t('Equipments');
  t('Gallery');
  t('History to Present');
  t('Home');
  t('Manpower');
  t('Our Team');
  t('Project');
  t('Project Completed');
  t('Project InHand');
  t('Services');


  return $menu_links;
}
