#include <string>
#include "StringUtil.h"
using namespace std;

string cleanString(const string &str)
{
    string result{};
    for (char c : str)
    {
        if ( c == '.' || c == ',' || c == ';' || c == ':')
        {
            continue;
        }
        else
        {
            result += c;
        }
    }
    return result;
}
