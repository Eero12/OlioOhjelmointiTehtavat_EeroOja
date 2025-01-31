#include "pankkitili.h"

Pankkitili::Pankkitili() {}

Pankkitili::Pankkitili(string user)
{
    owner = user;

}

Pankkitili::~Pankkitili()
{
    cout << "Destructor" << endl;
}

double Pankkitili::getBalance()
{
    return balance;
}

bool Pankkitili::deposit(double depositAmount)
{
    if(depositAmount < 0){
        cout << "You cant deposit negative amount of money! " << endl;
        return false;
    }
    if(depositAmount > 0){
        cout << "Deposit succesfull! Deposit amount: " << depositAmount << endl;
        balance+=depositAmount;
        cout << "Your balance is now: " << getBalance() << endl;
        return true;
    }
    else {
        return false;
    }
}

bool Pankkitili::withdraw(double withdrawAmount)
{
    cout << "Balance is: " << balance << " and You want to withdraw: " << withdrawAmount
         << endl;

    if(withdrawAmount > balance){
        cout << "Balance ain't enough!" << endl;
        return false;
    }
    if(withdrawAmount < 0){
        cout << "You cant withdraw negative amount of money!" << endl;
        return false;
    }
    if(withdrawAmount <= balance){
        cout << "Withdraw succesfull! " << endl;
        balance-=withdrawAmount;
        cout << "Your balance is now: " << balance  << endl;
        return true;
    }
    else{
        return false;
    }


}
