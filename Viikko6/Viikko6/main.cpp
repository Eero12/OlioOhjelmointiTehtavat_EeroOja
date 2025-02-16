#include <iostream>
#include <vector>
#include <algorithm>

#include "student.h"

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;
    studentList.push_back(Student("Jujuppi", 12));
    studentList.push_back(Student("Eero", 11));
    studentList.push_back(Student("Jonne", 18));
    studentList.push_back(Student("Valde", 15));
    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 1:
            for(Student opiskelija: studentList) {
                cout << opiskelija.getName() << endl;
            }

            break;
        case 2:

            sort(studentList.begin(), studentList.end(), [](Student a, Student b){
                return a.getName() < b.getName();
            });

            for(Student opiskelija: studentList) {
                opiskelija.printStudentInfo();
            }

            break;
        case 3:
            sort(studentList.begin(), studentList.end(), [](Student a, Student b){
                return a.getAge() < b.getAge();
            });

            for(Student opiskelija: studentList) {
                opiskelija.printStudentInfo();
            }
            break;
        case 4:{
            cout << "Anna etsittava nimi: ";
            string etsittava;
            cin >> etsittava;
            auto it = find_if(studentList.begin(), studentList.end(), [&](Student a){
              return a.getName() == etsittava;
            } );
            if(it != studentList.end()){
                cout << "Nimi loydetty!" << endl;
                it->printStudentInfo();

            }
            else{
                cout << "Nimea ei loytynyt?" << endl;
            }
        }break;
    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
        }
    }
while(selection < 5);

return 0;
}
