#include "pankkitili.h"

Pankkitili::Pankkitili() {
    saldo = 0;
    salasana = "oskari";
    tilinumero = "FI34 27498 2374 2987";
}

Pankkitili::Pankkitili(string salasana)
{
    tilinumero = "FI34 27498 2374 2987";
    saldo = 0;
    this->salasana = salasana;
}

int Pankkitili::getSaldo() const
{
    return saldo;
}

void Pankkitili::setSaldo(int newSaldo)
{
    saldo = saldo + newSaldo;
}
