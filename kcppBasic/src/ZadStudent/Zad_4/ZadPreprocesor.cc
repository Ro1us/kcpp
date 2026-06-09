#include <iostream>

using namespace std;
#define KWADRAT(x) ((x) * (x))
#define NAPIS(x) #x
#define POLACZ(a,b) a##b
#define DEBUG
int main()
{
    cout << "===== Makro =====" << endl;
    int a = 5;
    cout << "KWADRAT(5) = "
         << KWADRAT(a)
         << endl;
    cout << endl;
    cout << "===== Bez makra =====" << endl;
    cout << "5 * 5 = "
         << (a * a)
         << endl;
    cout << endl;
    cout << "===== Operator # =====" << endl;
    cout << NAPIS(To jest tekst)
         << endl;
    cout << endl;
    cout << "===== Operator ## =====" << endl;
    int POLACZ(zmienna,1) = 100;
    cout << zmienna1
         << endl;
    cout << endl;
#ifdef DEBUG
    cout << "DEBUG jest zdefiniowane"
         << endl;
#else
    cout << "DEBUG nie jest zdefiniowane"
         << endl;
#endif
    cout << endl;
#ifndef RELEASE
    cout << "RELEASE nie jest zdefiniowane"
         << endl;
#else
    cout << "RELEASE jest zdefiniowane"
         << endl;
#endif
    return 0;
}