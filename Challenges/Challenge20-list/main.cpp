#include <iostream>
#include "SongPlayer.h"
#include "Song.h"

using namespace std;

int main()
{
    SongPlayer songPlayer{"songs.txt"};
    songPlayer.displayPlaylist();
    songPlayer.displayCurrentSong();

    //cout << song.getName() << " " << song.getArtist() << " " << song.getRating() << endl;
    return 0;
}
