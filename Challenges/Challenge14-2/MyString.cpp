#include <iostream>
#include "MyString.h"

using namespace std;

std::ostream &operator<<(std::ostream &os, const MyString &rhs)
{
    os << rhs.str;
    return os;
}

// Empty constructor
MyString::MyString() : str{nullptr}
{
    cout << boolalpha;
    cout << "--------------------------------------------------"    << endl;
    cout << "Empty constructor (BEFORE INIT)"                       << endl;
    cout << "(this->str == nullptr): " << (this->str == nullptr)    << endl;

    this->init();

    cout << "--------------------------------------------------"    << endl;
    cout << "Empty constructor (AFTER INIT)"                        << endl;
    cout << "(this->str == nullptr): " << (this->str == nullptr)    << endl;
    cout << "(this->str).: '" << this->str  << "'"                  << endl;
    cout << "(*this->str): '" << *this->str << "'"                  << endl;
    cout << "--------------------------------------------------"    << endl;
}

// One-arg constructor
MyString::MyString(const char *s) : str{nullptr}
{
    cout << "--------------------------------------------------"  << endl;
    cout << "One-arg constructor"                                 << endl;
    cout << "(s == nullptr): " << (s == nullptr)                  << endl;

    if (s == nullptr)
    {
        this->init();
    }
    else
    {
        this->str = new char[strlen(s) + 1];
        strcpy(this->str, s);
    }

    cout << "(this->str).: '" << this->str << "'"                   << endl;
    cout << "(*this->str): '" << *this->str << "'"                  << endl;
    cout << "--------------------------------------------------"    << endl;
}



//////////////////////////////////////////////////
// PRIVATE METHODS:
//////////////////////////////////////////////////
void MyString::init()
{
    this->str = new char[1];
    *this->str = '\0';
}
