#include <iostream>

using namespace std;
bool CzyParzystaBitowo(int liczba)
{
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
    int wybor;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << endl;
    cout << "1 - Metoda bitowa" << endl;
    cout << "2 - Metoda modulo" << endl;
    cout << "3 - Operator warunkowy" << endl;
    cout << "Wybor: ";
    cin >> wybor;
    switch(wybor)
    {
    case 1:
        cout << (CzyParzystaBitowo(liczba)
                 ? "Parzysta"
                 : "Nieparzysta")
             << endl;
        break;
    case 2:
        cout << (CzyParzystaModulo(liczba)
                 ? "Parzysta"
                 : "Nieparzysta")
             << endl;
        break;
    case 3:
        cout << (CzyParzystaWarunkowy(liczba)
                 ? "Parzysta"
                 : "Nieparzysta")
             << endl;
        break;
    default:
        cout << "Nieprawidlowy wybor!"
             << endl;
    }
    return 0;
}