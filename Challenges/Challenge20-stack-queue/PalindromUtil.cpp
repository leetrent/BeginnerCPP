#include <iostream>
#include <stack>
#include <queue>
#include "PalindromeUtil.h"

PalindromeUtil::PalindromeUtil(string val)
    :value{val}
{
    cout << endl << "================================================================================" << endl;
    cout << val << endl;

    //this->is_palindrome = false;
    queue<char> ascending;
    stack<char> descending;

    for (char c : val)
    {
        if ( isalpha(c) )
        {
            char capitalized = toupper(c);
            ascending.push(capitalized);
            descending.push(capitalized);
        }
    }

    this->display(ascending);
    this->display(descending);

    char c1{};
    char c2{};
    this->is_palindrome = true;
    while (!ascending.empty()) {
        c1 = ascending.front();
        ascending.pop();
        c2 = descending.top();
        descending.pop();
        if (c1 != c2)
        {
            this->is_palindrome = false;
            break;
        }
    }
}

void PalindromeUtil::display(stack<char> values)
{
    //cout << "--------------------------------------------------------------------------------" << endl;
    cout << "STACK:" << endl;

    while (!values.empty())
    {
        cout << values.top();
        values.pop();
    }
    cout << endl << "--------------------------------------------------------------------------------" << endl;
}
void PalindromeUtil::display(queue<char> values)
{
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "QUEUE:" << endl;
    while (!values.empty())
    {
        cout << values.front();
        values.pop();
    }
    cout << endl << "--------------------------------------------------------------------------------" << endl;
}

bool PalindromeUtil::IsPalindrome()
{
    return this->is_palindrome;
}
