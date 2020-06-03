#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>

class MyString
{
    //////////////////////////////////////////////////////////////////
    // OVERLOAD OPERATORS (FRIENDS):
    //////////////////////////////////////////////////////////////////
    // Lowercase
    friend MyString operator-(const MyString &obj);
    // Concatenation
    friend MyString operator+(const MyString &lhs, const MyString &rhs);
    // Equality
    friend bool operator==(const MyString &lhs, const MyString &rhs);
    // Inequality
    friend bool operator!=(const MyString &lhs, const MyString &rhs);

    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);

    private:
        char* str;
        void init();
    public:
        // Empty constructor
        MyString();
        // One-arg constructor
        MyString(const char *s);
        // Copy constructor
        MyString(const MyString &source);
        // Move constructor
        MyString(MyString &&source);
        // Destructor
        ~MyString();
};
#endif
