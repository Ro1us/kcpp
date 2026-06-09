#include <iostream>
#include <cstring>

int main() {
    char napis1[] = "Hello";
    char napis2[20];
    strcpy(napis2, napis1);
    std::cout << "Po strcpy: "
              << napis2
              << std::endl;
    char napis3[20];
    strncpy(napis3, napis2, 3);
    napis3[3] = '\0';
    std::cout << "Po strncpy: "
              << napis3
              << std::endl;
    std::cout << "strlen: "
              << strlen(napis2)
              << std::endl;
    return 0;
}