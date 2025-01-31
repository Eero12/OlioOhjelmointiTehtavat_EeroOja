#include <iostream>
#ifndef PANKKITILI_H
#define PANKKITILI_H

using namespace std;


class Pankkitili
{
public:
    Pankkitili();
    Pankkitili(string);
    virtual ~Pankkitili();
    double getBalance();
    virtual bool deposit(double depositAmount);
    virtual bool withdraw(double withdrawAmount);



private:



protected:

    string owner;
    double balance = 0;


};

#endif // PANKKITILI_H
