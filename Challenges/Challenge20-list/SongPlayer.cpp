#include <fstream>
#include <iostream>
#include <sstream>
#include "SongPlayer.h"
#include "FileHandlingException.h"

SongPlayer::SongPlayer(string file_name) : fileName{file_name}
{
    ifstream songFile {fileName};
    if (!songFile.is_open())
    {
        throw FileHandlingException("Could not open file '" + fileName + "'.");
    }

    cout << endl;
    string songLine{};
    while(getline(songFile, songLine))
    {
        cout << "~" << songLine << "~" << endl;
        string subString{};
        stringstream songStream(songLine);
        while (songStream.good())
        {
            getline(songStream, subString, '|');
            cout << subString << endl;
        }
        cout << endl;
    }
    cout << endl;
}
