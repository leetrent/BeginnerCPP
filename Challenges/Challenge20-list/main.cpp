#include <iostream>
#include "SongPlayer.h"
#include "Song.h"

using namespace std;

int main()
{
    SongPlayer("songs.txt");
    string name = "lll";
    string artist = "111";
    unsigned short int rating = 1;

    Song song{name, artist, rating};

    cout << song.getName() << " " << song.getArtist() << " " << song.getRating() << endl;
    return 0;
}
