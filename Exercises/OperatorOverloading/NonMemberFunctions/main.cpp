#include <iostream>
#include "Money.h"
using namespace std;

int main()
{
    Money money1{2, 99};
    Money money2{1, 44};
    Money money3 = money1 + money2;
    
    Money money4{132};
    Money money5{69};
    Money money6 = money4 + money5;

    cout << endl << money4.getDollars() << "." << money4.getCents() << endl;
    cout << endl << money5.getDollars() << "." << money5.getCents() << endl;

    cout << endl << money3.getDollars() << "." << money3.getCents() << endl;
    cout << endl << money6.getDollars() << "." << money6.getCents() << endl;

    return 0;
}
