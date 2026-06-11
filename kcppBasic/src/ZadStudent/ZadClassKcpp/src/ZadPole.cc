#include "../include/ZadPole.h"

#include <iostream>
using namespace std;
const double PI = 3.141592653589793;
double ZadPole::pole(double bok)
{
    return bok * bok;
}
double ZadPole::pole(double bok1, double bok2)
{
    return bok1 * bok2;
}
double ZadPole::pole(double promien, char typ)
{
    return PI * promien * promien;
}
void ZadPole::Uruchom()
{
    cout << "Pole kwadratu: "
         << pole(5.0)
         << endl;
    cout << "Pole prostokata: "
         << pole(5.0, 10.0)
         << endl;
    cout << "Pole kola: "
         << pole(3.0, 'k')
         << endl;
}