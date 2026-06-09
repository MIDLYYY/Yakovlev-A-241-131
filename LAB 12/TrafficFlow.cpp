#include "TrafficFlow.h"
#include <iostream>
using namespace std;

void TrafficFlow::addVehicle(std::unique_ptr<Vehicle> v) {
    vehicles.push_back(std::move(v));
}

void TrafficFlow::simulate(double timeStep, const RoadSegment& road) {
    double roadMaxSpeed = road.getMaxSpeed();
    for (auto& v : vehicles) {
        v->update(timeStep, roadMaxSpeed);
    }
}

void TrafficFlow::report() const  {
    cout << "=== Состояние потока ===" << endl;
    for (size_t i = 0; i < vehicles.size(); ++i) {
        cout << "ТС " << i + 1 << ": ";
        vehicles[i]->getStatus();
        cout << endl;
    }
}