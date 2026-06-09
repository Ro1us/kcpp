#include <iostream>

using namespace std;
class B;
class A
{
private:
    int tajnaA;
public:
    A()
    {
        tajnaA = 100;
    }
    friend class B;
};
class B
{
private:
    int tajnaB;
public:
    B()
    {
        tajnaB = 200;
    }
    void pokazA(A& a)
    {
        cout << "Prywatna zmienna A = "
             << a.tajnaA
             << endl;
    }
};
int main()
{
    A a;
    B b;
    b.pokazA(a);
    return 0;
}
/*
Friendship is not mutual.

Jeżeli klasa B jest przyjacielem klasy A,
to B ma dostęp do prywatnych pól A.

Nie oznacza to jednak,
że A ma automatycznie dostęp
do prywatnych pól B.
*/