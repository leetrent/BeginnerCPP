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
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& val : test_strings) {
        std::cout << std::setw(8) << std::left << PalindromeUtil(val).IsPalindrome() << val << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
