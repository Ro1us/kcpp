#include <iostream>

using namespace std;
class Osoba
{
public:
    string imie;
    Osoba(string i);
    void wyswietl();
    inline void przywitaj()
    {
        cout << "Witaj " << imie << endl;
    }
    void zmienDane(int wiek, string adres);
protected:
    string adres;
private:
    int wiek;
};
Osoba::Osoba(string i)
{
    imie = i;
    wiek = 0;
    adres = "Nieznany";
}
void Osoba::wyswietl()
{
    cout << "Imie: " << imie << endl;
    cout << "Wiek: " << wiek << endl;
    cout << "Adres: " << adres << endl;
}
void Osoba::zmienDane(int nowyWiek, string nowyAdres)
{
    wiek = nowyWiek;
    adres = nowyAdres;
}
int main()
{
    Osoba osoba("Jan");
    osoba.przywitaj();
    osoba.zmienDane(20, "Krakow");
    osoba.wyswietl();
    return 0;
}