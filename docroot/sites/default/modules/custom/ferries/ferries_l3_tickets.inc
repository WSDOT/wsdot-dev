<?php
/**
* Returns generated HTML for 'Online tickets' tile
*/
function build_online_tickets() {
    $output = build_l3_landing_tile("online-tickets.jpg",
                                    "https://wave2go.wsdot.com/webstore/landingPage?cg=21&c=76",
                                    "Online tickets",
                                    "Buy your tickets online on our Wave2Go website.");

    return $output;
}

/**
* Returns generated HTML for 'Ticket information' tile
*/
function build_ticket_information() {
    $output = build_l3_landing_tile("ticket-information.jpg",
                                    "/ferries/tickets/ticket-information",
                                    "Ticket information",
                                    "Learn more about the types of tickets you can buy.");

    return $output;
}

/**
* Returns generated HTML for 'Calculate fares' tile
*/
function build_calculate_fares() {
    $output = build_l3_landing_tile("calculate-fares.jpg",
                                    "https://www.wsdot.wa.gov/ferries/fares/",
                                    "Calculate fares",
                                    "Look up the cost of your ticket.");

    return $output;
}

/**
* Returns generated HTML for 'Vehicle reservations' tile
*/
function build_vehicle_reservations() {
    $output = build_l3_landing_tile("vehicle-reservations.jpg",
                                    "https://www.wsdot.wa.gov/ferries/reservations",
                                    "Vehicle reservations",
                                    "Save a spot for your vehicle on select routes.");

    return $output;
}

/**
* Returns generated HTML for 'Passes' tile
*/
function build_passes() {
    $output = build_l3_landing_tile("passes.jpg",
                                    "/ferries/tickets/passes",
                                    "Passes",
                                    "Frequent travelers, seniors, or people with disabilities can get discounted passes.");

    return $output;
}

/**
* Returns generated HTML for 'Refunds' tile
*/
function build_refunds() {
    $output = build_l3_landing_tile("refunds.jpg",
                                    "/ferries/tickets/refunds",
                                    "Refunds",
                                    "Need to cancel your trip? View our refund policy.");

    return $output;
}
