#include "Weapon.h"

// --- Конструктор с параметрами ---
Weapon::Weapon(string inputName, float inputDamage, float inputWeight)
    : name(inputName), damage(inputDamage), weight(inputWeight)
{
}

// --- Конструктор без параметров (вызывает конструктор с параметрами) ---
Weapon::Weapon() : Weapon("Посох", 1.00f, 5.25f)
{
}

// --- Деструктор ---
Weapon::~Weapon()
{
    cout << "\nУничтожается оружие: " << name
         << " (урон: " << damage << ", вес: " << weight << ")" << endl;
}

// --- Вывод информации об оружии ---
void Weapon::printInfo()
{
    cout << "\nИмя: " << name << endl;
    cout << "Урон: " << damage << endl;
    cout << "Вес: " << weight << endl;
}

// --- Проверка, сможет ли поднять (true, если максимальный вес меньше веса оружия) ---
bool Weapon::canLift(float maxWeight)
{
    return maxWeight < weight;
}

// --- Суммарный вес с другим оружием (использует перегрузку) ---
float Weapon::totalWeight(Weapon other)
{
    return totalWeight(other.weight);
}

// --- Суммарный вес с дополнительным весом (перегрузка) ---
float Weapon::totalWeight(float additionalWeight)
{
    return weight + additionalWeight;
}
