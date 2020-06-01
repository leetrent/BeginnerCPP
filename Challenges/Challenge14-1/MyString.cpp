#include <iostream>
#include <cstring>
#include "MyString.h"
using namespace std;

// Friend
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

    cout << "--------------------------------------------------"        << endl;
    cout << "Empty constructor (AFTER INIT):"                           << endl;
    cout << "(this->str == nullptr): "      << (this->str == nullptr)   << endl;
    cout << "(this->str).: '" << this->str  << "'"                      << endl;
    cout << "(*this->str): '" << *this->str << "'"                      << endl;
    cout << "(this)......: '" << this       << "'"                      << endl;
    cout << "--------------------------------------------------"        << endl;
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

    cout << "(this->str).: '" << this->str      << "'"              << endl;
    cout << "(*this->str): '" << *this->str     << "'"              << endl;
    cout << "(this)......: '" << this           << "'"              << endl;
    cout << "--------------------------------------------------"    << endl;
}

// Copy constructor
MyString::MyString(const MyString &source) : str{nullptr}
{
    this->str = new char[strlen(source.str) + 1];
    strcpy(this->str, source.str);

    cout << "--------------------------------------------------"    << endl;
    cout << "Copy constructor:"                                     << endl;
    cout << "(source)....: '"   << source       << "'"              << endl;
    cout << "(&source)...: '"   << &source      << "'"              << endl;
    cout << "(source.str): '"   << source.str   << "'"              << endl;
    cout << "(*source.str): '"  << *source.str  << "'"              << endl;
    cout << "(this->str).: '"   << this->str    << "'"              << endl;
    cout << "(*this->str): '"   << *this->str   << "'"              << endl;
    cout << "(this)......: '"   << this         << "'"              << endl;
    cout << "--------------------------------------------------"    << endl;
}

// Move constructor
MyString::MyString(MyString &&source) : str(source.str)
{
    cout << "--------------------------------------------------"    << endl;
    cout << "Move constructor:"                                     << endl;
    cout << "(source)....: '"   << source       << "'"              << endl;
    cout << "(&source)...: '"   << &source      << "'"              << endl;
    cout << "(source.str): '"   << source.str   << "'"              << endl;
    cout << "(*source.str): '"  << *source.str  << "'"              << endl;
    cout << "(this->str).: '"   << this->str    << "'"              << endl;
    cout << "(*this->str): '"   << *this->str   << "'"              << endl;
    cout << "(this)......: '"   << this         << "'"              << endl;

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

    delete [] this->str;
}

//////////////////////////////////////////////////
// OPERATOR OVERLOADING:
//////////////////////////////////////////////////

// Copy assignment opeartor
MyString &MyString::operator=(const MyString &rhs)
{
    // cout << "--------------------------------------------------"    << endl;
    // cout << "Copy assignment opeartor:"                             << endl;
    // cout << "rhs..: '" << &rhs     << "'"                          << endl;
    // cout << "this.: '" << this    << "'"                          << endl;
    // cout << "BEFORE: (rhs.str)..: '" << rhs.str   << "'"            << endl;
    // cout << "BEFORE: (this->str): '" << this->str << "'"            << endl;

    if (this == &rhs)
    {
        cout << "Objects are equal, will not copy" << endl;
        return *this;
    }
    delete [] this->str;

    this->str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);

    // cout << "AFTER:  (rhs.str)..: '" << rhs.str    << "'"           << endl;
    // cout << "AFTER:  (this->str): '" << this->str << "'"            << endl;
    //
    // cout << "--------------------------------------------------"    << endl;

    return *this;
}

// Lowercase operator
MyString MyString::operator-() const
{
    char *buffer = new char[std::strlen(this->str) + 1];
    std::strcpy(buffer, this->str);
    for (size_t ii = 0; ii < std::strlen(buffer); ii++)
    {
        buffer[ii] = std::tolower(buffer[ii]);
    }
    MyString temp{buffer};
    delete [] buffer;
    return temp;
}

// Pre-increment operator
//   - return this object with string uppercased
MyString &MyString::operator++()
{
    for (size_t ii = 0; ii < std::strlen(this->str); ii++)
    {
        this->str[ii] = std::toupper(str[ii]);
    }
    return *this;
}

// Post-increment operator
// 1. return this object with string unchanged
// 2. then lowercase it
MyString MyString::operator++(int)
{
    MyString temp(this->str);
    operator++();
    return temp;
}

// Plus operator (concatentation)
MyString MyString::operator+(const MyString &rhs) const
{
    char *buffer = new char[std::strlen(this->str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer, this->str);
    std::strcat(buffer, rhs.str);

    MyString temp{buffer};
    delete [] buffer;

    return temp;
}

// Multiply operator (concatentate n number of times)
// MyString MyString::operator*(size_t numTimes) const
// {
//     MyString temp;
//     for ( size_t ii = 1; ii <= numTimes; ii++)
//     {
//         temp = temp + *this;
//     }
//     return temp;
// }

// Multiply operator (concatentate n number of times)
MyString MyString::operator*(size_t numTimes) const
{
    char *buffer = new char[ (strlen(this->str) * numTimes) + 1 ];
    for (size_t ii = 0; ii < numTimes; ii++)
    {
        std:strcat(buffer, this->str);
    }
    MyString temp{buffer};
    delete [] buffer;
    return temp;
}
// Multiply-equal (*=) operator
// (increment an instance of this class by the parameter (numTimes))
void MyString::operator*=(size_t numTimes)
{
    char *buffer = new char[(strlen(this->str) * numTimes) + 1];
    for (size_t ii = 0; ii < numTimes; ii++)
    {
        std::strcat(buffer, this->str);
    }
    this->str = buffer;
}

// Plus-equal (+=) operator (equivalent to Plus operator (concatentation))
void MyString::operator+=(const MyString &rhs)
{
    *this = *this + rhs;
}

// Equality operator
bool MyString::operator==(const MyString &rhs) const
{
    return (std::strcmp(this->str, rhs.str) == 0);
}

// Inequality operator
bool MyString::operator!=(const MyString &rhs) const
{
    return (std::strcmp(this->str, rhs.str) != 0);
}

// Less than operator
bool MyString::operator<(const MyString &rhs) const
{
    return (std::strcmp(this->str, rhs.str) < 0);
}

// Greater than operator
bool MyString::operator>(const MyString &rhs) const
{
    return (std::strcmp(this->str, rhs.str) > 0);
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

size_t MyString::length() const
{
    return (std::strlen(this->str));
}
//////////////////////////////////////////////////
// PRIVATE METHODS:
//////////////////////////////////////////////////
void MyString::init()
{
    this->str = new char[1];
    *this->str = '\0';
}
