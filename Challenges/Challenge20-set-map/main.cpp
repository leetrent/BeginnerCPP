#include <iostream>
#include "WordCounter.h"
#include "FileHandlingException.h"

int main()
{
    try
    {
        WordCounter("words.txt").writeResultsToFile("wordcount.txt");
    }
    catch (FileHandlingException fhe)
    {
        cout << fhe.get_message();
    }
    return 0;
}
