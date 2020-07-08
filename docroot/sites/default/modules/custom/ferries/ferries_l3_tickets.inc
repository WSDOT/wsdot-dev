<?php
function build_online_tickets() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/online-tickets.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='https://wave2go.wsdot.com/webstore/landingPage?cg=21&c=76'>Online tickets</a></h2>";
    $output .= "    <p>Buy your tickets online on our Wave2Go website.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}

function build_ticket_information() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/ticket-information.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='/ferries/tickets/ticket-information'>Ticket information</a></h2>";
    $output .= "    <p>Learn more about the types of tickets you can buy.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}

function build_calculate_fares() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/calculate-fares.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='https://www.wsdot.wa.gov/ferries/fares/'>Calculate fares</a></h2>";
    $output .= "    <p>Look up the cost of your ticket.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}

function build_vehicle_reservations() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/vehicle-reservations.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='https://www.wsdot.wa.gov/ferries/reservations'>Vehicle reservations</a></h2>";
    $output .= "    <p>Save a spot for your vehicle on select routes.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}

function build_passes() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/passes.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='/ferries/tickets/passes'>Passes</a></h2>";
    $output .= "    <p>Frequent travelers, seniors, or people with disabilities can get discounted passes.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}

function build_refunds() {
    $output = "<div class='l3-pane'>";
    $output .= "  <div class='l3-pane-image' style='background-image: url(/sites/default/themes/custom/ferries/images/refunds.jpg);'></div>";
    $output .= "  <div class='l3-pane-content'>";
    $output .= "    <h2 class='l3-pane-title'><a href='/ferries/tickets/refunds'>Refunds</a></h2>";
    $output .= "    <p>Need to cancel your trip? View our refund policy.</p>";
    $output .= "  </div>";
    $output .= "  <div class='cb'></div>";
    $output .= "</div>";

    return $output;
}
