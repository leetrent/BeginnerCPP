#include <iostream>
#include "WordCounter.h"
#include "FileHandlingException.h"

int main()
{
    try
    {
        cout << endl;
        cout << "--------------------------------------------------------------------------------";
        cout << endl;
        WordCounter("words.txt").writeResultsToFile("wordcount.txt");
        cout << "--------------------------------------------------------------------------------";
        cout << endl;
    }
    catch (FileHandlingException fhe)
    {
        cout << fhe.get_message();
    }
    return 0;
}
