#include <iostream>

#include "include/ZadString.h"
#include "include/ZadPole.h"
#include "include/ZadDodaj.h"
#include "include/ZadPlus.h"
#include "include/ZadSuma.h"
#include "include/ZadMax.h"
#include "include/ZadParzysta.h"
#include "include/ZadClass.h"
#include "include/ZadKonstruktor.h"
#include "include/ZadMetodyAbstrakcyjne.h"
using namespace std;
int main()
{
    int wybor;
    do
    {
        cout << endl;
        cout << "==========================================" << endl;
        cout << "      ZadClassKcpp - MENU GLOWNE" << endl;
        cout << "==========================================" << endl;

        cout << "\n--- SEKCJA 1: Podstawy C++ ---" << endl;
        cout << "1.  [1.3] Operacje na stringach" << endl;
        cout << "\n--- SEKCJA 2: Przeciazanie ---" << endl;
        cout << "2.  [2.2] Obliczanie pola figur" << endl;
        cout << "3.  [2.3] Przeciazanie funkcji dodaj()" << endl;
        cout << "4.  [2.4] Przeciazanie operatora +" << endl;
        cout << "\n--- SEKCJA 3: Arytmetyka wskaznikow ---" << endl;
        cout << "5.  [3.2] Sumowanie elementow tablicy" << endl;
        cout << "6.  [3.3] Wyszukiwanie maksimum w tablicy" << endl;
        cout << "\n--- SEKCJA 4: Operacje wejscia/wyjscia ---" << endl;
        cout << "7.  [4.7] Sprawdzanie liczby parzystej" << endl;
        cout << "\n--- SEKCJA 5: Klasy i OOP ---" << endl;
        cout << "8.  [5.1] Klasa, sekcje dostepu, inline" << endl;
        cout << "9.  [5.4] Konstruktory i destruktory" << endl;
        cout << "10. [5.6] Klasy abstrakcyjne i dziedziczenie" << endl;
        cout << "\n0.  Wyjscie z programu" << endl;
        cout << "------------------------------------------" << endl;
        cout << "Wybor: ";
        cin >> wybor;
        switch(wybor)
        {
        case 1:
            {
                ZadString zad;
                zad.Uruchom();
                break;
            }
        case 2:
            {
                ZadPole zad;
                zad.Uruchom();
                break;
            }
        case 3:
            {
                ZadDodaj zad;
                zad.Uruchom();
                break;
            }
        case 4:
            {
                ZadPlus zad;
                zad.Uruchom();
                break;
            }
        case 5:
            {
                ZadSuma zad;
                zad.Uruchom();
                break;
            }
        case 6:
            {
                ZadMax zad;
                zad.Uruchom();
                break;
            }
        case 7:
            {
                ZadParzysta zad;
                zad.Uruchom();
                break;
            }

        case 8:
            {
                ZadClass zad;
                zad.Uruchom();
                break;
            }
        case 9:
            {
                ZadKonstruktor zad;
                zad.Uruchom();
                break;
            }
        case 10:
            {
                ZadMetodyAbstrakcyjne zad;
                zad.Uruchom();
                break;
            }
        case 0:
            {
                cout << "Koniec programu." << endl;
                break;
            }
        default:
            {
                cout << "Nieprawidlowy wybor!" << endl;
                break;
            }
        }
    } while (wybor != 0);
    return 0;
}