#include <iostream>

using namespace std;
void zamien(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 10;
    int y = 20;
    cout << "Przed zamiana:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    zamien(&x, &y);
    cout << endl;
    cout << "Po zamianie:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}