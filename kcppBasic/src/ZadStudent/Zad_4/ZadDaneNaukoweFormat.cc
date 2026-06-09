#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double pi = 3.141592653589793;
    double e = 2.718281828459045;
    double zlotyPodzial = 1.618033988749895;
    cout << left
         << setw(15) << "Stala"
         << setw(20) << "Domyslnie"
         << setw(20) << "Fixed"
         << setw(20) << "Scientific"
         << endl;
    cout << "--------------------------------------------------------------------------"
         << endl;
    cout << left
         << setw(15) << "Pi"
         << setw(20) << pi
         << setw(20) << fixed << setprecision(6) << pi
         << setw(20) << scientific << setprecision(6) << pi
         << endl;
    cout << defaultfloat;
    cout << left
         << setw(15) << "e"
         << setw(20) << e
         << setw(20) << fixed << setprecision(6) << e
         << setw(20) << scientific << setprecision(6) << e
         << endl;
    cout << defaultfloat;
    cout << left
         << setw(15) << "Zloty podzial"
         << setw(20) << zlotyPodzial
         << setw(20) << fixed << setprecision(6) << zlotyPodzial
         << setw(20) << scientific << setprecision(6) << zlotyPodzial
         << endl;
    return 0;
}