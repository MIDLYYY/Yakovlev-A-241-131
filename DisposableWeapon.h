#pragma once

#include "Weapon.h"

class DisposableWeapon : public Weapon
{
private:
    bool used; // true – уже использовано, false – ещё нет

public:
    // Конструкторы
    DisposableWeapon(string name, float damage, float weight, WeaponType type);
    DisposableWeapon();

    // Реализация Attack
    void Attack() override;
};
