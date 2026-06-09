#include <iostream>
using namespace std;
int zwrocWartosc() {
    return 10;
}
int& zwrocReferencje() {
    static int liczba = 20;
    return liczba;
}
int* zwrocWskaznik() {
    static int liczba = 30;
    return &liczba;
}
int* zwrocTablice() {
    static int tablica[3] = {1, 2, 3};
    return tablica;
}
int main() {
    cout << "Wartosc: "
         << zwrocWartosc()
         << endl;
    cout << "Referencja: "
         << zwrocReferencje()
         << endl;
    cout << "Wskaznik: "
         << *zwrocWskaznik()
         << endl;
    int* tab = zwrocTablice();
    cout << "Tablica: ";
    for(int i = 0; i < 3; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
    return 0;
}