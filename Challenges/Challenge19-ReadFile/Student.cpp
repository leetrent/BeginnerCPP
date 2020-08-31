#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(string name, string answers, unsigned short int grade)
    : name{name}, answers{answers}, grade{grade}
{}

string Student::get_name() const
{
    return this->name;
}

string Student::get_answers() const
{
    return this->answers;
}

unsigned short int Student::get_grade() const
{
    return this->grade;
}

string Student::describe() const
{
    string description{"Student = {"};
    description.append("name: ");
    description.append(this->name);
    description.append(", answers: ");
    description.append(this->answers);
    description.append(", grade: ");
    description.append(to_string(this->grade));
    description.append("}");
    return description;
}
