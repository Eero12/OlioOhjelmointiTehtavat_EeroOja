#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <iostream>
#include <string>

using namespace std;


class Pankkitili
{
public:
    Pankkitili();


    int getSaldo() const;
    void setSaldo(int newSaldo);
    string salasana;


private:
    int saldo;
    string tilinumero;
    //string salasana;

};

#endif // PANKKITILI_H
