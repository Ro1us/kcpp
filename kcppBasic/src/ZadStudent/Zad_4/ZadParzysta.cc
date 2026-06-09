#include <iostream>

using namespace std;
bool CzyParzystaBitowo(int liczba)
{
    /*
        Przykład:

        6 = 110
        1 = 001

        110 & 001 = 000

        wynik 0 -> liczba parzysta

        7 = 111

        111 & 001 = 001

        wynik 1 -> liczba nieparzysta
    */
    return (liczba & 1) == 0;
}
bool CzyParzystaModulo(int liczba)
{
    return liczba % 2 == 0;
}
bool CzyParzystaWarunkowy(int liczba)
{
    return (liczba % 2 == 0) ? true : false;
}
int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Bitowo: "
         << (CzyParzystaBitowo(liczba)
             ? "Parzysta"
             : "Nieparzysta")
         << endl;
    cout << "Modulo: "
         << (CzyParzystaModulo(liczba)
             ? "Parzysta"
             : "Nieparzysta")
         << endl;
    cout << "Warunkowy: "
         << (CzyParzystaWarunkowy(liczba)
             ? "Parzysta"
             : "Nieparzysta")
         << endl;
    return 0;
}