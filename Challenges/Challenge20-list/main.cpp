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

        string name{};
        string artist{};
        unsigned short int rating{};

        switch(userSelection)
        {
            case 'F':
                songPlayer.playFirstSong();
                break;
            case 'N':
                songPlayer.playNextSong();
                break;
            case 'P':
                songPlayer.playPreviousSong();
                break;
            case 'A':
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                cout << "Enter Song Name: ";
                getline(cin, name);
                cout << "Enter Song Artist: ";
                getline(cin, artist);
                cout << "Enter Your Rating (1-5): ";
                cin >> rating;
                songPlayer.addNewSong(name, artist, rating);
                songPlayer.displayPlaylist();
                songPlayer.playCurrentSong();
                break;
            case 'L':
                songPlayer.displayPlaylist();
                songPlayer.playFirstSong();
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
