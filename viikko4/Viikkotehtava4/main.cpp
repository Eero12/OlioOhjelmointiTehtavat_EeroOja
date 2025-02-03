#include <iostream>
#include <pankkitili.h>
#include <luottotili.h>
#include <asiakas.h>

using namespace std;

int main()
{

    Asiakas asiakas1("eero oja" , 900);
    Asiakas asiakas2("amanda illi", 1000);
    cout << endl;

    cout << "Asiakas: " << asiakas1.getName() << endl;
    cout << endl;
    asiakas1.deposit(100);
    cout << endl;
    cout << "Your balance: " ;
    cout << endl;
    asiakas1.moneyTransfer(20, asiakas2);
    cout << endl;
    cout << "Your balance after transfer: " ;
    asiakas1.showBalance();
    cout << endl;



    cout << "Asiakas: " << asiakas2.getName() << endl;
    cout << endl;
    asiakas2.deposit(100);
    cout << endl;
    asiakas2.moneyTransfer(119.99, asiakas1);
    cout << endl;
    cout << asiakas2.getName() << " Account holder balance: ";
    asiakas2.showBalance();


    return 0;
}
