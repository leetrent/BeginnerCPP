#include <iostream>
#include "Movies.h"
using namespace std;

void increment_watched(Movies &movies, string name);
void add_movie(Movies &movies, string movie_name, string mpa_rating, int watched_count);
void add_movie(Movies &movies, string movie_name, string mpa_rating);

int main()
{
    Movies my_movies;
    
    my_movies.display();

    add_movie(my_movies, "Big", "PG-13",2);     // OK
    add_movie(my_movies,"Star Wars", "PG",5);   // OK
    add_movie(my_movies,"Cinderella", "PG",7);  // OK

    my_movies.display();   // Big, Star Wars, Cinderella

    add_movie(my_movies,"Cinderella", "PG",7);  // Already exists
    add_movie(my_movies,"Ice Age", "PG",12);    // OK

    my_movies.display();    // Big, Star Wars, Cinderella, Ice Age

    increment_watched(my_movies,"Big");                    // OK
    increment_watched(my_movies,"Ice Age");              // OK
    
    my_movies.display();    // Big and Ice Age watched count incremented by 1
    
    increment_watched(my_movies,"XXX");         // XXX not found

    add_movie(my_movies, "Good Will Hunting", "PG-13"); 
    add_movie(my_movies, "The Art of Racing in the Rain", "PG"); 

    my_movies.display(); 

    increment_watched(my_movies,"Good Will Hunting");                    // OK
    increment_watched(my_movies,"The Art of Racing in the Rain"); 

    my_movies.display(); 

    return 0;
}

void add_movie(Movies &movies, string movie_name, string mpa_rating, int watched_count) {
    if ( movies.add_movie(movie_name, mpa_rating, watched_count)) {
        cout << movie_name << " added." << endl;
    } else {
        cout << movie_name << " already exists." << endl;
    }
}

void add_movie(Movies &movies, string movie_name, string mpa_rating) {
    if ( movies.add_movie(movie_name, mpa_rating)) {
        cout << movie_name << " added." << endl;
    } else {
        cout << movie_name << " already exists." << endl;
    }
}
void increment_watched(Movies &movies, string movie_name) {
    if ( movies.increment_watched_count(movie_name) ) {
        cout << movie_name << " watch count incremented" << endl;
    } else {
        cout << movie_name << " not found " << endl;
        std::cout << "===================================" << std::endl;
    }
}