<?php
/**
* Returns generated HTML for 'Travel alerts' tile
*/
function build_travel_alerts() {
    $output = build_l3_landing_tile("travel-alerts.jpg",
                                    "https://www.wsdot.wa.gov/ferries/schedule/bulletin.aspx",
                                    "Travel alerts",
                                    "Get notifications online or sign up for email or text message alerts.");

    return $output;
}

/**
* Returns generated HTML for 'Realtime map' tile
*/
function build_realtime_map() {
    $output = build_l3_landing_tile("realtime-map.jpg",
                                    "https://www.wsdot.com/ferries/vesselwatch/",
                                    "Realtime map",
                                    "See where your ferry is on a live map.");

    return $output;
}

/**
* Returns generated HTML for 'Loading cameras by terminal' tile
*/
function build_terminal_cameras() {
    $output = build_l3_landing_tile("terminal-cameras.jpg",
                                    "https://www.wsdot.wa.gov/ferries/vesselwatch/terminals.aspx",
                                    "Loading cameras by terminal",
                                    "Check terminal cameras and approximate vehicle spaces.");

    return $output;
}

/**
* Returns generated HTML for 'Other ferry systems' tile
*/
function build_other_ferry_systems() {
    $output = build_l3_landing_tile("sanpoil-ferry.jpg",
                                    "/ferries/terminals/other-ferries",
                                    "Other ferry systems",
                                    "Not finding the ferry you were looking for? Learn about other ferries in Washington State.");

    return $output;
}

/**
* Returns generated HTML for 'About our fleet' tile
*/
function build_about_our_fleet() {
    $output = build_l3_landing_tile("about-fleet.jpg",
                                    "/ferries/terminals/our-fleet",
                                    "About our fleet",
                                    "Learn about the boats that make up our fleet.");

    return $output;
}
