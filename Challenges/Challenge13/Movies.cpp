#include "Movies.h"
#include "Movie.h"
#include <vector>
#include <string>
#include <iostream>

Movies::Movies() {
    //std::cout << std::endl << "[Movies][no-arg constructor] =>" << std::endl;
}

Movies::~Movies() {
    //std::cout << std::endl << "[Movies][destructor] =>" << std::endl;
}

bool Movies::add_movie(std::string movie_name, std::string mpa_rating, int watched_count) {
    for (const Movie movie : this->movies) {
        if (movie.get_movie_name() == movie_name) {
            return false;
        }
    }
    this->movies.push_back(Movie{movie_name, mpa_rating, watched_count});
    return true;
}

 bool Movies::increment_watched_count(std::string movie_name) {
     for ( Movie movie: this->movies) {
         if ( movie.get_movie_name() == movie_name) {
             std::cout << std::endl << "BEFORE: [" << movie_name << " | " << movie.get_watched_count() << "]" << std::endl;
             movie.set_watched_count(movie.get_watched_count() + 1);
             std::cout << "AFTER: [" << movie_name << " | " << movie.get_watched_count() << "]" << std::endl;
             return true;
         }
     }
     return false;
 }

 void Movies::display() const {
     if ( this->movies.empty() ) {
         std::cout << std::endl << "Movie collection is empty - no movies to display" << std::endl;
     } else {
        for (const Movie movie : this->movies) {
            movie.display();
        }
     }
 }
