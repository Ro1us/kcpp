#include <iostream>

using namespace std;
void Funkcja1()
{
    cout << "===== Funkcja1 =====" << endl;
    int tab[] = {10, 20, 30, 40, 50};
    int* p = tab;
    cout << "Start:      " << *p << endl;
    p++;
    cout << "p++      -> " << *p << endl;
    ++p;
    cout << "++p      -> " << *p << endl;
    ++*p;
    cout << "++*p     -> " << *p << endl;
    ++(*p);
    cout << "++(*p)   -> " << *p << endl;
    ++*(p);
    cout << "++*(p)   -> " << *p << endl;
    p = tab;
    *p++;
    cout << "*p++     -> " << *p << endl;
    p = tab;
    (*p)++;
    cout << "(*p)++   -> " << *p << endl;
    p = tab;
    *(p)++;
    cout << "*(p)++   -> " << *p << endl;
    p = tab;
    cout << "*++p     -> " << *++p << endl;
    p = tab;
    cout << "*(++p)   -> " << *(++p) << endl;
    cout << endl;
}
void Funkcja2()
{
    cout << "===== Funkcja2 =====" << endl;
    int a = 0;
    int b = 0;
    int c = 0;
    int* wsk_int;
    cout << "1.  A, B, C: "
         << a << "  "
         << b << "  "
         << c << endl;
    b = 10;
    cout << "2.  A, B, C: "
         << a << "  "
         << b << "  "
         << c << endl;
    wsk_int = &b;
    *wsk_int = 20;
    cout << "3.  A, B, C: "
         << a << "  "
         << b << "  "
         << c << endl;
    wsk_int = &a;
    *(wsk_int + 1) = 30;
    cout << "4.  A, B, C: "
         << a << "  "
         << b << "  "
         << c << endl;
    *(&a + 1) = 40;
    cout << "5.  A, B, C: "
         << a << "  "
         << b << "  "
         << c << endl;
    *(&c - 1) = 50;
    cout << "6.  A, B, C: "
         << a << "  "
         << b << "  "
         << c << endl;
    c = 60;
    cout << "7.  A, B, C: "
         << a << "  "
         << b << "  "
         << c << endl;
    b = 70;
    cout << "8.  A, B, C: "
         << a << "  "
         << b << "  "
         << c << endl;
    a = 80;
    cout << "9.  A, B, C: "
         << a << "  "
         << b << "  "
         << c << endl;
    b = 90;
    cout << "10. A, B, C: "
         << a << "  "
         << b << "  "
         << c << endl;

    cout << endl;
}
int main()
{
    Funkcja1();
    Funkcja2();
    return 0;
}