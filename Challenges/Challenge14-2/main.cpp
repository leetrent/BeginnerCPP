#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString empty;
    cout << "(empty): '" << empty << "'" << endl;

    MyString oneArg{"One Arg"};
    cout << "(oneArg): '" << oneArg << "'" << endl;

    cout << "--------------------------------------------------"    << endl;
    return 0;
}
