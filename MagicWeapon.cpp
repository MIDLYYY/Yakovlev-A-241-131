#include "MagicWeapon.h"

// Конструктор с параметрами
MagicWeapon::MagicWeapon(string name, float damage, float weight, WeaponType type, float extra)
    : Weapon(name, damage, weight, type), extraDamage(extra)
{
}

// Конструктор без параметров (значения по умолчанию)
MagicWeapon::MagicWeapon() : MagicWeapon("Магический посох", 2.5f, 4.0f, WeaponType::ONEHANDED, 10.0f)
{
}

float MagicWeapon::getExtraDamage() const
{
    return extraDamage;
}
