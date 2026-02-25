#pragma once

#include "Weapon.h"

class MagicWeapon : public Weapon
{
private:
    float extraDamage;

public:
    MagicWeapon(string name, float damage, float weight, WeaponType type, float extra);
    MagicWeapon();

    float getExtraDamage() const;

    // Реализация чисто виртуальной функции
    void Attack() override;
};
