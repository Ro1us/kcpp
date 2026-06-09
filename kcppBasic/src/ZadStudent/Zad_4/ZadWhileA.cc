#include <iostream>

using namespace std;
int main()
{
    int liczba;
    int suma = 0;
    int licznik = 0;
    cout << "Wprowadzaj liczby dodatnie (0 konczy program):" << endl;
    cin >> liczba;
    while(liczba != 0)
    {
        if(liczba > 0)
        {
            suma += liczba;
            licznik++;
        }
        else
        {
            cout << "Podana liczba nie jest dodatnia!"
                 << endl;
        }
        cin >> liczba;
    }
    cout << endl;
    cout << "Suma wprowadzonych liczb: "
         << suma
         << endl;
    cout << "Liczba poprawnych wartosci: "
         << licznik
         << endl;
    return 0;
}