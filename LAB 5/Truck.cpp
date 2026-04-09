#include "Truck.h"

double Truck::calculateToll(double distance) const {
    return distance * 0.3 + 5.0;   // 0.3 за км + фикс. сбор 5
}