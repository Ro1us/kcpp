#include <iomanip>
#include <iostream>

using namespace std;
int main()
{
    double a = 10.0 / 3.0;
    double b = 22.0 / 7.0;
    double c = (a + b) / 2.0;
    cout << setfill('=')
         << setw(50)
         << ""
         << endl;
    cout << setfill(' ');
    cout << "Wynik naszego dzialania: "
         << fixed
         << setprecision(5)
         << a
         << " jest niepoprawny ale:"
         << endl;
    cout << right;
    cout << setw(12) << "output:"
         << setw(10) << fixed << setprecision(3) << a
         << setw(8) << "T:"
         << setw(8) << fixed << setprecision(3) << b
         << endl;
    cout << setw(12) << "output1:"
         << setw(10) << fixed << setprecision(4) << a
         << setw(8) << "T:"
         << setw(8) << fixed << setprecision(5) << b
         << endl;
    cout << setw(12) << "output2:"
         << setw(10) << fixed << setprecision(4) << b
         << setw(8) << "T:"
         << setw(8) << fixed << setprecision(6) << c
         << endl;
    cout << setw(33)
         << setfill('-')
         << ""
         << endl;
    cout << setfill(' ');
    cout << setw(12) << "average:"
         << setw(10) << fixed << setprecision(4) << c
         << setw(8) << "T:"
         << setw(8) << fixed << setprecision(6) << c
         << endl;
    cout << setfill('=')
         << setw(50)
         << ""
         << endl;
    cout << endl;
    cout << "DEC: "
         << dec
         << 255
         << endl;
    cout << "HEX: "
         << hex
         << 255
         << endl;
    cout << "SCIENTIFIC: "
         << scientific
         << 12345.6789
         << endl;
    return 0;
}