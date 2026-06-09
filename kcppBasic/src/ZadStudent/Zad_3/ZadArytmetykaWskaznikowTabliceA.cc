#include <iostream>

using namespace std;
int main()
{
    int tablica[10];
    for(int i = 0; i < 10; i++)
    {
        tablica[i] = i + 1;
    }
    int suma = 0;
    for(int* p = tablica;
        p < tablica + 10;
        p++)
    {
        suma += *p;
    }
    cout << "Suma elementow: "
         << suma
         << endl;
    int* max = tablica;
    for(int* p = tablica + 1;
        p < tablica + 10;
        p++)
    {
        if(*p > *max)
        {
            max = p;
        }
    }
    cout << "Najwiekszy element: "
         << *max
         << endl;
    int* lewy = tablica;
    int* prawy = tablica + 9;
    while(lewy < prawy)
    {
        int temp = *lewy;
        *lewy = *prawy;
        *prawy = temp;
        lewy++;
        prawy--;
    }
    cout << "Tablica odwrocona: ";
    for(int* p = tablica;
        p < tablica + 10;
        p++)
    {
        cout << *p << " ";
    }
    cout << endl;
    return 0;
}
