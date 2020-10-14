#ifndef _SONG_PLAYER_H
#define _SONG_PLAYER_H

#include <string>
#include <list>
#include "Song.h"
using namespace std;

class SongPlayer
{
    private:
        string fileName{};
        list<Song> playlist;
        list<Song>::iterator currentSong;
        void displaySong(const string label, const Song &song);
        void refreshFile();
    public:
        SongPlayer(string file_name);
        ~SongPlayer() = default;
        void displayMenu();
        void displayPlaylist();
        void playCurrentSong();
        void playFirstSong();
        void playNextSong();
        void playPreviousSong();
        void addNewSong(string name, string artist, unsigned short int);
};

#endif
