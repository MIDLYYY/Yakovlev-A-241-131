#include "Weapon.h"

using namespace std;

Weapon::Weapon(string inputName, float inputDamage, float inputWeight)
    : name(inputName), damage(inputDamage), weight(inputWeight)
{
}

Weapon::Weapon() : Weapon("Посох", 1.00f, 5.25f)
{
}

Weapon::~Weapon()
{
    cout << "\nУничтожается оружие: " << name
         << " (урон: " << damage << ", вес: " << weight << ")" << endl;
}

// Get-методы 
string Weapon::getName() const
{
    return name;
}

float Weapon::getDamage() const
{
    return damage;
}

float Weapon::getWeight() const
{
    return weight;
}

// Set-метод для урона 
void Weapon::setDamage(float newDamage)
{
    if (newDamage >= 0)  // Простейшая проверка
        damage = newDamage;
    else
        cout << "Урон не может быть отрицательным!" << endl;
}

//  Вывод информации об оружии 
void Weapon::printInfo()
{
    cout << "\nИмя: " << name << endl;
    cout << "Урон: " << damage << endl;
    cout << "Вес: " << weight << endl;
}

//  Проверка, сможет ли поднять
bool Weapon::canLift(float maxWeight)
{
    return maxWeight < weight;
}

// Суммарный вес с другим оружием 
float Weapon::totalWeight(Weapon other)
{
    return totalWeight(other.weight);
}

// Суммарный вес с дополнительным весом 
float Weapon::totalWeight(float additionalWeight)
{
    return weight + additionalWeight;
}
