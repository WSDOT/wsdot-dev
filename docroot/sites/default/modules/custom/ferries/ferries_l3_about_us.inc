<?php
/**
* Returns generated HTML for 'Contact ferries' tile
*/
function build_contact_ferries() {
    $output = build_l3_landing_tile("contact-ferries.jpg",
                                    "https://wsdot.wa.gov/ferries/infodesk/customerfeedback",
                                    "Contact ferries",
                                    "Get in touch with questions or comments.");

    return $output;
}

/**
* Returns generated HTML for 'Employment' tile
*/
function build_employment() {
    $output = build_l3_landing_tile("employment.jpg",
                                    "/ferries/about-us/employment",
                                    "Employment",
                                    "View open positions with Washington State Ferries.");

    return $output;
}

/**
* Returns generated HTML for 'Business with ferries' tile
*/
function build_business() {
    $output = build_l3_landing_tile("business.jpg",
                                    "/ferries/about-us/business",
                                    "Business with ferries",
                                    "Learn about contracts and other opportunities to work together.");

    return $output;
}

/**
* Returns generated HTML for 'Planning' tile
*/
function build_planning() {
    $output = build_l3_landing_tile("planning.jpg",
                                    "/ferries/about-us/planning",
                                    "Planning",
                                    "Learn about our current plans, programs, and statistics for the ferry system.");

    return $output;
}

/**
* Returns generated HTML for 'Accountability' tile
*/
function build_accountability() {
    $output = build_l3_landing_tile("accountability.jpg",
                                    "/ferries/about-us/accountability",
                                    "Accountability",
                                    "View on-time performance statistics for all routes each month.");

    return $output;
}

/**
* Returns generated HTML for 'Environment' tile
*/
function build_environment() {
    $output = build_l3_landing_tile("environment.jpg",
                                    "/ferries/about-us/environment",
                                    "Environment",
                                    "Learn how we protect employees, customers, and the natural environment of the Puget Sound Region.");

    return $output;
}

/**
* Returns generated HTML for 'Construction and maintenance' tile
*/
function build_construction_maintenance() {
    $output = build_l3_landing_tile("construction-maintenance.jpg",
                                    "/ferries/about-us/construction",
                                    "Construction and maintenance",
                                    "See how construction and maintenance will affect your trip.");

    return $output;
}

/**
* Returns generated HTML for 'Public participation' tile
*/
function build_public_participation() {
    $output = build_l3_landing_tile("public-participation.jpg",
                                    "/ferries/about-us/public-participation",
                                    "Public participation",
                                    "Understand how you can get involved with community and advisory meetings.");

    return $output;
}

/**
* Returns generated HTML for 'API for ferries' tile
*/
function build_ferries_api() {
    $output = build_l3_landing_tile("ferries-api.jpg",
                                    "https://www.wsdot.wa.gov/traffic/api",
                                    "API for ferries",
                                    "Get APIs for our Ferries site.");

    return $output;
}
