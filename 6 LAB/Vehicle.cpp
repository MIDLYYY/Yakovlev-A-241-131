#include "Vehicle.h"
#include "DispatchCenter.h"   //  новое включение
#include <iostream>
using namespace std;

Vehicle::Vehicle(string b, int max) {
    brand = b;
    maxSpeed = max;
    currentSpeed = 0;
    DispatchCenter::registerVehicle();   // новое: уведомляем диспетчера
}

void Vehicle::accelerate(int increment) {
    if (currentSpeed + increment > maxSpeed)
        currentSpeed = maxSpeed;
    else
        currentSpeed += increment;
}

void Vehicle::brake(int decrement) {
    if (currentSpeed - decrement < 0)
        currentSpeed = 0;
    else
        currentSpeed -= decrement;
}

void Vehicle::getStatus() {
    cout << brand << ": макс. " << maxSpeed
        << ", сейчас " << currentSpeed << endl;
}