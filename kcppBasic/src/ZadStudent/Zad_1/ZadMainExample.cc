#include <iostream>

extern "C" void f1();
extern "C" void f2();
void f3();
void f4();
void f5();
extern "C" void f1() {
    std::cout << "Funkcja 1" << std::endl;
}
extern "C" void f2() {
    std::cout << "Funkcja 2" << std::endl;
}
void f3() {
    std::cout << "Funkcja 3" << std::endl;
}
void f4() {
    std::cout << "Funkcja 4" << std::endl;
}
void f5() {
    std::cout << "Funkcja 5" << std::endl;
}

int main() {
    f1();
    f2();
    f3();
    f4();
    f5();
    return 0;
}