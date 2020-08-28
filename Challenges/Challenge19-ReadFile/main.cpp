#include <iostream>
#include <fstream>
#include <vector>
#include "Student.h"

using namespace std;

const string IN_FILE_NAME = "responses.txt";

// vector<Student> readFile(ifstream in_file);

int main()
{
    ifstream in_file {IN_FILE_NAME};
    if (!in_file.is_open())
    {
        cerr << "Could not open file '" << IN_FILE_NAME << "'." << endl;
        return 1;
    }

    vector<string> data_vec{};
    string line{};
    while(getline(in_file, line))
    {
        data_vec.push_back(line);
    }

    for (const string data_line: data_vec)
    {
        cout << data_line << endl;
    }

    // string answer_key{};
    // in_file >> answer_key;
    // cout << "answer_key: '" << answer_key << "'" << endl;
    //
    // Student lee {"Lee", "ABCDE", "ABCDE"};
    // cout << "Lee's grade: " << lee.get_grade() << endl;
    // vector<Student> students{lee};

    return 0;
}
// vector<Student> readFile(ifstream in_file)
// {
// }
