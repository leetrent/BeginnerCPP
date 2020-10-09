#include <iomanip>
#include "Song.h"

Song::Song(string name, string artist, unsigned short int rating)
    : name{name}, artist{artist}, rating{rating} {}

string Song::getName() const
{
    return this->name;
}

string Song::getArtist() const
{
    return this->artist;
}

unsigned short int Song::getRating() const
{
    return this->rating;
}

ostream &operator<<(ostream &os, const Song &song)
{
    os  << setw(20) << left << song.getName()
        << setw(30) << left << song.getArtist()
        << setw(2)  << left << song.getRating();

    return os;
}
