#include <iostream>

using namespace std;
void PetlaWhile()
{
    cout << "===== WHILE =====" << endl;
    int i = 0;
    while(i < 10)
    {
        i++;
        if(i == 3)
        {
            continue;
        }
        if(i == 8)
        {
            break;
        }
        cout << i << " ";
    }
    cout << endl << endl;
}
void PetlaDoWhile()
{
    cout << "===== DO-WHILE =====" << endl;
    int i = 0;
    do
    {
        ++i;
        if(i == 4)
        {
            continue;
        }
        if(i == 8)
        {
            break;
        }
        cout << i << " ";
    }
    while(i < 10);
    cout << endl << endl;
}
void PetlaFor()
{
    cout << "===== FOR =====" << endl;
    for(int i = 1; i <= 10; i++)
    {
        if(i == 4)
        {
            continue;
        }
        if(i == 8)
        {
            return;
        }
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    PetlaWhile();
    PetlaDoWhile();
    PetlaFor();
    return 0;
}