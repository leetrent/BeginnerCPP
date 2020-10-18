#include <iostream>
#include "WordCounter.h"
#include "LineCounter.h"
#include "FileHandlingException.h"

int main()
{
    try
    {
        cout << endl;
        cout << "--------------------------------------------------------------------------------";
        cout << endl;
        cout << "Word Counter:" << endl;
        cout << "--------------------------------------------------------------------------------";
        cout << endl;
        WordCounter("words.txt").writeResultsToFile("wordcount.txt");
        cout << "--------------------------------------------------------------------------------";
        cout << endl;
        cout << endl;
        cout << "--------------------------------------------------------------------------------";
        cout << endl;
        cout << "Line Counter:" << endl;
        cout << "--------------------------------------------------------------------------------";
        cout << endl;
        LineCounter("words.txt").writeResultsToFile("linecount.txt");
        cout << "--------------------------------------------------------------------------------";
        cout << endl;
    }
    catch (FileHandlingException fhe)
    {
        cout << fhe.get_message();
    }
    return 0;
}
