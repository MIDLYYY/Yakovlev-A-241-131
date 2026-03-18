#include "FreightVehicle.h"
#include <iostream>
using namespace std;


// Конструктор FreightVehicle: сначала вызываем конструктор Vehicle(b, max),
// потом инициализируем cargoCapacity
FreightVehicle::FreightVehicle(string b, int max, int cargo) : Vehicle(b, max) {
    cargoCapacity = cargo;  
}

// Переопределенный метод: выводим всё, что выводил Vehicle, плюс грузоподъемность
void FreightVehicle::getStatus() {
    // Поля brand, maxSpeed, currentSpeed доступны, потому что они protected в Vehicle
    cout << brand << ": макс. " << maxSpeed<< ", сейчас " << currentSpeed<< ", грузоподъемность: " << cargoCapacity << " т" << endl;
}