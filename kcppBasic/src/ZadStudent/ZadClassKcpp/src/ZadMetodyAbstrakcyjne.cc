#include "../include/ZadMetodyAbstrakcyjne.h"

#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.141592653589793;
class Figura
{
public:
    virtual double Pole() = 0;
    virtual double Obwod() = 0;

    virtual ~Figura() {}
};
class Kwadrat : public Figura
{
private:
    double bok;
public:
    Kwadrat(double b)
    {
        bok = b;
    }
    double Pole() override
    {
        return bok * bok;
    }
    double Obwod() override
    {
        return 4 * bok;
    }
};
class Prostokat : public Figura
{
private:
    double a;
    double b;
public:
    Prostokat(double bokA, double bokB)
    {
        a = bokA;
        b = bokB;
    }
    double Pole() override
    {
        return a * b;
    }
    double Obwod() override
    {
        return 2 * (a + b);
    }
};
class Trojkat : public Figura
{
private:
    double a;
    double h;
public:
    Trojkat(double bok, double wysokosc)
    {
        a = bok;
        h = wysokosc;
    }
    double Pole() override
    {
        return (a * h) / 2.0;
    }
    double Obwod() override
    {
        return 3 * a;
    }
};
class Kolo : public Figura
{
private:
    double r;
public:
    Kolo(double promien)
    {
        r = promien;
    }
    double Pole() override
    {
        return PI * r * r;
    }
    double Obwod() override
    {
        return 2 * PI * r;
    }
    double Dystans(double metryNaOsobe)
    {
        double pole = metryNaOsobe;
        return sqrt(pole / PI);
    }
};
void ZadMetodyAbstrakcyjne::Uruchom()
{
    Kwadrat kwadrat(5);
    Prostokat prostokat(4, 6);
    Trojkat trojkat(6, 4);
    Kolo kolo(3);
    cout << "KWADRAT" << endl;
    cout << "Pole: " << kwadrat.Pole() << endl;
    cout << "Obwod: " << kwadrat.Obwod() << endl;
    cout << endl;
    cout << "PROSTOKAT" << endl;
    cout << "Pole: " << prostokat.Pole() << endl;
    cout << "Obwod: " << prostokat.Obwod() << endl;
    cout << endl;
    cout << "TROJKAT" << endl;
    cout << "Pole: " << trojkat.Pole() << endl;
    cout << "Obwod: " << trojkat.Obwod() << endl;
    cout << endl;
    cout << "KOLO" << endl;
    cout << "Pole: " << kolo.Pole() << endl;
    cout << "Obwod: " << kolo.Obwod() << endl;
    cout << "Minimalny promien dla 10 m2 na osobe: "
         << kolo.Dystans(10)
         << endl;
}