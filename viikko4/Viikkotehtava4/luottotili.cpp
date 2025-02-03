#include "luottotili.h"

Luottotili::Luottotili() {

}

Luottotili::Luottotili(string wnr, double cdtlmt)
    :Pankkitili(wnr)
{
    creditLimit = cdtlmt;
    cout << "luottoraja on: " << creditLimit << endl;
}

Luottotili::~Luottotili()
{
    cout << endl;
    cout << "Luottotili destructor" << endl;
}

bool Luottotili::deposit(double depositAmount)
{

    if(depositAmount < 0){
        cout << "Cant deposit negative amount " << endl;
        return false;
    }
    if(depositAmount > 0  && balance-depositAmount >= 0){
        balance-=depositAmount;
        cout << "Deposit successfull debt is now: " << balance << endl;
        return true;
    }
    if(balance-depositAmount <= 0){
        cout << "You want to deposit way too much money! Debt is only: " << balance << endl;
        return false;
    }
    else {
        return false;
    }
}

bool Luottotili::withdraw(double withdrawAmount)
{
    cout << "Balance is: " << balance << " And you want to withdraw: " << withdrawAmount
         << endl << endl;

    if(withdrawAmount < creditLimit){ // onnistuu!
        cout << "withdraw successfull" << " You wanted to withdraw: " << withdrawAmount
             << " When credit limit is: " << creditLimit << endl;
        balance += withdrawAmount;
        cout << "Balance is: " << balance  << endl;
        cout << "Credit left: " << creditLimit-withdrawAmount << endl;
        cout << "Debt is: " << balance << endl;

        return true;
    }
    else if(withdrawAmount < creditLimit){ // withdrawamount in liian suuria
        cout << " Withdraw unsuccessfull" << endl;
        cout << " Withdraw successfull" << " You wanted to withdraw: " << withdrawAmount
             << " When credit limit is: " << creditLimit << endl;
        return false;
    }
    else if(withdrawAmount < 0){
        cout << "Cant withdraw negative amount of money " << endl;
        return false;
    }
    else{
        return false;
}
}
