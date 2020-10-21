#ifndef _PALINDROME_UTIL_H
#define _PALINDROME_UTIL_H

#include <string>
#include <stack>
#include <queue>

using namespace std;

class PalindromeUtil
{
    private:
        string value;
        bool is_palindrome{false};
        void display(stack<char> values);
        void display(queue<char> values);
    public:
        PalindromeUtil(string val);
        ~PalindromeUtil() = default;
        bool IsPalindrome();
};
#endif
