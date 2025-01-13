#include "pankkitili.h"

Pankkitili::Pankkitili() {
    saldo = 0;
    salasana = "oskarionkakka9";
    tilinumero = "FI34 27498 2374 2987";
}

int Pankkitili::getSaldo() const
{
    return saldo;
}

void Pankkitili::setSaldo(int newSaldo)
{
    saldo = saldo + newSaldo;
}
