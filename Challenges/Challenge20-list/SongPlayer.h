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
    public:
        SongPlayer(string file_name);
        ~SongPlayer() = default;
};

#endif
