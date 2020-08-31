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

    size_t ii = 1;
    while (ii < data_vec.size() )
    {
        string name = data_vec.at(ii);
        ii++;
        string answers = data_vec.at(ii);
        unsigned short int grade = this->calc_grade(answers, answer_key);
        this->students.push_back(Student(name, answers, grade));
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

unsigned short int Students::calc_grade(string answers, string answer_key)
{
    int grade = 0;
    for (size_t ii = 0; ii < answer_key.size(); ii++)
    {
        if ( answers.at(ii) == answer_key.at(ii) )
        {
            grade++;
        }
    }
    return grade;
}
