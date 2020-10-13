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
    this->currentSong = this->playlist.begin();
    songFile.close();
}

void SongPlayer::displayPlaylist()
{
    cout << endl;
    cout << "Current Playlist:" << endl;
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

void SongPlayer::playCurrentSong()
{
    cout << endl;
    cout << setw(57) << setfill('-') << "" << endl;
    cout << setfill(' ');
    cout << "Current Song:" << endl;
    cout << setw(57) << setfill('-') << "" << endl;
    cout << setfill(' ');
    cout << *this->currentSong;
    cout << endl;
    cout << setw(57) << setfill('-') << "" << endl;
    cout << setfill(' ');
}

void SongPlayer::displayMenu()
{
    cout << endl;
    cout << setw(57) << setfill('-') << ""  << endl;
    cout << "Menu:" << endl;
    cout << setw(57) << setfill('-') << ""  << endl;
    cout << "F - Play First Song"           << endl;
    cout << "N - Play Next song"            << endl;
    cout << "P - Play Previous song"        << endl;
    cout << "A - Add and play a new Song"   << endl;
    cout << "L - List the current playlist" << endl;
    cout << setw(57) << setfill('-') << "" << endl;
    cout << "Enter a selection (Q to quit): ";
}

void SongPlayer::playFirstSong()
{
    this->currentSong = this->playlist.begin();
    this->displaySong("Playing first song:", *this->currentSong);
}

void SongPlayer::playNextSong()
{
    this->currentSong++;
    if (this->currentSong == this->playlist.end())
    {
        this->currentSong = this->playlist.begin();
    }
    this->displaySong("Playing next song:", *this->currentSong);
}

void SongPlayer::playPreviousSong()
{
    if (this->currentSong == this->playlist.begin())
    {
        this->currentSong = this->playlist.end();
    }
    this->displaySong("Playing previous song:", *this->currentSong--);
}

void SongPlayer::displaySong(const string label, const Song &song)
{
    cout << endl;
    cout << setw(57) << setfill('-') << ""  << endl;
    cout << label << endl;
    cout << setw(57) << setfill('-') << ""  << endl;
    cout << setfill(' ');
    cout    << setw(20) << left << "Name"
            << setw(30) << left << "Artist"
            << setw(2)  << left << "Rating"
            << endl;
    cout << *this->currentSong << endl;
}

void SongPlayer::addNewSong(string name, string artist, unsigned short int rating)
{
    this->playlist.emplace_back(name, artist, rating);
    this->currentSong = this->playlist.end();
    this->currentSong--;
}
