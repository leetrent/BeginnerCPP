#include <fstream>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "WordCounter.h"
#include "FileHandlingException.h"

WordCounter::WordCounter(string inFileName)
{
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
    cout << "\"" << inFileName << "\" was successfully read." << endl;
}

void WordCounter::writeResultsToFile(string outFileName)
{
    ofstream outFile {outFileName};
    if (!outFile.is_open())
    {
        throw FileHandlingException("Could not open file '" + outFileName + "'.");
    }

    outFile << setw(12) << left << "Word"
            << setw(7)  << right << "Count"
            << endl;
    outFile << setw(12) << left << "----"
            << setw(7)  << right << "-----"
            << endl;

    ////////////////////////////////////////////////////////////////////////
    // METHOD #1:
    ////////////////////////////////////////////////////////////////////////
    // for ( auto kv : this->wordMap)
    // {
    //     outFile << setw(12) << left << kv.first
    //             << setw(7)  << right << kv.second
    //             << endl;
    // }

    ////////////////////////////////////////////////////////////////////////
    // METHOD #2:
    ////////////////////////////////////////////////////////////////////////
    for (map<string, int>::iterator wordMapIterator = this->wordMap.begin();
                                    wordMapIterator != this->wordMap.end();
                                    wordMapIterator++)
    {
        outFile << setw(12) << left << wordMapIterator->first
                << setw(7)  << right << wordMapIterator->second
                << endl;
    }

    outFile.close();
    cout << "Results were successfully written to \"" << outFileName << "\"." << endl;
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
