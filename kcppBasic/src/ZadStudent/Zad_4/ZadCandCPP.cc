#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int liczbaC;
    int liczbaCPP;
    printf("=== Jezyk C ===\n");
    printf("Podaj liczbe: ");
    scanf("%d", &liczbaC);
    printf("Wprowadziles: %d\n\n", liczbaC);
    cout << "=== Jezyk C++ ===" << endl;
    cout << "Podaj liczbe: ";
    cin >> liczbaCPP;
    cout << "Wprowadziles: "
         << liczbaCPP
         << endl;
    return 0;
}
