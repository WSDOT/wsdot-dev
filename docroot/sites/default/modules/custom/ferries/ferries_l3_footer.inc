<?php
/**
* Returns generated HTML for 'WSF Blog' footer tile
*/
function build_wsf_blog_footer() {
    $output = build_l3_landing_footer_tile("wsf-blog.jpg",
	                                       "Salish artwork of orca whales at the Orca Island terminal",
                                           "https://wsdotblog.blogspot.com/search/label/Washington%20State%20Ferries",
                                           "Blog",
                                           "Check out our blog for all the latest updates on what’s going on with Washington State Ferries.");

    return $output;
}

/**
* Returns generated HTML for 'Weekly update' footer tile
*/
function build_weekly_update_footer() {
    $output = build_l3_landing_footer_tile("weekly-update-footer.jpg",
	                                       "Boarding a ferry from the dock with another Washington State Ferry visibly docked near by",
                                           "/ferries/about-us/weekly-update",
                                           "Weekly update",
                                           "Read this week's happenings at Washington State Ferries or sign up to receive weekly email updates.");

    return $output;
}

/**
* Returns generated HTML for 'News stories' footer tile
*/
function build_news_stories_footer() {
    $output = build_l3_landing_footer_tile("news-stories.jpg",
	                                       "A group of men wearing matching black and white striped shirts and carrying instruments in a ferry gally",
                                           "/news/washington%20state%20ferries",
                                           "News stories",
                                           "View recent Washington State Ferries news releases.");

    return $output;
}

/**
* Returns generated HTML for 'Twitter' footer tile
*/
function build_twitter_footer() {
    $output = build_l3_landing_footer_tile("twitter.jpg",
	                                       "Woman dressed as a ferry with wings looking over a gaurdrail",
                                           "https://twitter.com/wsferries",
                                           "Twitter",
                                           "Follow us @wsferries for the latest incidents or events that affect riders and the communities we serve.");

    return $output;
}
