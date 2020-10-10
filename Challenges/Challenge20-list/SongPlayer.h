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
    public:
        SongPlayer(string file_name);
        ~SongPlayer() = default;
        void displayPlaylist();
        void displayCurrentSong();
        void displayMenu();
        Song getCurrentSong();
        void playFirstSong();
};

#endif
