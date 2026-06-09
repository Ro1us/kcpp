#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(time(0));
    int poziom;
    int zakres;
    cout << "Wybierz poziom trudnosci:" << endl;
    cout << "1 - Latwy (1-50)" << endl;
    cout << "2 - Trudny (1-200)" << endl;
    cout << "Wybor: ";
    cin >> poziom;
    if(poziom == 1)
    {
        zakres = 50;
    }
    else
    {
        zakres = 200;
    }
    int wylosowana = rand() % zakres + 1;
    int proba;
    int licznik = 0;
    const int MAX_PROB = 10;
    cout << endl;
    cout << "Zgadnij liczbe (1-" << zakres << ")" << endl;
    while(licznik < MAX_PROB)
    {
        cin >> proba;
        licznik++;
        if(proba < wylosowana)
        {
            cout << "Za malo! Probuj dalej." << endl;
        }
        else if(proba > wylosowana)
        {
            cout << "Za duzo! Probuj dalej." << endl;
        }
        else
        {
            cout << "Brawo! Zgadles w "
                 << licznik
                 << " probach."
                 << endl;
            return 0;
        }
        cout << "Pozostalo prob: "
             << MAX_PROB - licznik
             << endl;
    }
    cout << endl;
    cout << "Przegrales!" << endl;
    cout << "Prawidlowa liczba to: "
         << wylosowana
         << endl;
    return 0;
}