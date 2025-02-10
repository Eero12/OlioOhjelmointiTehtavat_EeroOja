#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void vektoriesim(void); // esimerkki vektorista
void iteratoresim(void); // esimerkki iteraattorista


template <typename T>
T add(T a, T b){
    return a + b;
}

template<typename T> class sailio{
    public:
    sailio(T a){
        arvo = a;
    }
    T getArvo(){
        return arvo;
    }
private:
    T arvo;
};

int main()
{
    int a=5, b=7;
    cout <<a << "+"<< b <<"="<< add(a, b) << endl;

    double c=5.4, d=7.9;
    cout <<c << "+"<< d <<"="<< add(c, d) << endl;

    float e=5.1551525215, f=7.21551152152;
    cout <<e << "+"<< f <<"="<< add(e, f) << endl;

    sailio<int> s(4);
    cout << "Sailio int arvo on: " << s.getArvo() <<endl;

    sailio<string> str("Hello world!");
    cout << "Sailio string arvo on: " << str.getArvo() << endl;

    vektoriesim();

    return 0;
}

void vektoriesim(void) {

    vector<int> numbers;
    numbers.reserve(10); // Jos koko on määritelty (?)

    // Lisataan alkioita aina loppuun
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Vektorin alkiot: ";
    for (int num: numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Poistetaan alkio lopusta
    numbers.pop_back();

    cout << "Vektorin koko: " << numbers.size() << endl;
    cout << "Vektorin kapasiteetti: " << numbers.capacity() << endl;

    // Tarkista ettei vektori ole tyhja ennen kayttoa
    if (numbers.empty() == false) {
        numbers[0] = numbers[0] + 1;
    }

    cout << "Vektorin alkiot: ";
    for (int num: numbers) {
        cout << num << " ";
    }
    cout << endl;

}

// esimerkki iteraattorista
void iteratoresim() {
    vector<int> numbers = { 5, 3, 8, 1, 2 };

    cout << "Vektorin alkiot: ";
    for (int num: numbers) {
        cout << num << " ";
    }
    cout << endl;

    // luodaan iteraattori vektorin alkuun
    vector<int>::iterator it;

    // lajitellaan vektori
    sort(numbers.begin(), numbers.end());

    cout << "Lajitellut alkiot: ";
    // kaytetaan iteraattoria silmukassa
    for (it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Etsitaan arvoa iteraattorilla
    int valueToFind = 3;
    it = find(numbers.begin(), numbers.end(), valueToFind);
    if (it != numbers.end()) {
        cout << "Etsitty arvo=" << valueToFind << " indeksissa "
             << distance(numbers.begin(), it) << endl;
    } else {
        cout << "Arvo=" << valueToFind << " ei loytynyt " << endl;
    }
}
