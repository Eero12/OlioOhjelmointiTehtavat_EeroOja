#include "chef.h"

Chef::Chef() {

    cout <<"Constructori" << endl;

}
Chef::~Chef() {
    cout << "Destruction" << endl;


}
Chef::Chef(string name) {


}
int Chef::makeSalad(int aines)
{
    int annokset;
    cout << "Ainesten maara: " << aines << endl;
    annokset = aines / 5;
    cout << "Annoksia tulee: " << endl;
    return annokset;

}
int Chef::makeSoup(int aines)
{
    int annokset;
    cout << "Ainesten maara: " << aines << endl;
    annokset = aines / 3;
    cout << "Annoksia tulee: " << endl;
    return annokset;
}

