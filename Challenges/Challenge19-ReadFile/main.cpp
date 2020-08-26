#include <iostream>
#include <fstream>
using namespace std;

const string IN_FILE_NAME = "responses.txt";
int main()
{
    ifstream in_file {IN_FILE_NAME};
    if (!in_file.is_open())
    {
        cerr << "Could not open file '" << IN_FILE_NAME << "'." << endl;
        return 1;
    }

    string answer_key{};
    in_file >> answer_key;
    cout << "answer_key: '" << answer_key << "'" << endl;

    return 0;
}
