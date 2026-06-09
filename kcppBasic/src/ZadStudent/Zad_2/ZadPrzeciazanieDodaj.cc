#include <iostream>
#include <string>
using namespace std;
int dodaj(int a, int b) {
    return a + b;
}
double dodaj(double a, double b) {
    return a + b;
}
string dodaj(string a, string b) {
    return a + b;
}
int main() {
    cout << "Int: "
         << dodaj(3, 5)
         << endl;
    cout << "Double: "
         << dodaj(3.5, 2.3)
         << endl;
    cout << "String: "
         << dodaj("Hello ", "World")
         << endl;
    return 0;
}