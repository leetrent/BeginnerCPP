#ifndef _STUDENTS_H_
#define _STUDENTS_H_

#include <iostream>
#include <vector>
#include "Student.h"

using namespace std;

class Students
{
    private:
        vector<Student> students;
        string trim(string s) ;
    public:
        Students(string student_file_name);
        ~Students() = default;
};
#endif
