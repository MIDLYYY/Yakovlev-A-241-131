#pragma once
#include "PublicTransport.h"
#include "Vehicle.h"
#include <string>
using namespace std;

class Bus : public PublicTransport, public Vehicle {
private:
    string fuelType;   // тип топлива
public:
    Bus(int route, int capacity, string brand, int maxSpeed, string fuel);
    void getBusInfo(); 
};