#include <iostream>
#include <memory>
#include<seuraaja.h>
#include<notifikaattori.h>.h>


using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("AEero");
    Seuraaja *B = new Seuraaja("BEero");
    Seuraaja *C = new Seuraaja("CEero");
    Notifikaattori *n =new Notifikaattori();

    n->lisaa(A);
    n->lisaa(C);
    n->lisaa(B);
    n->tulosta();


    n->postita("Tama on viesti1");

    n->poista(B);

    n->postita("Tama on viesti2");



    delete A;
    delete B;
    delete C;
    delete n;
    return 0;
}
