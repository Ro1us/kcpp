#include <iostream>

using namespace std;
int main()
{
    int rozmiar;
    cout << "Podaj rozmiar: ";
    cin >> rozmiar;
    cout << "\nKwadrat:" << endl;
    for(int i = 0; i < rozmiar; i++)
    {
        for(int j = 0; j < rozmiar; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "\nTrojkat rownoramienny:" << endl;
    for(int i = 1; i <= rozmiar; i++)
    {
        for(int spacje = 1; spacje <= rozmiar - i; spacje++)
        {
            cout << " ";
        }
        for(int gwiazdki = 1; gwiazdki <= 2 * i - 1; gwiazdki++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\nPiramida liczb:" << endl;
    for(int i = 1; i <= rozmiar; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}