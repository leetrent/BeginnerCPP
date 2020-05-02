#include <iostream>
#include "Movie.h"
using namespace std;

int main()
{
    cout << endl << "Instantianing Movie #1 on the stack using 3-arg constructor:" << endl;
    Movie movie1("Gravity", "PG", 0);

    cout << endl << "Instantianing Movie #2 on the stack using copy constructor:" << endl;
    Movie movie2(movie1);

    cout << endl << "Instantianing Movie #3 on the heap using the new operator:" << endl;
    Movie* movie3 = new Movie("Movie #3", "R", 0);
    cout << endl << "movie3:  " << movie3 << endl;
    cout << endl << "&movie3: " << &movie3 << endl;

    cout << endl << "Deleting *movie3" << endl;
    delete movie3;
    
    return 0;
}