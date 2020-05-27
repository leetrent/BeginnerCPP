#include <iostream>
#include <vector>
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

    vector<MyString> moveVec;
    moveVec.push_back(MyString("Move"));
    cout << "(moveVec[0]): '" << moveVec[0] << "'" << endl;

    cout << "--------------------------------------------------"    << endl;
    return 0;
}
