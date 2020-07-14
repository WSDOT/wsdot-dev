<?php
function build_travel_alerts() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/travel-alerts.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='https://www.wsdot.wa.gov/ferries/schedule/bulletin.aspx'>Travel alerts</a></h2>";
    $output .= "    <p>Get notifications online or sign up for email or text message alerts.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}

function build_realtime_map() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/realtime-map.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='https://www.wsdot.com/ferries/vesselwatch/'>Realtime map</a></h2>";
    $output .= "    <p>See where your ferry is on a live map.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}

function build_terminal_cameras() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/terminal-cameras.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='https://www.wsdot.wa.gov/ferries/vesselwatch/Terminals.aspx'>Loading cameras by terminal</a></h2>";
    $output .= "    <p>Check terminal cameras and approximate vehicle spaces.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}

function build_other_ferry_systems() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/sanpoil-ferry.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='/ferries/terminals/other-ferries'>Other ferry systems</a></h2>";
    $output .= "    <p>Not finding the ferry you were looking for? Learn about other ferries in Washington State.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}

function build_about_our_fleet() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/about-fleet.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='/ferries/terminals/our-fleet'>About our fleet</a></h2>";
    $output .= "    <p>Learn about the boats that make up our fleet.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}
