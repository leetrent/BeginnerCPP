#ifndef _SONG_PLAYER_H
#define _SONG_PLAYER_H

#include <string>
using namespace std;

class SongPlayer
{
    private:
        string fileName{};
    public:
        SongPlayer(string file_name);
        ~SongPlayer() = default;
};

#endif
