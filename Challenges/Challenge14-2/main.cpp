#include <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

int main()
{
    unsigned int constuctorCallCount = 0;

    MyString empty;
    constuctorCallCount++;
    cout << "(empty): '" << empty << "'" << endl;

    MyString oneArg{"One Arg"};
    constuctorCallCount++;
    cout << "(oneArg): '" << oneArg << "'" << endl;

    MyString copy1{"Copy"};
    constuctorCallCount++;
    MyString copy2 = copy1;
    constuctorCallCount++;
    cout << "(copy1): '" << copy1 << "'" << endl;
    cout << "(copy2): '" << copy2 << "'" << endl;

    vector<MyString> moveVec;
    moveVec.push_back(MyString("Move"));
    constuctorCallCount++;
    cout << "(moveVec[0]): '" << moveVec[0] << "'" << endl;

    MyString upperCase = MyString("LOWECASE ME");
    constuctorCallCount++;
    MyString lowerCase = -upperCase;
    constuctorCallCount++;
    cout << "upperCase: " << upperCase << endl;
    cout << "lowerCase: " << lowerCase << endl;

    MyString concat1 = MyString("Concat 1;");
    constuctorCallCount++;
    MyString concat2 = MyString("Concat 2;");
    constuctorCallCount++;
    MyString concat3 = concat1 + concat2;
    constuctorCallCount++;

    cout << "concat1: '" << concat1 << "'" << endl;
    cout << "concat2: '" << concat2 << "'" << endl;
    cout << "concat3: '" << concat3 << "'" << endl;

    cout << "--------------------------------------------------"    << endl;
    cout << "(constuctorCallCount): " << constuctorCallCount        << endl;
    // cout << "--------------------------------------------------"    << endl;

    return 0;
}
