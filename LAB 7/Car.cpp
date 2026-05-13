#include "Car.h"

double Car::calculateToll(double distance) const {
    return distance * 0.1;   // легковой: 0.1 у.е./км
}