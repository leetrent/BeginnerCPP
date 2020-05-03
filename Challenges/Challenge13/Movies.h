#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include "Movie.h"

class Movies {
    private:
        std::vector<Movie> movies;

    public:
        Movies();
        ~Movies();

        bool add_movie(std::string movie_name, std::string mpa_rating, int watched_count = 0);
        bool increment_watched_count(std::string movie_name);
        void display() const;
};

#endif // _MOVIES_H