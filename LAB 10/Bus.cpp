#include "Bus.h"
#include <iostream>
using namespace std;

Bus::Bus(int route, int capacity, string brand, int maxSpeed, string fuel)
    : PublicTransport(route, capacity), Vehicle(brand, maxSpeed), fuelType(fuel) {
}

void Bus::getBusInfo() {
    PublicTransport::getInfo();      // информация от PublicTransport
    cout << ", тип топлива: " << fuelType << ", ";
    Vehicle::getStatus();            // информация от Vehicle (марка, скорости)
}