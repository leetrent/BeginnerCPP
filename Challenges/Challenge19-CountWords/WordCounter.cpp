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
