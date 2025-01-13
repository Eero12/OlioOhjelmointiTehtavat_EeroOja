#include <iostream>
#include <string>
#include "pankkitili.h"


using namespace std;

int main()
{
    Pankkitili munTili("123");
    int luku;
    string salasana;
       while(salasana != munTili.salasana){
    cout << "Kirjaudu sisaan antamalla salasana" << endl;
    cin >> salasana;
       }
    cout << "Anna pankkitilin summa" << endl;
       cin >> luku;
    munTili.setSaldo(luku);
    luku = munTili.getSaldo();
    cout <<"saldosi on: " <<luku << endl;

    return 0;
}
