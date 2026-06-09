#include <iostream>

using namespace std;
void OperatoryArytmetyczne()
{
    cout << "===== Operatory Arytmetyczne =====" << endl;
    int a = 10;
    int b = 5;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << endl;
}
void OperatoryPrzypisania()
{
    cout << "===== Operatory Przypisania =====" << endl;
    int x = 10;
    cout << "x = " << x << endl;
    x += 5;
    cout << "x += 5 -> " << x << endl;
    x -= 3;
    cout << "x -= 3 -> " << x << endl;
    x *= 2;
    cout << "x *= 2 -> " << x << endl;
    x /= 4;
    cout << "x /= 4 -> " << x << endl;
    x %= 3;
    cout << "x %= 3 -> " << x << endl;
    cout << endl;
}
int main()
{
    OperatoryArytmetyczne();
    OperatoryPrzypisania();
    return 0;
}