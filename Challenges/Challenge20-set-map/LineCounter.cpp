#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "LineCounter.h"
#include "StringUtil.h"
#include "FileHandlingException.h"

LineCounter::LineCounter(string inFileName)
{
    ifstream inFile {inFileName};
    if (!inFile.is_open())
    {
        throw FileHandlingException("Could not open file '" + inFileName + "'.");
    }

    string line{};
    string word{};
    unsigned int lineNumber = 0;
    while (getline(inFile, line))
    {
        lineNumber++;
        stringstream strStream(line);
        while (strStream >> word)
        {
            word = cleanString(word);
            this->lineMap[word].insert(lineNumber);
        }
    }

    inFile.close();
    cout << "\"" << inFileName << "\" was successfully read." << endl;
}

void LineCounter::writeResultsToFile(string outFileName)
{
    ofstream outFile {outFileName};
    if (!outFile.is_open())
    {
        throw FileHandlingException("Could not open file '" + outFileName + "'.");
    }

    outFile << setw(12) << left << "Word"
            << setw(7)  << right << "Line Numbers"
            << endl;
    outFile << setw(12) << left << "----"
            << setw(7)  << right << "------------"
            << endl;
    for ( auto kv : this->lineMap)
    {
        outFile << setw(12) << left << kv.first
                << left << "[ ";
        for ( auto value : kv.second)
        {
            outFile << value << " ";
        }
        outFile << "]" << endl;
    }

    outFile.close();
    cout << "Results were successfully written to \"" << outFileName << "\"." << endl;
}
