#pragma once
#include "Vehicle.h"

class FreightVehicle : public Vehicle {
private:
    int cargoCapacity;   // грузоподъемность 
public:
    FreightVehicle(string b, int max, int cargo);
    void getStatus();    // переопределённый метод
    int getCargoCapacity();
};