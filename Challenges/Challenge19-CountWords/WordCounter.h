#ifndef _WORD_COUNTER_H
#define _WORD_COUNTER_H
#include <string>

class WordCounter
{
    private:
        std::string fileName{};
        std::string searchWord{};
        unsigned int occurrenceCount{0};
        unsigned int totalWordCount{0};
        bool searchWordFound(const std::string &searchWord, const std::string &wordInFile);
    public:
        WordCounter(const std::string &fileName, const std::string &searchWord);
        ~WordCounter() = default;
        std::string getFileName() const;
        std::string getSearchWord() const;
        unsigned int getOccurrenceCount() const;
        unsigned int getTotalWordCount() const;
};
#endif
