#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum){
int vastaus = -1;
    int arvaukset = 0;
srand(time(NULL));
int rndnumber = rand() % maxnum;
cout <<"Luku on 1-"<< maxnum << " valilta" << endl;
while (vastaus != rndnumber) {
    cin >> vastaus;
    if(vastaus < rndnumber){
        arvaukset++;
        cout << "Numero on suurempi " << endl;
    }
    else if(vastaus > rndnumber){
        cout << "Numero on pienempi" << endl;
        arvaukset++;
    }
}

cout << "OIKEIN!" <<" Arvausten maara: " << arvaukset << endl;
return 0;
}

int main()
{
 game(40);
}
