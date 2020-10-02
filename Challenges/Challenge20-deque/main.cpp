#include <iostream>
#include <vector>
#include <iomanip>
#include "PalindromeUtil.h"

using namespace std;

bool is_palindrome(const string &s)
{
    return false;
}

const vector<string> test_strings
{
    "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
    "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
    "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome",
    "palindrome", "Lee", "Trent"
};


int main()
{
    cout << boolalpha;

    cout << setw(8) << left << "Result" << "String" << endl;
    for ( const string &val : test_strings)
    {
        //cout << val << " : " << PalindromeUtil(val).IsPalindrome() << endl;
        cout << setw(8) << left << PalindromeUtil(val).IsPalindrome() << val << endl;
    }

    return 0;
}
