#include <fstream>
#include <iostream>
#include <iomanip>
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
}

void SongPlayer::displayPlaylist()
{
    cout << setw(57) << setfill('-') << "" << endl;
    cout << setfill(' ');
    cout    << setw(20) << left << "Name"
            << setw(30) << left << "Artist"
            << setw(2)  << left << "Rating"
            << endl;
    cout << setw(57) << setfill('-') << "" << endl;
    cout << setfill(' ');
    for ( const Song &song: this->playlist )
    {
        cout << song << endl;
    }
    // cout << setw(57) << setfill('-') << "" << endl;
    // cout << setfill(' ');
}

void SongPlayer::displayCurrentSong()
{
    cout << setw(57) << setfill('-') << "" << endl;
    cout << setfill(' ');
    list<Song>::iterator currentSong = this->playlist.begin();
    cout << "Current Song:" << endl;
    cout << setw(57) << setfill('-') << "" << endl;
    cout << setfill(' ');
    cout << *currentSong;
    cout << endl;
    cout << setw(57) << setfill('-') << "" << endl;
    cout << setfill(' ');
    cout << endl;
}
