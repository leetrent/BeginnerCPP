#include <iostream>
#include <cstring>
#include "MyString.h"
using namespace std;

// Empty constructor
MyString::MyString() : str{nullptr}
{
    this->init();

    cout << "--------------------------------------------------"    << endl;
    cout << "Empty constructor"                                     << endl;
    cout << "(*this->str): '" << *this->str << "'"                  << endl;
    cout << "--------------------------------------------------"    << endl;
}

// One-arg constructor
MyString::MyString(const char *s) : str{nullptr}
{
    if (s==nullptr)
    {
        this->init();
    }
    else
    {
    this->str = new char[strlen(s) + 1];
        strcpy(this->str, s);
    }
    cout << "--------------------------------------------------"  << endl;
    cout << "One-arg constructor"                                 << endl;
    cout << "(this->str): '" << this->str << "'"                  << endl;
    cout << "--------------------------------------------------"  << endl;
}

// Copy constructor
MyString::MyString(const MyString &source) : str{nullptr}
{
    this->str = new char[strlen(source.str) + 1];
    strcpy(this->str, source.str);

    cout << "--------------------------------------------------"    << endl;
    cout << "Copy constructor"                                      << endl;
    cout << "(source.str): '" << source.str << "'"                  << endl;
    cout << "(this->str): '"  << this->str  << "'"                  << endl;
    cout << "--------------------------------------------------"    << endl;

}

// Move constructor
MyString::MyString(MyString &&source) : str(source.str)
{
    cout << "--------------------------------------------------"    << endl;
    cout << "Move constructor"                                      << endl;
    cout << "(source.str): '" << source.str << "'"                  << endl;
    cout << "(this->str): '"  << this->str  << "'"                  << endl;

    source.str = nullptr;
    cout << "(source.str): '" << source.str << "'"                  << endl;
    cout << "--------------------------------------------------"    << endl;

}

// Destructor
MyString::~MyString()
{
    cout << "--------------------------------------------------"    << endl;
    cout << "Destructor"                                            << endl;
    cout << "BEFORE: (this->str): '" << this->str << "'"            << endl;

    delete [] str;

    cout << " AFTER: (this->str): '" << this->str << "'"            << endl;
    cout << "--------------------------------------------------"    << endl;
}

//////////////////////////////////////////////////
// OPERATOR OVERLOADING:
//////////////////////////////////////////////////

// Copy assignment opeartor
MyString &MyString::operator=(const MyString &rhs)
{
    cout << "--------------------------------------------------"    << endl;
    cout << "Copy assignment opeartor:"                             << endl;
    cout << "rhs..: '" << &rhs     << "'"                          << endl;
    cout << "this.: '" << this    << "'"                          << endl;
    cout << "BEFORE: (rhs.str)..: '" << rhs.str   << "'"            << endl;
    cout << "BEFORE: (this->str): '" << this->str << "'"            << endl;

    if (this == &rhs)
    {
        cout << "Objects are equal, will not copy" << endl;
        return *this;
    }
    delete [] this->str;

    this->str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);

    cout << "AFTER:  (rhs.str)..: '" << rhs.str    << "'"           << endl;
    cout << "AFTER:  (this->str): '" << this->str << "'"            << endl;

    cout << "--------------------------------------------------"    << endl;

    return *this;
}

//////////////////////////////////////////////////
// OTHER METHODS:
//////////////////////////////////////////////////
void MyString::display() const
{
    cout << "--------------------------------------------------"    << endl;
    cout << "Display:"                                               << endl;
    cout << "['" << this->str << "' : " << strlen(this->str) << "]" << endl;
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
