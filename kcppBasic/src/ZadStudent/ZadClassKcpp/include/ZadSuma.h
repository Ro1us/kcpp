#ifndef ZADSUMA_H
#define ZADSUMA_H

#include "ZadKcpp.h"

class ZadSuma : public ZadKcpp
{
public:
    int suma(int* tablica, int rozmiar);

    void Uruchom() override;
};

#endif