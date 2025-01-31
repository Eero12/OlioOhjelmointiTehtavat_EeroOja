#include <iostream>
#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"

using namespace std;


class Luottotili : public Pankkitili
{
public:
    Luottotili();
    Luottotili(string wnr, double cdtlmt); // wnr owner and cdtlmt creditlimit ilman ääkkösiä
    virtual ~Luottotili();
    virtual bool deposit(double) override;
    virtual bool withdraw(double) override;


protected:
    double creditLimit = 0;
};

#endif // LUOTTOTILI_H
