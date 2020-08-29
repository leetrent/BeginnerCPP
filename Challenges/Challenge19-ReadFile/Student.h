#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        string answers;
        unsigned short int grade{0};
    public:
        Student(string name, string answers, string answer_key);
        ~Student() = default;
        unsigned short int get_grade();
        string describe();
};
#endif
