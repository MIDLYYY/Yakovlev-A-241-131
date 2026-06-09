#include "Car.h"

// Легковой автомобиль: ускорение 2.0 м/с^2, замедление 3.0 м/с^2
Car::Car(string brand, double maxSpeed)
    : Vehicle(brand, maxSpeed, 2.0, 3.0) {
}