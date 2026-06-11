#ifndef ZADPOLE_H
#define ZADPOLE_H

#include "ZadKcpp.h"

class ZadPole : public ZadKcpp
{
public:
    double pole(double bok);
    double pole(double bok1, double bok2);
    double pole(double promien, char typ);

    void Uruchom() override;
};

#endif