#include "student.h"


Student::Student(string n, int a)
{
    name = n;
    age = a;

}

void Student::setAge(int setAge)
{
    age = setAge;
}

void Student::setName(string setName)
{
    name = setName;
}

string Student::getName()
{
    return name;
}

int Student::getAge()
{
    return age;
}

void Student::printStudentInfo()
{
    cout << "Students name: " << getName() << endl;
    cout << "Students age: " << getAge() << endl;
}
