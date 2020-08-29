#include <regex>
#include <string>


// #include <iostream>
#include <fstream>
#include <vector>
#include "Students.h"

using namespace std;

Students::Students(std::string student_file_name)
{
    ifstream student_file {student_file_name};
    if (!student_file.is_open())
    {
        cerr << "Could not open file '" << student_file_name << "'." << endl;
    }

    vector<string> data_vec{};
    string line{};
    while(getline(student_file, line))
    {
        data_vec.push_back(trim(line));
    }

    for (const string data_line: data_vec)
    {
        cout << data_line << endl;
    }

    string answer_key = data_vec.at(0);
    cout << endl << "(answer_key): '" << answer_key << "'" << endl;

    cout <<  "(Frank)...: '" << data_vec.at(1) << "', " << data_vec.at(2) << "'" << endl;
    cout << "(Larry)...: '" << data_vec.at(3) << "', " << data_vec.at(4) << "'" << endl;
    cout << "(Moe).....: '" << data_vec.at(5) << "', " << data_vec.at(5) << "'" << endl;
    cout << "(Larry)...: '" << data_vec.at(7)  << "', " << data_vec.at(8) << "'" << endl;
    cout << "(Michael).: '" << data_vec.at(9) << "', " << data_vec.at(10) << "'" << endl;
    cout << endl;

    size_t ii = 1;
    while (ii < data_vec.size() )
    {
        string name = data_vec.at(ii);
        ii++;
        string answers = data_vec.at(ii);
        this->students.push_back(Student(name, answers, answer_key));
        ii++;
    }
    
    for (Student student : this->students)
    {
        cout << student.describe() << endl;
    }
}

string Students::trim(string s) 
{
    regex e("^\\s+|\\s+$");   // remove leading and trailing spaces
    return regex_replace(s, e, "");
}
