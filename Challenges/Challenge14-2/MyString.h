#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>

class MyString
{
    // friend:
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
        // // Destructor
        // ~MyString();
};
#endif
