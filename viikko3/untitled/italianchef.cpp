#include "italianchef.h"

ItalianChef::ItalianChef() {
    cout << "ITALY Constructori" << endl << endl;


}
ItalianChef::~ItalianChef() {
    cout << endl;
    cout << "ITALY Destructor" << endl << endl;

}
ItalianChef::ItalianChef(string name) {
    cout << name << endl;


}
bool ItalianChef::askSecret(string salasana, int w, int f){
    if(salasana.compare(password) == 0)
    {
        water = w;
        flour = f;
        cout << "Password correct you make pizza!" << endl;
        makepizza();
        return true;
    }
    else{
        cout << "password incorrect" << endl;
        return false;
    };
}

int ItalianChef::makepizza()
{
    int annostenmaara=0;
    cout << "Water amount: " << water << " Flour amount: " << flour << endl;
    while (water > 4 && flour > 4) {
        annostenmaara++;
        water = water-5;
        flour = flour-5;
    }
    cout <<"Annokset: "<< annostenmaara << endl;
    return annostenmaara;
}
