#include "../include/ZadMax.h"

#include <iostream>
using namespace std;
int* ZadMax::maxElement(int* tablica, int rozmiar)
{
    int* max = tablica;
    for(int i = 1; i < rozmiar; i++)
    {
        if(*(tablica + i) > *max)
        {
            max = tablica + i;
        }
    }
    return max;
}
void ZadMax::Uruchom()
{
    int liczby[] = {12, 7, 25, 3, 18};
    int rozmiar =
        sizeof(liczby) / sizeof(liczby[0]);
    int* najwiekszy =
        maxElement(liczby, rozmiar);
    cout << "Najwiekszy element: "
         << *najwiekszy
         << endl;
}