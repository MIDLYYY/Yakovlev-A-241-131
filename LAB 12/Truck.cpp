#include "Truck.h"

// Грузовик: ускорение 1.0 м/с^2, замедление 1.5 м/с^2
Truck::Truck(string brand, double maxSpeed)
    : Vehicle(brand, maxSpeed, 1.0, 1.5) {
}