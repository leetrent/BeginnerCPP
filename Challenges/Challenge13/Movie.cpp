#include "Movie.h"
#include<iostream>

// Contructor (3 args)
Movie::Movie(std::string movie_name, std::string mpa_rating, int watched_count) 
    :movie_name(movie_name), mpa_rating(mpa_rating), watched_count(watched_count) {
        //std::cout << std::endl << "[Movie::Movie][3-arg] => [" << movie_name << " | " << mpa_rating << " | " << watched_count << "]" << std::endl;
};

   // Copy constructor
Movie::Movie(const Movie &source) 
    :Movie{source.movie_name, source.mpa_rating, source.watched_count} {
    //movie_name.append(" (copy)");
    //std::cout << std::endl << "[Movie::Movie][copy constructor] => [" << movie_name << " | " << mpa_rating << " | " << watched_count << "]" << std::endl;
}

// Destructor
Movie::~Movie() {
    //std::cout << std::endl << "[Movie::Movie][destructor] => [" << movie_name << " | " << mpa_rating << " | " << watched_count << "]" << std::endl;
}

// Getters
std::string Movie:: get_movie_name() const {
    return movie_name;
}

std::string Movie::get_mpa_rating() const {
    return mpa_rating;
}

int Movie::get_watched_count() const {
    return watched_count;
}

void Movie::increment_watched_count() {
    this->watched_count += 1;
}

void Movie::display() const {
    std::cout << "[" << this->movie_name << " | " << this->mpa_rating << " | " << this->watched_count << "]" << std::endl;
}