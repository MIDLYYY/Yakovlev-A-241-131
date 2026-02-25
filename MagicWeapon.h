#pragma once

#include "Weapon.h"

class MagicWeapon : public Weapon
{
private:
    float extraDamage; // дополнительный урон

public:
    // Конструкторы
    MagicWeapon(string name, float damage, float weight, WeaponType type, float extra);
    MagicWeapon(); // без параметров

    // Геттер
    float getExtraDamage() const;
};
