#include "../include/ZadParzysta.h"

#include <iostream>
using namespace std;
bool ZadParzysta::CzyParzystaBitowo(int liczba)
{
    return (liczba & 1) == 0;
}
bool ZadParzysta::CzyParzystaModulo(int liczba)
{
    return liczba % 2 == 0;
}
bool ZadParzysta::CzyParzystaWarunkowy(int liczba)
{
    return (liczba % 2 == 0) ? true : false;
}
void ZadParzysta::Uruchom()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Bitowo: "
         << (CzyParzystaBitowo(liczba)
             ? "Parzysta"
             : "Nieparzysta")
         << endl;
    cout << "Modulo: "
         << (CzyParzystaModulo(liczba)
             ? "Parzysta"
             : "Nieparzysta")
         << endl;
    cout << "Warunkowy: "
         << (CzyParzystaWarunkowy(liczba)
             ? "Parzysta"
             : "Nieparzysta")
         << endl;
}