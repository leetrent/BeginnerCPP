#include <iostream>
#include "WordCounter.h"

using namespace std;

int main()
{
    WordCounter wordCounter("romeoandjuliet.txt", "love");

    cout << endl;
    cout << "File Name.......: " << wordCounter.getFileName()           << endl;
    cout << "Search World....: " << wordCounter.getSearchWord()         << endl;
    cout << "Occurrence Count: " << wordCounter.getOccurrenceCount()    << endl;
    cout << "Total Word Count: " << wordCounter.getTotalWordCount()     << endl;
    cout << endl;

    return 1;
}
