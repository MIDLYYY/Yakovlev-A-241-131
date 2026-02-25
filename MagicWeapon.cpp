#include "MagicWeapon.h"
#include <iostream>
using namespace std;

MagicWeapon::MagicWeapon(string name, float damage, float weight, WeaponType type, float extra)
    : Weapon(name, damage, weight, type), extraDamage(extra)
{
}

MagicWeapon::MagicWeapon() : MagicWeapon("Магический посох", 2.5f, 4.0f, WeaponType::ONEHANDED, 10.0f)
{
}

float MagicWeapon::getExtraDamage() 
{
    return extraDamage;
}

void MagicWeapon::Attack()
{
    cout << "Атакуем магическим оружием!" << endl;
}
