#pragma once

#include "Weapon.h"

class Characteristic
{
private:
    float strength;

public:
    Characteristic(float str);
    float GetDamage(Weapon& w);  
};
