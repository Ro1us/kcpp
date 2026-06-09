#include <iostream>

using namespace std;
void kopiujTablice(int* zrodlo,
                   int* cel,
                   int rozmiar)
{
    for(int i = 0; i < rozmiar; i++)
    {
        *(cel + i) = *(zrodlo + i);
    }
}
int main()
{
    int tablica1[] = {10, 20, 30, 40, 50};
    int rozmiar =
        sizeof(tablica1) / sizeof(tablica1[0]);
    int tablica2[5];
    kopiujTablice(
        tablica1,
        tablica2,
        rozmiar);
    cout << "Tablica zrodlowa: ";
    for(int i = 0; i < rozmiar; i++)
    {
        cout << tablica1[i] << " ";
    }
    cout << endl;
    cout << "Tablica skopiowana: ";
    for(int i = 0; i < rozmiar; i++)
    {
        cout << tablica2[i] << " ";
    }
    cout << endl;
    return 0;
}