#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main()
{
    string dane = "123 45.67 Bober";
    stringstream ss(dane);
    int liczba;
    double zmienna;
    string tekst;
    ss >> liczba;
    ss >> zmienna;
    ss >> tekst;
    cout << "Liczba: "
         << liczba
         << endl;
    cout << "Double: "
         << zmienna
         << endl;
    cout << "Tekst: "
         << tekst
         << endl;
    stringstream wynik;
    wynik << "Suma = "
          << liczba + 10;
    cout << wynik.str()
         << endl;
    return 0;
}