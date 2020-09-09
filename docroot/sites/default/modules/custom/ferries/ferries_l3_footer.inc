<?php
/**
* Returns generated HTML for 'WSF Blog' footer tile
*/
function build_wsf_blog() {
    $output = build_l3_landing_footer_tile("wsf-blog.jpg",
                                           "https://wsdotblog.blogspot.com/search/label/Washington%20State%20Ferries",
                                           "WSF Blog",
                                           "Check out our blog for all the latest updates on what’s going on with Washington State Ferries.");

    return $output;
}

/**
* Returns generated HTML for 'Weekly update' footer tile
*/
function build_weekly_update() {
    $output = build_l3_landing_footer_tile("weekly-update.jpg",
                                           "/ferries/about-us/weekly-update",
                                           "Weekly update",
                                           "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus a enim dolor.");

    return $output;
}

/**
* Returns generated HTML for 'News stories' footer tile
*/
function build_news_stories() {
    $output = build_l3_landing_footer_tile("news-stories.jpg",
                                           "/news/washington%20state%20ferries",
                                           "News stories",
                                           "Fusce cursus odio at lectus consectetur consectetur. Lorem ipsum dolor sit amet, consectetur.");

    return $output;
}

/**
* Returns generated HTML for 'Twitter' footer tile
*/
function build_twitter() {
    $output = build_l3_landing_footer_tile("twitter.jpg",
                                           "https://twitter.com/wsferries",
                                           "Twitter",
                                           "Follow us @wsferries for the best social media content you’ll find on the internet.");

    return $output;
}
