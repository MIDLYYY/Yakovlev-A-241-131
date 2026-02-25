#pragma once

#include <iostream>
#include <string>
using namespace std;

class Characteristic;

class Weapon
{
private:
    // Поля класса теперь закрыты
    string name;
    float damage;
    float weight;

public:
    // Конструкторы
    Weapon(string inputName, float inputDamage, float inputWeight);
    Weapon();  // без параметров

    // Деструктор
    ~Weapon();

    // Get-методы
    string getName() const;
    float getDamage() const;
    float getWeight() const;

    // Set-метод для урона
    void setDamage(float newDamage);

    void printInfo();
    bool canLift(float maxWeight);
    float totalWeight(Weapon other);
    float totalWeight(float additionalWeight);

    // Дружественный класс
    friend class Characteristic;
};
