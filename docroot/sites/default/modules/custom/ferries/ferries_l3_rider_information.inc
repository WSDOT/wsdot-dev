<?php
/**
* Returns generated HTML for 'First time riders' tile
*/
function build_first_time_riders() {
    $output = build_l3_landing_tile("first-time-riders.jpg",
                                    "/ferries/rider-information/first-time",
                                    "First time riders",
                                    "Learn how to travel the ferries by reading our rider guide.");

    return $output;
}

/**
* Returns generated HTML for 'Rider updates' tile
*/
function build_rider_updates() {
    $output = build_l3_landing_tile("rider-updates.jpg",
                                    "/ferries/rider-information/updates",
                                    "Rider updates",
                                    "Check current and long term updates and projects that may effect your route.");

    return $output;
}

/**
* Returns generated HTML for 'Commercial and oversized vehicles' tile
*/
function build_commercial_vehicles() {
    $output = build_l3_landing_tile("commercial-vehicles.jpg",
                                    "/ferries/rider-information/trucks",
                                    "Commercial and oversized vehicles",
                                    "Get information about taking your vehicle on the ferry.");

    return $output;
}

/**
* Returns generated HTML for 'Disabilities and medical assistance' tile
*/
function build_disabilities_medical() {
    $output = build_l3_landing_tile("disabilities-medical.jpg",
                                    "/ferries/rider-information/ada",
                                    "Disabilities and medical assistance",
                                    "Learn more about the accommodations we offer.");

    return $output;
}

/**
* Returns generated HTML for 'Safety and security' tile
*/
function build_safety_security() {
    $output = build_l3_landing_tile("safety-security.jpg",
                                    "/ferries/rider-information/safety",
                                    "Safety and security",
                                    "Learn about our security plan including what you can bring onboard.");

    return $output;
}

/**
* Returns generated HTML for 'Travel to Canada' tile
*/
function build_travel_canada() {
    $output = build_l3_landing_tile("travel-canada.jpg",
                                    "/ferries/rider-information/canada",
                                    "Travel to Canada",
                                    "Get information about our route to Sidney, B.C.");

    return $output;
}

/**
* Returns generated HTML for 'Groups and events' tile
*/
function build_groups_events() {
    $output = build_l3_landing_tile("groups-events.jpg",
                                    "/ferries/rider-information/groups",
                                    "Groups and events",
                                    "Learn about special occasions, school groups, carpools, or vanpool on the ferry.");

    return $output;
}

/**
* Returns generated HTML for 'What you can bring onboard' tile
*/
function build_bring_onboard() {
    $output = build_l3_landing_tile("bring-onboard.jpg",
                                    "/ferries/rider-information/bring-onboard",
                                    "What you can bring onboard",
                                    "Looking to bring your bicycle or pet? Get more information.");

    return $output;
}
