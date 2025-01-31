#include "asiakas.h"

Asiakas::Asiakas(string name, double cl)
    :mainBank(name), creditBank(name, cl)
{

}

bool Asiakas::deposit(double depositamount)
{
    return mainBank.deposit(depositamount);
}

bool Asiakas::withdraw(double withdrawAmount)
{
    return mainBank.withdraw(withdrawAmount);
}

bool Asiakas::Creditdeposit(double CreditdepositAmount)
{
    return creditBank.deposit(CreditdepositAmount);
}

bool Asiakas::Creditwithdraw(double CreditwithdrawAmount)
{
    return creditBank.withdraw(CreditwithdrawAmount);
}

string Asiakas::getName()
{
    ;
}

void Asiakas::showBalance()
{
    cout << mainBank.getBalance() << endl;
}
