#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(string name, string answers, string answer_key)
    : name{name}, answers{answers}
{
    cout    << "Student = {"
            << name
            << ", "
            << answers
            << ", "
            << answer_key
            << "}"
            << endl;

    //this->grade = calc_grade(answers, answer_key);
    for (size_t ii = 0; ii < answer_key.size(); ii++)
    {
        if ( answers.at(ii) == answer_key.at(ii) )
        {
            this->grade++;
        }
    }
}

unsigned short int Student::get_grade()
{
    return this->grade;
}

string Student::describe()
{
    string description{"Student = {"};
    description.append("name: ");
    description.append(this->name);
    description.append(", grade: ");
    description.append(to_string(this->grade));
    description.append("}");
    return description;
}
