#include <iostream>

using namespace std;
int main()
{
    int tab[3][3] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Adresy elementow tablicy:" << endl;
    cout << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "tab[" << i << "]["
                 << j << "] = "
                 << &tab[i][j]
                 << endl;
        }
    }
    return 0;
}