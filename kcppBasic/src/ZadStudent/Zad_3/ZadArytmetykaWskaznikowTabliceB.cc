#include <iostream>

using namespace std;
int main()
{
    double tab1[5];
    double tab2[5];
    double tab3[5];
    cout << "Podaj 5 liczb:" << endl;
    for(double* p = tab1;
        p < tab1 + 5;
        p++)
    {
        cin >> *p;
    }
    double* p1 = tab1;
    double* p2 = tab2;
    while(p1 < tab1 + 5)
    {
        *p2 = (*p1) * 2;
        p1++;
        p2++;
    }
    p1 = tab1;
    p2 = tab2;
    double* p3 = tab3;
    while(p1 < tab1 + 5)
    {
        *p3 = *p1 + *p2;
        p1++;
        p2++;
        p3++;
    }
    cout << endl;
    cout << "Tablica 1: ";
    for(double* p = tab1;
        p < tab1 + 5;
        p++)
    {
        cout << *p << " ";
    }
    cout << endl;
    cout << "Tablica 2: ";
    for(double* p = tab2;
        p < tab2 + 5;
        p++)
    {
        cout << *p << " ";
    }
    cout << endl;
    cout << "Tablica 3: ";
    for(double* p = tab3;
        p < tab3 + 5;
        p++)
    {
        cout << *p << " ";
    }
    cout << endl;
    return 0;
}