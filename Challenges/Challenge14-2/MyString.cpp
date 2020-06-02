#include <iostream>
#include <cstring>
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
    cout << "Empty constructor (BEFORE INIT):"                      << endl;
    cout << "(this->str == nullptr): " << (this->str == nullptr)    << endl;

    this->init();

    cout << "--------------------------------------------------"    << endl;
    cout << "Empty constructor (AFTER INIT):"                       << endl;
    cout << "(this->str == nullptr): " << (this->str == nullptr)    << endl;
    cout << "(this->str).: '" << this->str  << "'"                  << endl;
    cout << "(*this->str): '" << *this->str << "'"                  << endl;
    cout << "--------------------------------------------------"    << endl;
}

// One-arg constructor
MyString::MyString(const char *s) : str{nullptr}
{
    cout << "--------------------------------------------------"  << endl;
    cout << "One-arg constructor:"                                << endl;
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

// Copy constructor
MyString::MyString(const MyString &source) : str{nullptr}
{
    this->str = new char[strlen(source.str) + 1];
    strcpy(this->str, source.str);

    cout << "--------------------------------------------------"    << endl;
    cout << "Copy constructor:"                                     << endl;
    cout << "(source)....: '" << source         << "'"              << endl;
    cout << "(&source)...: '" << &source        << "'"              << endl;
    cout << "(source.str): '" << source.str     << "'"              << endl;
    cout << "(this->str).: '"  << this->str     << "'"              << endl;
    cout << "--------------------------------------------------"    << endl;
}

// Move constructor
MyString::MyString(MyString &&source) : str(source.str)
{
    cout << "--------------------------------------------------"    << endl;
    cout << "Move constructor:"                                     << endl;
    cout << "(source)....: '" << source     << "'"                  << endl;
    //cout << "(&&source)..: '" << &&source   << "'"                  << endl;
    cout << "(source.str): '" << source.str << "'"                  << endl;
    cout << "(this->str): '"  << this->str  << "'"                  << endl;

    source.str = nullptr;

    //cout << "(source == nullptr)....: " << (source == nullptr)      << endl;
    cout << "(source.str == nullptr): " << (source.str == nullptr)  << endl;
    cout << "--------------------------------------------------"    << endl;
}

// Destructor
MyString::~MyString()
{
    if (this->str != nullptr)
    {
        cout << "--------------------------------------------------"    << endl;
        cout << "Destructor for:"                                       << endl;
        cout << "(this->str): '"  << this->str  << "'"                  << endl;
        cout << "--------------------------------------------------"    << endl;
    }

    // cout << "Destructor for:"                                       << endl;
    // cout << "(this->str): '"  << this->str  << "'"                  << endl;

    delete [] str;
}

//////////////////////////////////////////////////
// PRIVATE METHODS:
//////////////////////////////////////////////////
void MyString::init()
{
    this->str = new char[1];
    *this->str = '\0';
}

//////////////////////////////////////////////////
// OPERATOR OVERLOADING (FRIENDS):
//////////////////////////////////////////////////
// Lowercase
MyString operator-(const MyString &obj)
{
    char *buffer = new char[std::strlen(obj.str) + 1];
    std::strcpy(buffer, obj.str);
    for (size_t ii = 0; ii < std::strlen(buffer); ii++)
    {
        buffer[ii] = std::tolower(buffer[ii]);
    }
    MyString temp{buffer};
    delete [] buffer;
    return temp;
}
