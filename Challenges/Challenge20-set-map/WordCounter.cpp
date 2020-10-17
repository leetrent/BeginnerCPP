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
        stringstream strStream(line);
        while ( strStream >> word)
        {
            word = this->cleanString(word);
            wordMap[word]++;
        }
    }
    inFile.close();
}

void WordCounter::writeResultsToFile(string outFileName)
{
    // cout << "[WordCounter][writeResultsToFile] => (outFileName): " << outFileName << endl;
    // cout << "[WordCounter][writeResultsToFile] => (wordMap.size()): " << wordMap.size() << endl;
    // // for ( map<string, int>::iterator mapIterator : this->wordMap)
    // for ( auto kv : this->wordMap)
    // {
    //     cout << setw(12) << left << kv.first
    //          << setw(7)  << right << kv.second
    //          << endl;
    // }

    ofstream outFile {outFileName};
    if (!outFile.is_open())
    {
        throw FileHandlingException("Could not open file '" + outFileName + "'.");
    }
    for ( auto kv : this->wordMap)
    {
        outFile << setw(12) << left << kv.first
                << setw(7)  << right << kv.second
                << endl;
    }

    outFile.close();
}

string WordCounter::cleanString(const string &str)
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
