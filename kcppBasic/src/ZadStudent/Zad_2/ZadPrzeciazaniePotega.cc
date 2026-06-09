#include <iostream>
#include <cmath>
using namespace std;
int potega(int x, int y) {
    return pow(x, y);
}
double potega(double x, double y) {
    return pow(x, y);
}
int main() {
    cout << "Potega int: "
         << potega(2, 3)
         << endl;

    cout << "Potega double: "
         << potega(2.5, 3.0)
         << endl;
    return 0;
}