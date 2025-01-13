#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <iostream>
#include <string>

using namespace std;


class Pankkitili
{
public:
    Pankkitili();
    Pankkitili(string salasana);


    int getSaldo() const;
    void setSaldo(int newSaldo);


    string getSalasana() const;
    void setSalasana(const string &newSalasana);
    string salasana;

private:
    int saldo;
    string tilinumero;

};

#endif // PANKKITILI_H
