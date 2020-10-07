#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
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
        string subString{};
        stringstream songStream(songLine);
        string name{};
        string artist{};
        string rating{};
        while (songStream.good())
        {
            getline(songStream, name, '|');
            getline(songStream, artist, '|');
            getline(songStream, rating, '|');
            this->playlist.push_back(Song(name, artist, stoi(rating)));
        }
    }

    unsigned short int count = 0;
    for (const Song &song : this->playlist)
    {
        cout << endl;
        cout << "Song #" << ++count << ":" << endl;
        cout << song.getName()      << endl;
        cout << song.getArtist()    << endl;
        cout << song.getRating()    << endl;
        cout << endl;
    }


    cout << endl;
}
