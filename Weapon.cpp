#include "Weapon.h"

using namespace std;

Weapon::Weapon(string inputName, float inputDamage, float inputWeight, WeaponType inputType)
    : name(inputName), damage(inputDamage), weight(inputWeight), type(inputType)
{
}

Weapon::Weapon() : Weapon("Посох", 1.00f, 5.25f, WeaponType::ONEHANDED)
{
}

Weapon::~Weapon()
{
    cout << "\nУничтожается оружие: " << name
         << " (урон: " << damage << ", вес: " << weight << ")" << endl;
}

string Weapon::getName()  { return name; }
float Weapon::getDamage()  { return damage; }
float Weapon::getWeight() { return weight; }
WeaponType Weapon::getType()  { return type; }

void Weapon::setDamage(float newDamage)
{
    if (newDamage >= 0)
        damage = newDamage;
    else
        cout << "Урон не может быть отрицательным!" << endl;
}

void Weapon::printInfo()
{
    cout << "\nИмя: " << name << endl;
    cout << "Урон: " << damage << endl;
    cout << "Вес: " << weight << endl;
}

bool Weapon::canLift(float maxWeight)
{
    return maxWeight < weight;
}

float Weapon::totalWeight(Weapon other)
{
    return totalWeight(other.weight);
}

float Weapon::totalWeight(float additionalWeight)
{
    return weight + additionalWeight;
}
