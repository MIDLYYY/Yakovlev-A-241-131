#include "Truck.h"
// Плата для грузовика: 0.3 у.е. за км + фиксированный сбор 5.0
double Truck::calculateToll(double distance) const {
    return distance * 0.3 + 5.0;
}