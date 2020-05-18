#include <iostream>
#include "MyString.h"
using namespace std;


int main()
{
    // MyString ms1 = MyString();
    // MyString ms2 = MyString("Lee");
    // MyString ms3 = ms2;
    // MyString m4 = "Dearfoam";
    //
    // MyString hello      = MyString("Hello");
    // MyString helloWorld = MyString("Hello World");
    //
    // hello = hello;
    // hello = helloWorld;

    MyString upperCase = MyString("LOWECASE ME");
    MyString lowerCase = -upperCase;
    cout << "upperCase: " << upperCase << endl;
    cout << "lowerCase: " << lowerCase << endl;

    return 0;
}
