#ifndef _STUDENTS_H_
#define _STUDENTS_H_

#include <iostream>
#include <iomanip>
#include <vector>
#include "Student.h"

using namespace std;

class Students
{
    private:
        vector<Student> students;
        double average_grade;
        string trim(string s);
        unsigned short int calc_grade(string answers, string answer_key);
        double calc_average_grade();
    public:
        Students(string student_file_name);
        ~Students() = default;
        void print() const;
};
#endif
