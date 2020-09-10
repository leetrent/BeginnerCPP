#include <regex>
#include <string>


// #include <iostream>
#include <fstream>
#include <vector>
#include "Students.h"
#include "FileHandlingException.h"

using namespace std;

Students::Students(std::string student_file_name)
{
    ifstream student_file {student_file_name};
    if (!student_file.is_open())
    {
        throw FileHandlingException("Could not open file '" + student_file_name + "'.");
    }

    vector<string> data_vec{};
    string line{};
    while(getline(student_file, line))
    {
        data_vec.push_back(trim(line));
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

    this->average_grade = this->calc_average_grade();

    student_file.close();
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

double Students::calc_average_grade()
{
    unsigned short int running_total = 0;
    for (Student student : this->students)
    {
        running_total += student.get_grade();
    }
    return static_cast<double>(running_total) / this->students.size();
}

void Students::print() const
{
    cout << setw(15) << left << "Student" << setw(5) << "Score" << endl;
    cout << setw(20) << setfill('-') << "" << endl;
    cout << setfill(' ');

    for (Student student : this->students)
    {
        cout << setprecision(1) << fixed;
        cout << setw(15)    << left     << student.get_name();
        cout << setw(5)     << right    << student.get_grade();
        cout << endl;
    }

    cout << setw(20) << setfill('-') << "" << endl;
    cout << setfill(' ');
    cout << setw(15) << left << "Average score";
    cout << setw(5) << right << this->average_grade;

}
