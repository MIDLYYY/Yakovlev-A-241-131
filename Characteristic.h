#pragma once

#include "Weapon.h"

class Characteristic
{
private:
    float strength;  // сила

public:
    // Конструктор
    Characteristic(float str);

    // Метод, принимающий ссылку на оружие (без const)
    float GetDamage(Weapon& w);
};
