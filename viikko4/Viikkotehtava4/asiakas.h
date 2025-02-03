#include <iostream>
#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <pankkitili.h>
#include <luottotili.h>

using namespace std;

class Asiakas
{
public:
    Asiakas(string n, double cl);
    bool deposit(double depositAmount);
    bool withdraw(double withdrawAmount);
    bool Creditdeposit(double CreditdepositAmount);
    bool Creditwithdraw(double CreditwithdrawAmount);
    string getName();
    void showBalance();

private:
    Pankkitili(mainBank);
    Luottotili(creditBank);
    string customerName;

protected:
};

#endif // ASIAKAS_H
