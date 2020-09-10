#include <fstream>
#include "WordCounter.h"
#include "FileHandlingException.h"

WordCounter::WordCounter(std::string fileName, std::string searchWord)
    : fileName{fileName}, searchWord{searchWord}
{
    std::ifstream inFile {fileName};
    if (!inFile.is_open())
    {
        throw FileHandlingException("Could not open file '" + fileName + "'.");
    }

    std::string wordReadIn{};
    while (inFile >> wordReadIn)
    {
        this->totalWordCount++;
        if (searchWordFound(searchWord, wordReadIn))
        {
            this->occurrenceCount++;
        }
    }
    inFile.close();
}

bool WordCounter::searchWordFound(std::string searchWord, std::string wordInFile)
{
    size_t wordFound = wordInFile.find(searchWord);
    if (wordFound == std::string::npos)
    {
        return false;
    }
    return true;
}

std::string WordCounter::getFileName() const
{
    return this->fileName;
}

std::string WordCounter::getSearchWord() const
{
    return this->searchWord;
}

unsigned int WordCounter::getTotalWordCount() const
{
    return this->totalWordCount;
}
unsigned int WordCounter::getOccurrenceCount() const
{
    return this->occurrenceCount;
}
