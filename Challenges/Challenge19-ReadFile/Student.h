#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
using namespace std;

class Student
{
    private:
        string name {};
        string answers {};
        unsigned short int grade{0};
    public:
        Student(string name, string answers, unsigned short int grade);
        ~Student() = default;
        string get_name() const;
        string get_answers() const;
        unsigned short int get_grade() const;
        string describe() const;
};
#endif
