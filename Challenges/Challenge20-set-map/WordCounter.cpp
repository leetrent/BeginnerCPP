#include <fstream>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "WordCounter.h"
#include "FileHandlingException.h"

WordCounter::WordCounter(string inFileName)
{
    cout << "[WordCounter][constructor] => (inFileName): " << inFileName << endl;
    ifstream inFile {inFileName};
    if (!inFile.is_open())
    {
        throw FileHandlingException("Could not open file '" + inFileName + "'.");
    }
    string line{};
    string word{};

    while (getline(inFile, line))
    {
        stringstream stream(line);
        wordMap[word]++;
    }
}

void WordCounter::writeResultsToFile(string outFileName)
{
    cout << "[WordCounter][writeResultsToFile] => (outFileName): " << outFileName << endl;
    // for ( map<string, int>::iterator mapIterator : this->wordMap)
    for ( auto kv : this->wordMap)
    {
        cout << setw(12) << left << kv.first
             << setw(7)  << right << kv.second
             << endl;
    }


}
