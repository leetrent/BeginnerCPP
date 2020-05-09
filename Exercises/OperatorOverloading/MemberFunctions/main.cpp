#include "Money.h"
#include <iostream>

using namespace std;

int main()
{
    Money money1(5,50);
    Money money2(550);
    Money money3(601);

    cout << "--------------------------------------------------"    << endl;
    cout << "(money1 == money2): " << (money1 == money2)            << endl;
    cout << "--------------------------------------------------"    << endl;
    cout << "(money1 != money2): " << (money1 != money2)            << endl;
    cout << "--------------------------------------------------"    << endl;
    cout << "(money1 == money3): " << (money1 == money3)            << endl;
    cout << "--------------------------------------------------"    << endl;
    cout << "(money1 != money3): " << (money1 != money3)            << endl;
    cout << "--------------------------------------------------"    << endl;
    return 0;
}