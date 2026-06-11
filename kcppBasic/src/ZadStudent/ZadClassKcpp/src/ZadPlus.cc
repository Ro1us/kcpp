#include "../include/ZadPlus.h"

#include <iostream>
using namespace std;
class Punkt
{
public:
    int x;
    int y;
    Punkt(int px, int py)
        : x(px), y(py)
    {
    }
    Punkt operator+(const Punkt& other)
    {
        return Punkt(
            x + other.x,
            y + other.y
        );
    }
    void wyswietl()
    {
        cout << "("
             << x
             << ", "
             << y
             << ")"
             << endl;
    }
};
void ZadPlus::Uruchom()
{
    Punkt p1(2, 3);
    Punkt p2(4, 5);
    Punkt p3 = p1 + p2;
    cout << "Punkt 1: ";
    p1.wyswietl();
    cout << "Punkt 2: ";
    p2.wyswietl();
    cout << "Suma punktow: ";
    p3.wyswietl();
}