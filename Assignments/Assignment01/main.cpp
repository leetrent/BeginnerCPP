#include <iostream>
#include <string>
using namespace std;

string reverse(string const &value)
{
    string rev{};
    for ( int ii = value.length() - 1; ii >= 0; ii-- )
    {
        rev = rev.append( 1, value[ii]);
    }
    return rev;
}

void printRow(size_t substrSize, string value, size_t lineSize)
{
    string rowContent = value.substr(0, substrSize);
    string reversedRowContent = reverse(rowContent);
    rowContent.append(reversedRowContent.substr(1));

    string buffer(lineSize, ' ');
    buffer.replace( ( lineSize - rowContent.length() ) / 2, substrSize, rowContent);
    cout << buffer;
}

int main()
{ 
    string userProvided {};

    cout << "Enter a string: ";
    cin >> userProvided;

    for ( size_t ii{0}; ii < userProvided.length(); ii++ )
    {
        printRow(ii + 1, userProvided, userProvided.length() * 2 - 1  );
        cout << endl;
    }

    return 0;
}