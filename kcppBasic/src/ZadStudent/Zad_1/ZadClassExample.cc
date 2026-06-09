#include <iostream>
#include <string>

class Samochod {
private:
    std::string marka;
    int rok;

public:
    Samochod(std::string m, int r) {
        marka = m;
        rok = r;
    }
    void wyswietl() {
        std::cout
                << "Marka: "
                << marka
                << ", Rok: "
                << rok
                << std::endl;
    }
};

int main() {
    Samochod auto1("Audi", 2006);
    auto1.wyswietl();
    return 0;
}