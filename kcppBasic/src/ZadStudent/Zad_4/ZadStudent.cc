#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct Student
{
    string imie;
    string nazwisko;
    int indeks;
};
int main()
{
    vector<Student> listaStudentow;
    int wybor;
    do
    {
        cout << "\nMenu:" << endl;
        cout << "1. Dodaj studenta" << endl;
        cout << "2. Usun studenta" << endl;
        cout << "3. Wyswietl liste" << endl;
        cout << "4. Sortuj liste" << endl;
        cout << "5. Sprawdz studenta" << endl;
        cout << "0. Wyjdz" << endl;
        cout << "Wybor: ";
        cin >> wybor;
        cin.ignore();
        switch(wybor)
        {
            case 1:
            {
                Student nowy;
                cout << "Imie: ";
                getline(cin, nowy.imie);
                if(nowy.imie.empty())
                {
                    cout << "Imie nie moze byc puste!"
                         << endl;
                    break;
                }
                cout << "Nazwisko: ";
                getline(cin, nowy.nazwisko);
                cout << "Numer indeksu: ";
                cin >> nowy.indeks;
                cin.ignore();
                bool istnieje = false;
                for(const auto& s : listaStudentow)
                {
                    if(s.indeks == nowy.indeks)
                    {
                        istnieje = true;
                        break;
                    }
                }
                if(istnieje)
                {
                    cout << "Numer indeksu juz istnieje!"
                         << endl;
                }
                else
                {
                    listaStudentow.push_back(nowy);
                    cout << "Dodano studenta."
                         << endl;
                }
                break;
            }
            case 2:
            {
                int indeks;
                cout << "Podaj numer indeksu: ";
                cin >> indeks;
                cin.ignore();
                auto it =
                    find_if(listaStudentow.begin(),
                            listaStudentow.end(),
                            [indeks](const Student& s)
                            {
                                return s.indeks == indeks;
                            });
                if(it != listaStudentow.end())
                {
                    listaStudentow.erase(it);
                    cout << "Usunieto studenta."
                         << endl;
                }
                else
                {
                    cout << "Nie znaleziono studenta."
                         << endl;
                }
                break;
            }
            case 3:
            {
                if(listaStudentow.empty())
                {
                    cout << "Lista jest pusta."
                         << endl;
                }
                else
                {
                    for(const auto& s : listaStudentow)
                    {
                        cout << s.imie
                             << " "
                             << s.nazwisko
                             << " ("
                             << s.indeks
                             << ")"
                             << endl;
                    }
                }
                break;
            }
            case 4:
            {
                sort(listaStudentow.begin(),
                     listaStudentow.end(),
                     [](const Student& a,
                        const Student& b)
                     {
                         return a.nazwisko < b.nazwisko;
                     });
                cout << "Posortowano liste."
                     << endl;
                break;
            }
            case 5:
            {
                int indeks;
                cout << "Podaj numer indeksu: ";
                cin >> indeks;
                cin.ignore();
                bool znaleziony = false;
                for(const auto& s : listaStudentow)
                {
                    if(s.indeks == indeks)
                    {
                        cout << s.imie
                             << " "
                             << s.nazwisko
                             << endl;
                        znaleziony = true;
                    }
                }
                if(!znaleziony)
                {
                    cout << "Nie znaleziono studenta."
                         << endl;
                }
                break;
            }
            case 0:
            {
                cout << "Koniec programu."
                     << endl;
                break;
            }
            default:
            {
                cout << "Nieprawidlowy wybor!"
                     << endl;
            }
        }
    } while(wybor != 0);
    return 0;
}