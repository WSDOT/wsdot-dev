<?php
/**
* Returns generated HTML for 'Schedule by route' tile
*/
function build_schedule_by_route() {
    $output = build_l3_landing_tile("route-map.jpg",
                                    "/ferries/schedules/schedule-route",
                                    "Schedule by route",
                                    "Find your route and see the sailing times.");

    return $output;
}

/**
* Returns generated HTML for 'Schedule by date' tile
*/
function build_schedule_by_date() {
    $output = build_l3_landing_tile("date-calendar.jpg",
                                    "https://www.wsdot.com/ferries/schedule/schedulebydate.aspx",
                                    "Schedule by date",
                                    "Choose a date and route to see a list of sailings.");

    return $output;
}

/**
* Returns generated HTML for 'Low tide warning' tile
*/
function build_low_tide_warning() {
    $output = build_l3_landing_tile("green-white-foamy-water.jpg",
                                    "/ferries/schedules/low-tide",
                                    "Low tide warning",
                                    "Learn about tides that effect large vehicles on the Vashon and Mukilteo routes.");

    return $output;
}
