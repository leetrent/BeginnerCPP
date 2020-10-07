#ifndef _SONG_H_
#define _SONG_H_

#include <iostream>
#include <string>

using namespace std;
class Song
{
    friend ostream &operator<<(ostream &os, const Song &song);
    private:
        string name;
        string artist;
        unsigned short int rating;
    public:
        Song(string name, string artist, unsigned short int rating);
        ~Song() = default;
        string getName() const;
        string getArtist() const;
        unsigned short int getRating() const;
        bool operator<(const Song &rhs) const;
        bool operator==(const Song &rhs) const;
};
#endif
