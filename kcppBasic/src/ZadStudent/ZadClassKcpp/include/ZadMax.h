#ifndef ZADMAX_H
#define ZADMAX_H

#include "ZadKcpp.h"

class ZadMax : public ZadKcpp
{
public:
    int* maxElement(int* tablica, int rozmiar);

    void Uruchom() override;
};

#endif