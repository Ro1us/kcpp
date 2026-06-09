#include <iostream>

using namespace std;
/*
    Kierunek adresowania pamięci:
    Zmienne lokalne są zwykle przechowywane na stosie.
    W większości współczesnych systemów kolejne zmienne lokalne
    otrzymują adresy malejace.
    Czyli zmienna zadeklarowana później może mieć
    mniejszy adres niż zmienna zadeklarowana wcześniej.
*/

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    cout << "Wartosci zmiennych:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << endl;
    cout << "Adres zmiennej a: " << &a << endl;
    cout << "Adres zmiennej b: " << &b << endl;
    cout << "Adres zmiennej c: " << &c << endl;
    return 0;
}