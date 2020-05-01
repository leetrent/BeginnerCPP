#include <iostream>
#include "Movie.h"
using namespace std;

int main()
{
    cout << endl << "Instantianing Movie #1:" << endl;
    Movie movie1("Gravity", "PG", 0);

    cout << endl << "Instantianing Movie #2:" << endl;
    Movie movie2(movie1);
    return 0;
}