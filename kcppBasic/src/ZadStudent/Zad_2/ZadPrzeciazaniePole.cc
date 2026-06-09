#include <iostream>
using namespace std;
const double PI = 3.141592653589793;
double pole(double bok) {
    return bok * bok;
}
double pole(double bok1, double bok2) {
    return bok1 * bok2;
}
double pole(double promien, char typ) {
    return PI * promien * promien;
}
int main() {
    cout << "Pole kwadratu: "
         << pole(5.0)
         << endl;
    cout << "Pole prostokata: "
         << pole(5.0, 10.0)
         << endl;
    cout << "Pole kola: "
         << pole(3.0, 'k')
         << endl;
    return 0;
}
