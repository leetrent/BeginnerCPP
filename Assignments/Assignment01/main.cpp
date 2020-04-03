#include <iostream>
#include <string>
using namespace std;


// string reverse(string const &s)
// {
// 	string rev;
// 	for (int i = s.size() - 1; i >= 0; i--) {
// 		rev = rev.append(1, s[i]);
// 	};

// 	return rev;
// }

string reverse(string value)
{
    string rev{};
    for ( int ii = value.length() - 1; ii >= 0; ii-- )
    {
        rev = rev.append( 1, value[ii]);
    }
    return rev;
}


void printRow(size_t subsetSize, size_t capacity, string value, size_t bufferSize)
{
    // cout << "------------------------------------------------------------" << endl;
    // cout << "value...........: " << "'" << value << "'" << endl;
    // cout << "value.length()..: " << value.length() << endl;

    // cout << endl;
    // cout << "capacity..,.....: " << capacity     << endl;

    // cout << endl;
    // cout << "subsetSize......: " << subsetSize   << endl;

    // cout << endl;
    // cout << "bufferSize......: " << bufferSize   << endl;

    // string buffer(bufferSize, ' ');
    // cout << "buffer: '" << buffer << "'" << endl;
    // cout << "------------------------------------------------------------" << endl;

    ////////////////////////////////////////////////
    // GOLDEN:   
    ////////////////////////////////////////////////
    // string subset = value.substr(0, subsetSize);
    // string reversedSubset = reverse(subset);
    // cout << subset;
    // cout << reversedSubset.substr(1);
    ////////////////////////////////////////////////

    string subset = value.substr(0, subsetSize);
    string reversedSubset = reverse(subset);
    subset.append(reversedSubset.substr(1));
    //cout << subset;

    string buffer(bufferSize, ' ');
    buffer.replace( (bufferSize - subset.length()) / 2, subsetSize, subset);
    cout << buffer;
    //cout << "buffer: '" << buffer << "'" << endl;

}

int main()
{ 
    string userProvided {};
    size_t stringLength {};

    cout << "Enter a string: ";
    cin >> userProvided;

    for ( size_t ii{0}; ii < userProvided.length(); ii++ )
    {
        size_t rowNbr = ii + 1;
        printRow(rowNbr, (rowNbr + ii), userProvided, userProvided.length() * 2 - 1  );
        cout << endl;
    }

    return 0;
}