#pragma once
#include <vector>
#include <memory>
#include "Vehicle.h"
#include "RoadSegment.h"   

class TrafficFlow {
private:
    std::vector<std::unique_ptr<Vehicle>> vehicles;
public:
    void addVehicle(std::unique_ptr<Vehicle> v);
    void simulate(double timeStep, const RoadSegment& road);
    void report() const;
};