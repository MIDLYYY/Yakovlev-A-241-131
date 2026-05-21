#pragma once
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    int maxSpeed;
    int currentSpeed;
public:
    Vehicle(string b, int max);
    virtual ~Vehicle() {}   // виртуальный деструктор для dynamic_cast
    void accelerate(int increment);
    void brake(int decrement);
    void getStatus();
};