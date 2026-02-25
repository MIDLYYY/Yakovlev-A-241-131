#include "DisposableWeapon.h"
#include <iostream>
using namespace std;

DisposableWeapon::DisposableWeapon(string name, float damage, float weight, WeaponType type)
    : Weapon(name, damage, weight, type), used(false)
{
}

DisposableWeapon::DisposableWeapon()
    : DisposableWeapon("Одноразовый кинжал", 8.0f, 0.5f, WeaponType::ONEHANDED)
{
}

void DisposableWeapon::Attack()
{
    if (used)
    {
        cout << "Оружие уже было использовано!" << endl;
    }
    else
    {
        cout << "Атакуем одноразовым оружием!" << endl;
        used = true;
    }
}
