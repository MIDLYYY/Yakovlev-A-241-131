#pragma once

#include <iostream>
#include <string>
using namespace std;

// Перечисление типов оружия
enum class WeaponType
{
    ONEHANDED,   
    TWOHANDED,   
    BOW,         
    CROSSBOW    
};

class Characteristic;

class Weapon
{
private:
    string name;
    float damage;
    float weight;
    WeaponType type; 

public:
    // Конструкторы 
    Weapon(string inputName, float inputDamage, float inputWeight, WeaponType inputType = WeaponType::ONEHANDED);
    Weapon(); // без параметров

    ~Weapon();

    // Геттеры
    string getName() const;
    float getDamage() const;
    float getWeight() const;
    WeaponType getType() const;  // новый геттер

    // Сеттер для урона
    void setDamage(float newDamage);

    void printInfo();
    bool canLift(float maxWeight);
    float totalWeight(Weapon other);
    float totalWeight(float additionalWeight);

    friend class Characteristic;
};
