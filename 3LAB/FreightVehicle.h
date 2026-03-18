#pragma once
#include "Vehicle.h"  // Подключил для наследования 
#include <string>
using namespace std;

class FreightVehicle: public Vehicle
{
private:
    int cargoCapacity;  //грузоподъемность

public:
    // Конструктор
    FreightVehicle(string b, int max, int cargo);

    // Переопределяем метод getStatus (добавляем вывод грузоподъемности)
    void getStatus();
};

