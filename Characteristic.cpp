#include "Characteristic.h"
#include <iostream>
using namespace std;

Characteristic::Characteristic(float str) : strength(str)
{
}

float Characteristic::GetDamage(Weapon& w)
{
    return strength + w.damage;  // прямой доступ благодаря friend
}
