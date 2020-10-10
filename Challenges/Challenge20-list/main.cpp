#include <iostream>
#include "SongPlayer.h"
#include "Song.h"

using namespace std;

int main()
{
    SongPlayer songPlayer{"songs.txt"};
    // songPlayer.displayPlaylist();
    // songPlayer.displayCurrentSong();
    //songPlayer.displayMenu();
    //cout << endl;

    char userSelection{};

    do
    {
        songPlayer.displayMenu();
        std::cin >> userSelection;
        userSelection = toupper(userSelection);
        switch(userSelection)
        {
            case 'F':
                songPlayer.playFirstSong();
                break;
            case 'N':
            break;
            case 'P':
            break;
            case 'A':
            break;
            case 'L':
                songPlayer.displayPlaylist();
                songPlayer.displayCurrentSong();
                break;
            case 'Q':
            break;
            default:
                cout << "Bad selection";
        }
    } while(userSelection != 'Q');

    //cout << song.getName() << " " << song.getArtist() << " " << song.getRating() << endl;
    return 0;
}
