<?php
function build_schedule_by_route() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/route-map.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='https://www.wsdot.com/ferries/schedule/scheduledetailbyroute.aspx'>Schedule by route</a></h2>";
    $output .= "    <p>Find your route and see the sailing times.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}

function build_schedule_by_date() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/date-calendar.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='https://www.wsdot.com/ferries/schedule/schedulebydate.aspx'>Schedule by date</a></h2>";
    $output .= "    <p>Choose a date and route to see a list of sailings.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}

function build_low_tide_warning() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/green-white-foamy-water.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='/ferries/low-tide'>Low tide warning</a></h2>";
    $output .= "    <p>Learn about tides that effect large vehicles on the Vashon and Mukilteo routes.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}
