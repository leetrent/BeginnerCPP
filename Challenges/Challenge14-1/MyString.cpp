#include <iostream>
#include <cstring>
#include "MyString.h"
using namespace std;

MyString::MyString()
    : str{nullptr}
{
    
    cout << "--------------------------------------------------"    << endl;
    cout << "Empty Constructor"                                     << endl;
    cout << "--------------------------------------------------"    << endl;
}