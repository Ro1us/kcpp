#include "../include/ZadDodaj.h"

#include <iostream>
#include <string>
using namespace std;
int ZadDodaj::dodaj(int a, int b)
{
    return a + b;
}
double ZadDodaj::dodaj(double a, double b)
{
    return a + b;
}
string ZadDodaj::dodaj(string a, string b)
{
    return a + b;
}
void ZadDodaj::Uruchom()
{
    cout << "Int: "
         << dodaj(3, 5)
         << endl;
    cout << "Double: "
         << dodaj(3.5, 2.3)
         << endl;
    cout << "String: "
         << dodaj("Hello ", "World")
         << endl;
}