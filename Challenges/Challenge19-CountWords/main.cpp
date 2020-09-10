#include <iostream>
#include "WordCounter.h"

using namespace std;

const string FILE_NAME = "romeoandjuliet.txt";

int main()
{
    std::string wordToFind{};

    cout << endl;
    std::cout << "Enter the word to search for: ";
    std::cin >> wordToFind;

    WordCounter wordCounter(FILE_NAME, wordToFind);

    cout << endl;
    cout << "File Name.......: " << wordCounter.getFileName()           << endl;
    cout << "Search World....: " << wordCounter.getSearchWord()         << endl;
    cout << "Occurrence Count: " << wordCounter.getOccurrenceCount()    << endl;
    cout << "Total Word Count: " << wordCounter.getTotalWordCount()     << endl;
    cout << endl;

    return 1;
}
