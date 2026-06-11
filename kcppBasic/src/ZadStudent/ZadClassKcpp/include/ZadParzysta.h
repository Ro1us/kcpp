#ifndef ZADPARZYSTA_H
#define ZADPARZYSTA_H

#include "ZadKcpp.h"

class ZadParzysta : public ZadKcpp
{
public:
    bool CzyParzystaBitowo(int liczba);
    bool CzyParzystaModulo(int liczba);
    bool CzyParzystaWarunkowy(int liczba);

    void Uruchom() override;
};

#endif