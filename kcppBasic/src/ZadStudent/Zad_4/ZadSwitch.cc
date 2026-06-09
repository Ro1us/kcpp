#include <iostream>
#include <string>

using namespace std;
int main()
{
    string slowo;
    cout << "Podaj slowo: ";
    cin >> slowo;
    int wybor = 0;
    if(slowo == "start")
    {
        wybor = 1;
    }
    else if(slowo == "stop")
    {
        wybor = 2;
    }
    else if(slowo == "pomoc")
    {
        wybor = 3;
    }
    switch(wybor)
    {
    case 1:
        cout << "Uruchamianie programu..."
             << endl;
        break;
    case 2:
        cout << "Zatrzymywanie programu..."
             << endl;
        break;
    case 3:
        cout << "Pomoc uzytkownika..."
             << endl;
        break;
    default:
        cout << "Nieznane polecenie!"
             << endl;
    }
    return 0;
}