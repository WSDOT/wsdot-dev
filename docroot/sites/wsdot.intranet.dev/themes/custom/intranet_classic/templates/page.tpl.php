<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<div id="wrapper">
  <div class="pagehead">
    <div class="toplinks"> <a href="http://www.wsdot.wa.gov/traffic/">Traffic and Travel Info</a> | <a href="http://wwwi.wsdot.wa.gov/employee/directory/">Find an Employee</a> | <a href="http://www.wsdot.wa.gov/">WSDOT Home</a> </div>
    <div id="logo"><a href="http://www.wsdot.wa.gov/">Welcome to the Intranet</a></div>
    <div class="tagline">Insert Office Name Here</div>
    <div id="navbar">
      <ul id="mainnav">
        <li><a href="http://wwwi.wsdot.wa.gov/Onedot/"><span>Intranet Home</span></a></li>
        <li><a href="http://wwwi.wsdot.wa.gov/projects/"><span>Project Delivery</span></a></li>
        <li><a href="http://wwwi.wsdot.wa.gov/siteindex/"><span>WSDOT A-Z</span></a></li>
        <li><a href="http://wwwi.wsdot.wa.gov/employee/"><span>Employee Center</span></a></li>
        <li><a href="http://wwwi.wsdot.wa.gov/data/"><span>Data Drawer</span></a></li>
        <li><a href="http://wwwi.wsdot.wa.gov/fasc/adminservices/forms/"><span>Forms</span></a></li>
      </ul>
    </div>
  </div>
  <table border="0" cellspacing="0" cellpadding="0" id="main" style="border-collapse: separate;">
    <tr>
      <td  valign="top" class="leftcolumn" width="165"><form method="get" action="https://searchi.wsdot.wa.gov/search" class="search">
          <input name="q" type="text" size="16" >
          <input name="imageField" type="image" src="/sites/wsdot.intranet.dev/themes/custom/intranet_classic/images/topnav/go.gif" align="middle">
          <input type="hidden" name="site" value="Intranet">
          <input type="hidden" name="client" value="default_frontend">
          <input type="hidden" name="proxystylesheet" value="default_frontend">
          <input type="hidden" name="output" value="xml_no_dtd">
        </form>
        <?php if ($page['sidebar_first']): ?>
          <div id="sidebar-first" class="column sidebar"><div class="section">
            <?php print render($page['sidebar_first']); ?>
          </div></div>
        <?php endif; ?>
      </td>
      <td class="content" valign="top">
        <?php print render($title_prefix); ?>
        <?php if ($title): ?><h2 class="title" id="page-title"><?php print $title; ?></h2><?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
        <?php print render($page['content']); ?>
      </td>
      <!--Begin Right Column-->
      <td class="rightcolumn" width="165" valign="top">
        <?php if ($page['sidebar_second']): ?>
          <div id="sidebar-second" class="column sidebar"><div class="section">
            <?php print render($page['sidebar_second']); ?>
          </div></div>
        <?php endif; ?>
      </td>
    </tr>
  </table>
</div>
<div id="footer">
  <div class="bottomlinks">
    <?php print render($page['footer']); ?>
  </div>
</div>
