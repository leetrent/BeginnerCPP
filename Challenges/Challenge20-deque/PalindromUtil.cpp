#include <iostream>
#include <deque>
#include "PalindromeUtil.h"

PalindromeUtil::PalindromeUtil(string val)
    :value{val}
{
    //this->is_palindrome = false;
    deque<char> ascending;
    deque<char> descending;

    for (char c : val)
    {
        if ( isalpha(c) )
        {
            char capitalized = toupper(c);
            ascending.push_back(capitalized);
            descending.push_front(capitalized);
        }
    }

    // cout << endl << "Ascending:" << endl;
    // this->display(ascending);
    //
    // cout << endl << "Descending:" << endl;
    // this->display(descending);
    // cout << endl;

    this->is_palindrome = (ascending == descending);
}

bool PalindromeUtil::IsPalindrome()
{
    return this->is_palindrome;
}

template <typename T>
void PalindromeUtil::display(const deque<T> &values)
{
    cout << "[";
    for ( const T &val : values)
    {
        cout << val;
    }
    cout << "]";
}
