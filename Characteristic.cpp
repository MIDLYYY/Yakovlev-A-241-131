#include "Characteristic.h"
#include <iostream>
using namespace std;

Characteristic::Characteristic(float str) : strength(str)
{
}

float Characteristic::GetDamage(Weapon& w)
{
    // Благодаря дружественности имеем доступ к private полю Weapon::damage
    return strength + w.damage;
}
