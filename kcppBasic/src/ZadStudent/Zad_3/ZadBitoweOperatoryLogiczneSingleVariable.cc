#include <iostream>

using namespace std;
unsigned char tablicaNaLiczbe(const int tab[8])
{
    unsigned char liczba = 0;
    for(int i = 0; i < 8; i++)
    {
        if(tab[i] == 1)
        {
            liczba |= (1 << (7 - i));
        }
    }
    return liczba;
}
void printBinary(unsigned char val)
{
    for(int i = 7; i >= 0; i--)
    {
        cout << ((val & (1 << i)) ? '1' : '0');
    }
}
int main()
{
    int tab[8] = {1, 0, 1, 0, 0, 0, 0, 1};
    unsigned char wynik = tablicaNaLiczbe(tab);
    cout << "Binarnie: ";
    printBinary(wynik);
    cout << endl;
    cout << "Dziesietnie: "
         << static_cast<int>(wynik)
         << endl;
    return 0;
}