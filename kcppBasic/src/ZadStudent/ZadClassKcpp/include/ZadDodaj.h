#ifndef ZADDODAJ_H
#define ZADDODAJ_H

#include "ZadKcpp.h"
#include <string>

class ZadDodaj : public ZadKcpp
{
public:
    int dodaj(int a, int b);
    double dodaj(double a, double b);
    std::string dodaj(std::string a, std::string b);

    void Uruchom() override;
};

#endif