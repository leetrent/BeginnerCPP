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

    // MyString upperCase = MyString("LOWECASE ME");
    // MyString lowerCase = -upperCase;
    // cout << "upperCase: " << upperCase << endl;
    // cout << "lowerCase: " << lowerCase << endl;

    MyString equal    = MyString("Equal");
    MyString notEqual = MyString("Not Equal");

    cout << boolalpha << endl;
    cout << "(equal    == equal).....: " << (equal == equal)          << endl;
    cout << "(notEqual == notEqual)..: " << (notEqual == notEqual)    << endl;
    cout << "(equal    == notEqual)..: " << (equal == notEqual)       << endl;
    cout << "(notEqual == equal).....: " << (notEqual == equal)       << endl;


    return 0;
}
