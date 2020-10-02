#ifndef _PALINDROME_UTIL_H
#define _PALINDROME_UTIL_H

#include<string>
#include<deque>

using namespace std;

class PalindromeUtil
{
    private:
        string value;
        bool is_palindrome{false};
        template <typename T>
        void display(const deque<T> &values);
    public:
        PalindromeUtil(string val);
        ~PalindromeUtil() = default;
        bool IsPalindrome();
};
#endif
