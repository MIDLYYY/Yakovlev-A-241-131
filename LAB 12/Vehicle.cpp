#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(string b, double maxSpd, double accel, double decel)
    : brand(b), maxSpeed(maxSpd), currentSpeed(0), position(0),
    accelRate(accel), decelRate(decel) {
}

void Vehicle::update(double timeStep, double roadMaxSpeed) {
    // Целевая скорость – минимальная из максимальной машины и ограничения дороги
    double targetSpeed = maxSpeed;
    if (roadMaxSpeed < targetSpeed) targetSpeed = roadMaxSpeed;

    // Разгон или торможение
    if (currentSpeed < targetSpeed) {
        currentSpeed += accelRate * timeStep;
        if (currentSpeed > targetSpeed) currentSpeed = targetSpeed;
    }
    else if (currentSpeed > targetSpeed) {
        currentSpeed -= decelRate * timeStep;
        if (currentSpeed < targetSpeed) currentSpeed = targetSpeed;
    }

    // Обновление позиции
    position += currentSpeed * timeStep;
}

double Vehicle::getPosition() const {
    return position;
}

void Vehicle::getStatus() const {
    cout << brand << ": speed=" << currentSpeed << " m/s, pos=" << position << " m";
}