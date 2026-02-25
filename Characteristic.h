#pragma once

#include "Weapon.h"  // Нужен для использования Weapon в методе GetDamage

class Characteristic
{
private:
    float strength;  // сила

public:
    // Конструктор
    Characteristic(float str);

    // Метод, использующий дружественность к Weapon
    float GetDamage(const Weapon& w) const;
};
