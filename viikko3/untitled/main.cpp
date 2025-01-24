#include <iostream>
#include "chef.h"

using namespace std;

int main()
{
    Chef chef("ad");
    int salaattiAnnokset = chef.makeSalad(20);
    cout << salaattiAnnokset << endl;
    int keittoAnnokset = chef.makeSoup(200);
    cout << keittoAnnokset << endl;

    return 0;
}
