#include <iostream>

using namespace std;
struct Student
{
    string imie;
    int indeks;
    Student(string i, int nr)
    {
        imie = i;
        indeks = nr;
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
    Student s1("Jan", 12345);
    s1.wyswietl();
    cout << endl;
    s1.imie = "Adam";
    s1.indeks = 54321;
    cout << "Po zmianie:" << endl;
    s1.wyswietl();
    return 0;
}