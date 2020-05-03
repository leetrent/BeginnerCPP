#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
    private:
        std::string movie_name;
        std::string mpa_rating;
        int watched_count;

        void debug();

    public:

    // Contructor (3 args)
    Movie(std::string movie_name, std::string mpa_rating, int watched_count);

    // Copy constructor
    Movie(const Movie &source);

    // Destructor
    ~Movie();   

    // Getters
    std::string get_movie_name() const;
    std::string get_mpa_rating() const;
    int get_watched_count() const;

    void increment_watched_count();

    // Display
    void display() const;

};

#endif // _MOVIE_H_