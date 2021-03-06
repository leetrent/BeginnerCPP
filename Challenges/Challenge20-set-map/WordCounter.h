#ifndef _WORD_COUNTER_H_
#define _WORD_COUNTER_H_

#include <map>
using namespace std;

class WordCounter
{
    private:
        map<string, int> wordMap;
        string cleanString(const string &str);
    public:
        WordCounter(string inFileName);
        ~WordCounter() = default;
        void writeResultsToFile(string outFileName);
};
#endif
