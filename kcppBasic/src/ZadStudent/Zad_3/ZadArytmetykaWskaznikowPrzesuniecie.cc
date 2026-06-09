#include <iostream>
using namespace std;
void przesun(int* tablica, int rozmiar)
{
    int ostatni = *(tablica + rozmiar - 1);
    for(int i = rozmiar - 1; i > 0; i--)
    {
        *(tablica + i) = *(tablica + i - 1);
    }
    *tablica = ostatni;
}
int main()
{
    int liczby[] = {1, 2, 3, 4, 5};
    int rozmiar =
        sizeof(liczby) / sizeof(liczby[0]);
    cout << "Przed przesunieciem: ";
    for(int i = 0; i < rozmiar; i++)
    {
        cout << liczby[i] << " ";
    }
    cout << endl;
    przesun(liczby, rozmiar);
    cout << "Po przesunieciu: ";
    for(int i = 0; i < rozmiar; i++)
    {
        cout << liczby[i] << " ";
    }
    cout << endl;
    return 0;
}