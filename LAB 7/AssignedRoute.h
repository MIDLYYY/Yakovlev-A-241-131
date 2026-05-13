#pragma once
#include <memory>        // для std::unique_ptr
#include "Route.h"
#include "TransportUnit.h"

class AssignedRoute {
private:
    Route route;                              // композиция
    std::unique_ptr<TransportUnit> transport; // умный указатель на объект типа TransportUnit (владелец)

public:
    // Конструктор принимает unique_ptr (передача владения)
    AssignedRoute(string start, string end, double len,
        std::unique_ptr<TransportUnit> tr);

    double calculateTotalCost() ;
    void printInfo() ;
};