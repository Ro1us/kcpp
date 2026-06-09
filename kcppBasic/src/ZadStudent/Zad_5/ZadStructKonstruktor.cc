#include <iostream>

using namespace std;
struct Student
{
    string imie;
    int indeks;
    Student()
    {
        imie = "Brak";
        indeks = 0;
        cout << "Konstruktor domyslny" << endl;
    }
    Student(string i, int nr)
        : imie(i), indeks(nr)
    {
        cout << "Konstruktor z argumentami" << endl;
    }
    ~Student()
    {
        cout << "Destruktor" << endl;
    }
    void wyswietl()
    {
        cout << "Imie: "
             << imie
             << endl;
        cout << "Indeks: "
             << indeks
             << endl;
    }
};
int main()
{
    Student s1;
    cout << endl;
    Student s2("Jan", 12345);
    cout << endl;
    s1.wyswietl();
    cout << endl;
    s2.wyswietl();
    return 0;
}