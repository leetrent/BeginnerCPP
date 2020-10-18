#ifndef _LINE_COUNTER_H_
#define _LINE_COUNTER_H_

#include <map>
#include <set>

using namespace std;

class LineCounter
{
    private:
        map<string, set<int>> lineMap;
    public:
        LineCounter(string inFileName);
        ~LineCounter() = default;
        void writeResultsToFile(string outFileName);
};
#endif
