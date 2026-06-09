#include <iostream>

using namespace std;
int main()
{
    int tablica[10] = {0,1,2,3,4,5,6,7,8,9};
    int* wsk1 = &tablica[2];
    int* wsk2 = &tablica[7];
    cout << "Roznica wskaznikow: "
         << wsk2 - wsk1
         << endl;
    return 0;
}