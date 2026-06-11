#include "../include/ZadSuma.h"

#include <iostream>
using namespace std;
int ZadSuma::suma(int* tablica, int rozmiar)
{
    int wynik = 0;
    for(int i = 0; i < rozmiar; i++)
    {
        wynik += *(tablica + i);
    }
    return wynik;
}
void ZadSuma::Uruchom()
{
    int liczby[] = {1, 2, 3, 4, 5};
    int rozmiar =
        sizeof(liczby) / sizeof(liczby[0]);
    cout << "Suma elementow: "
         << suma(liczby, rozmiar)
         << endl;
}