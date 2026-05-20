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
    void accelerate(int increment);
    void brake(int decrement);
    void getStatus();
};