#include "asiakas.h"

Asiakas::Asiakas(string name, double cl)
    :mainBank(name), creditBank(name, cl)
{
    customerName =  name;
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
    return customerName;
}

void Asiakas::showBalance()
{
    cout << mainBank.getBalance() << endl;
}

bool Asiakas::moneyTransfer(double moneyAmount, Asiakas &customer)
{
    double accountBalance;
    accountBalance = mainBank.getBalance();
    if(moneyAmount <= accountBalance){

        cout <<"Money you wanted to transfer: " <<moneyAmount  << " Money on the account " << mainBank.getBalance()
             << endl;
        cout << "User you wanted to transfer to: " << customer.getName() << endl;
    mainBank.withdraw(moneyAmount);
        cout << endl;
    customer.deposit(moneyAmount);


    return true;
    }
    if(moneyAmount > mainBank.getBalance()){
        cout << "You cant transfer money that you dont have!" << endl;
        return false;

    }



    return false;
}
