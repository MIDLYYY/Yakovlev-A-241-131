#include "FreightVehicle.h"
#include <iostream>
using namespace std;

FreightVehicle::FreightVehicle(string b, int max, int cargo)
    : Vehicle(b, max), cargoCapacity(cargo) {
}

void FreightVehicle::getStatus() {
    cout << brand << ": макс. " << maxSpeed
        << ", грузоподъемность " << cargoCapacity << " т" << endl;
}

int FreightVehicle::getCargoCapacity() {
    return cargoCapacity;
}