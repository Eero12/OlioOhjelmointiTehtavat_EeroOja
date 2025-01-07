#include <iostream>

using namespace std;

int main()
{
    int k = 34;
    float a = 4.1;
    double b = 1.5;
    char merkkijono[] = "qwertyuiopasdfghjklzxcvbnm";
    string stringit = "";

    cin >> stringit;
    cout << "Hello World!" << " " << b << " "  << k << " " << a << " "  << merkkijono << " "  << stringit.length() <<endl;
    for (int var = 0; var < stringit.length() +1; ++var) {
        cout << merkkijono[var] <<endl;
    }
    return 0;
}
