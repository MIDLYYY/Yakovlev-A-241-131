#pragma once

#include <iostream>
#include <string>
using namespace std;

class Weapon
{
public:
    // Поля класса
    string name;
    float damage;
    float weight;

    // Конструкторы
    Weapon(string inputName, float inputDamage, float inputWeight);  // с параметрами
    Weapon();  // без параметров (вызывает первый конструктор)

    // Деструктор
    ~Weapon();

    // Методы класса
    void printInfo();                     // вывод информации
    bool canLift(float maxWeight);         // проверка возможности поднять
    float totalWeight(Weapon other);       // сумма веса с другим оружием
    float totalWeight(float additionalWeight); // сумма веса с числом (перегрузка)
};
