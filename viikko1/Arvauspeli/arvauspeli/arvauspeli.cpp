#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int vastaus = -1;
    srand(time(NULL));
    int rndnumber = rand() % 20;
    //cout << rndnumber << endl;
    while (vastaus != rndnumber) {
    cin >> vastaus;
        if(vastaus < rndnumber){
        cout << "Numero on suurempi " << endl;
        }
        else if(vastaus > rndnumber){
            cout << "Numero on pienempi xdd " << endl;
        }
    }
    cout << "OIKEIN!" << endl;
    return 0;
}
