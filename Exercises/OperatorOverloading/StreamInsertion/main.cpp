#include "Money.h"
#include <iostream>
using namespace std;

int main()
{
    Money amount {1, 70};

    cout << endl << "========================================";
    cout << endl << amount << endl;
    cout << "========================================" << endl;
    return 0;
}