#include <iostream>
#include <cstring>
#include "MyString.h"
using namespace std;

MyString::MyString()
    : str{nullptr}
{
    this->str = new char[1];
    *this->str = '\0';

    cout << "--------------------------------------------------"    << endl;
    cout << "Empty Constructor"                                     << endl;
    cout << "(*this->str): '" << *this->str << "'"                  << endl; 
    cout << "--------------------------------------------------"    << endl;
}
