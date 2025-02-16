#include <iostream>
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student
{
public:
    Student(string n, int a);
    void setAge(int);
    void setName(string);
    string getName();
    int getAge();
    void printStudentInfo();

private:
    string name;
    int age;
};

#endif // STUDENT_H
