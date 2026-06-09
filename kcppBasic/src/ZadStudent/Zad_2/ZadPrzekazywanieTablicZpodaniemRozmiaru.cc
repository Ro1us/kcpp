#include <iostream>
using namespace std;
void wyswietlTablice(int tab[], int rozmiar) {
    for(int i = 0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}
int main() {
    int tablica[] = {10, 20, 30, 40, 50};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    wyswietlTablice(tablica, rozmiar);
    return 0;
}