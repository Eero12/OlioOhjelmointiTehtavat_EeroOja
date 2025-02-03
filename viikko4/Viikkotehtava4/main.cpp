#include <iostream>
#include <pankkitili.h>
#include <luottotili.h>
#include <asiakas.h>

using namespace std;

int main()
{

    Asiakas asiakas("eero oja" , 900);

    asiakas.Creditdeposit(500);
    asiakas.showBalance();
    cout << "Asiakas: " << asiakas.getName() << endl;

    return 0;
}
