#include "Movie.h"
#include<iostream>

Movie::Movie(std::string movie_name, std::string mpa_rating, int watched_count) 
    :movie_name(movie_name), mpa_rating(mpa_rating), watched_count(watched_count) {
        std::cout << "[Movie::Movie][3-arg] => [" << movie_name << " | " << mpa_rating << " | " << watched_count << "]" << std::endl;
        debug();
};

void Movie::debug() {
    std::cout << "[Movie::debug] => [" << movie_name << " | " << mpa_rating << " | " << watched_count << "]" << std::endl;
}