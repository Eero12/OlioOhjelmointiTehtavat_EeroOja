#include "chef.h"

Chef::Chef() {

    cout <<"BASIC Constructori" << endl << endl;

}
Chef::~Chef() {
    cout << "BASIC Destruction" << endl << endl;;


}
Chef::Chef(string name) {
    cout << "Cocks name: " << name << endl;

}
int Chef::makeSalad(int aines)
{
    int annokset;
    cout << "Ingredient amount: " << aines << endl;
    annokset = aines / 5;
    return annokset;

}
int Chef::makeSoup(int aines)
{
    int annokset;
    cout << "Ingredient amount: " << aines << endl;
    annokset = aines / 3;
    return annokset;
}

