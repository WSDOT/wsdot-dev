<?php
function build_wsf_blog() {
    $output = "<div class='l3-footer-pane'>";
    $output .= "  <img src='/sites/default/themes/custom/ferries/images/wsf-blog.jpg' style='width: 225px; padding-bottom: 8px;'>";
    $output .= "  <div class='l3-footer-pane-content'>";
    $output .= "    <h2 class='l3-footer-pane-title'><a href='https://wsdotblog.blogspot.com/search/label/Washington%20State%20Ferries'>WSF Blog</a></h2>";
    $output .= "    <p>Check out our blog for all the latest updates on what’s going on with Washington State Ferries.</p>";
    $output .= "  </div>";
    $output .= "</div>";

    return $output;
}

function build_news_stories() {
    $output = "<div class='l3-footer-pane'>";
    $output .= "  <img src='/sites/default/themes/custom/ferries/images/news-stories.jpg' style='width: 225px; padding-bottom: 8px;'>";
    $output .= "  <div class='l3-footer-pane-content'>";
    $output .= "    <h2 class='l3-footer-pane-title'><a href='#'>News stories</a></h2>";
    $output .= "    <p>Check out our WSF Weekly Update and other news stories.</p>";
    $output .= "  </div>";
    $output .= "</div>";

    return $output;
}

function build_twitter() {
    $output = "<div class='l3-footer-pane'>";
    $output .= "  <img src='/sites/default/themes/custom/ferries/images/twitter.jpg' style='width: 225px; padding-bottom: 8px;'>";
    $output .= "  <div class='l3-footer-pane-content'>";
    $output .= "    <h2 class='l3-footer-pane-title'><a href='https://twitter.com/wsferries'>Twitter</a></h2>";
    $output .= "    <p>Follow us @wsferries for the best social media content you’ll find on the internet.</p>";
    $output .= "  </div>";
    $output .= "</div>";

    return $output;
}
