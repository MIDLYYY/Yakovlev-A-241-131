#pragma once
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    double maxSpeed;      
    double currentSpeed;  
    double position;      // метры от начала участка
    double accelRate;     // ускорение (м/с^2)
    double decelRate;     // замедление (м/с^2)

public:
    Vehicle(string b, double maxSpd, double accel, double decel);
    virtual ~Vehicle() {}

    void update(double timeStep, double roadMaxSpeed);
    double getPosition() const;
    void getStatus() const;
};