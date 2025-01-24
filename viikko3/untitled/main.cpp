#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chef("ad");

    cout << chef.makeSalad(20) << " Portions" << endl;
    cout << chef.makeSoup(200) << " Portions"<< endl;


    ItalianChef italy("MARIO");
    italy.askSecret("pizza", 8 , 14208124);
    return 0;
}
