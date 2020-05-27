#include <iostream>
#include "MyString.h"

using namespace std;

int main()
{
    MyString empty;
    cout << "(empty): '" << empty << "'" << endl;

    MyString oneArg{"One Arg"};
    cout << "(oneArg): '" << oneArg << "'" << endl;

    MyString copy1{"Copy"};
    MyString copy2 = copy1;
    cout << "(copy1): '" << copy1 << "'" << endl;
    cout << "(copy2): '" << copy2 << "'" << endl;

    cout << "--------------------------------------------------"    << endl;
    return 0;
}
