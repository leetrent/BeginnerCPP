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
    // Less than
    friend bool operator<(const MyString &lhs, const MyString &rhs);
    // Greater than
    friend bool operator>(const MyString &lhs, const MyString &rhs);
    // Plus-Equal (Concatenation)
    friend void operator+=(MyString &lhs, const MyString &rhs);
    // Multiplication (Concatenation n times)
    friend MyString operator*(const MyString &lhs, unsigned int numTimes);
    // Multiply-Equal (Concatenation n times):
    friend void operator*=(MyString &lhs, unsigned int numTimes);
    // Pre-increment operator
    //   - return this object with string uppercased
    friend MyString &operator++(MyString &obj);
    // Post-increment operator
    // 1. return this object with string unchanged
    // 2. then lowercase it
    friend MyString operator++(MyString &obj, int);

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
