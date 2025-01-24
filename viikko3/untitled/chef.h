#include <iostream>
#ifndef CHEF_H
#define CHEF_H


using namespace std;

class Chef
{

public:
    Chef();
    Chef(string name);
   ~ Chef();

    string getChefName() const;
    int makeSalad(int aines);
    int makeSoup(int aines);

    int getMakeSalad() const;
    void setMakeSalad();

protected:
    string chefName;

};

#endif // CHEF_H
