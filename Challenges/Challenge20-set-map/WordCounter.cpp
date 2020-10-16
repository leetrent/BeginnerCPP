#include <iostream>
#include "WordCounter.h"

WordCounter::WordCounter(string inFileName)
{
    cout << "[WordCounter][constructor] => (inFileName): " << inFileName << endl;
}

void WordCounter::writeResultsToFile(string outFileName)
{
    cout << "[WordCounter][writeResultsToFile] => (outFileName): " << outFileName << endl;
}
