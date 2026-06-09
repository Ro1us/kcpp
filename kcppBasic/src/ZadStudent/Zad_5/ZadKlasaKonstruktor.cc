#include <iostream>

using namespace std;
class Samochod
{
private:
    string marka;
    int rok;
public:
    Samochod()
    {
        marka = "Brak";
        rok = 0;
        cout << "Konstruktor domyslny" << endl;
    }
    Samochod(string m, int r)
        : marka(m), rok(r)
    {
        cout << "Konstruktor z argumentami" << endl;
    }
    ~Samochod()
    {
        cout << "Destruktor" << endl;
    }
    void wyswietl()
    {
        cout << "Marka: "
             << marka
             << endl;
        cout << "Rok: "
             << rok
             << endl;
    }
};
int main()
{
    Samochod s1;
    cout << endl;
    Samochod s2("Toyota", 2020);
    cout << endl;
    s1.wyswietl();
    cout << endl;
    s2.wyswietl();
    return 0;
}