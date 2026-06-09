#include <iostream>
using namespace std;
void kopiujTablice(
        int zrodlo[],
        int kopia[],
        int rozmiar) {
    for(int i = 0; i < rozmiar; i++) {
        kopia[i] = zrodlo[i];
    }
}
int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar =
        sizeof(tablica) / sizeof(tablica[0]);
    int kopia[5];
    kopiujTablice(
        tablica,
        kopia,
        rozmiar);
    cout << "Kopia tablicy: ";
    for(int i = 0; i < rozmiar; i++) {
        cout << kopia[i] << " ";
    }
    cout << endl;
    return 0;
}
