#include "Movie.h"
#include<iostream>

// Contructor (3 args)
Movie::Movie(std::string movie_name, std::string mpa_rating, int watched_count) 
    :movie_name(movie_name), mpa_rating(mpa_rating), watched_count(watched_count) {
        std::cout << std::endl << "[Movie::Movie][3-arg] => [" << movie_name << " | " << mpa_rating << " | " << watched_count << "]" << std::endl;
        //debug();
};

   // Copy constructor
Movie::Movie(const Movie &source) 
    :Movie{source.movie_name, source.mpa_rating, source.watched_count} {
    std::cout << std::endl << "[Movie::Movie][copy constructor] => [" << movie_name << " | " << mpa_rating << " | " << watched_count << "]" << std::endl;
}

void Movie::debug() {
    std::cout << "[Movie::debug] => [" << movie_name << " | " << mpa_rating << " | " << watched_count << "]" << std::endl;
}