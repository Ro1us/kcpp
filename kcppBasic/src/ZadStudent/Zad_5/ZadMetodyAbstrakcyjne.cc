#include <cmath>
#include <iostream>

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
    double Dystans(double metryKwadratoweNaOsobe)
    {
        return sqrt(metryKwadratoweNaOsobe / PI);
    }
};
int main()
{
    Figura* kwadrat = new Kwadrat(5);
    Figura* prostokat = new Prostokat(4, 6);
    Figura* trojkat = new Trojkat(4, 3);
    Kolo kolo(3);
    cout << "Kwadrat:" << endl;
    cout << "Pole: " << kwadrat->Pole() << endl;
    cout << "Obwod: " << kwadrat->Obwod() << endl;
    cout << endl;
    cout << "Prostokat:" << endl;
    cout << "Pole: " << prostokat->Pole() << endl;
    cout << "Obwod: " << prostokat->Obwod() << endl;
    cout << endl;
    cout << "Trojkat:" << endl;
    cout << "Pole: " << trojkat->Pole() << endl;
    cout << "Obwod: " << trojkat->Obwod() << endl;
    cout << endl;
    cout << "Kolo:" << endl;
    cout << "Pole: " << kolo.Pole() << endl;
    cout << "Obwod: " << kolo.Obwod() << endl;
    cout << "Dystans dla 4 m^2 na osobe: "
         << kolo.Dystans(4)
         << endl;
    delete kwadrat;
    delete prostokat;
    delete trojkat;
    return 0;
}