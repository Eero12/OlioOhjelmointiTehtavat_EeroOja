#include "seuraaja.h"
#include <iostream>

using namespace std;


Seuraaja::Seuraaja() {



}

Seuraaja::Seuraaja(string nimi)
{
    n = nimi;
    cout << "Luodaan seuraaja " << n << endl;
}

string Seuraaja::getNimi() const
{
    return n;
}

void Seuraaja::paivitys(string viesti)
{
    cout << n << " Sai viestin. Viesti on: " << viesti << endl;
}
