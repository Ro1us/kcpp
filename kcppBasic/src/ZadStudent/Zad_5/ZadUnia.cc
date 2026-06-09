#include <iostream>

using namespace std;
union Dane
{
    int liczba;
    float zmiennaFloat;
    char znak;
};
int main()
{
    Dane d;
    d.liczba = 123;
    cout << "Po zapisaniu int:" << endl;
    cout << "liczba = "
         << d.liczba
         << endl;
    cout << endl;
    d.zmiennaFloat = 3.14f;
    cout << "Po zapisaniu float:" << endl;
    cout << "zmiennaFloat = "
         << d.zmiennaFloat
         << endl;
    cout << "liczba = "
         << d.liczba
         << endl;
    cout << endl;
    d.znak = 'A';
    cout << "Po zapisaniu char:" << endl;
    cout << "znak = "
         << d.znak
         << endl;
    cout << "liczba = "
         << d.liczba
         << endl;
    cout << "zmiennaFloat = "
         << d.zmiennaFloat
         << endl;
    return 0;
}