#pragma once
#include "Vehicle.h"

class LogisticsOrder {
private:
    double weight;   // вес заказа 
public:
    LogisticsOrder(double w);
    double getWeight();
    void assignVehicle(Vehicle& v);
};