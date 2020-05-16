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
    cout << "(this->str): '" << this->str << "'"                 << endl;
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

void MyString::init()
{
    this->str = new char[1];
    *this->str = '\0';
}
