#pragma once

#include "Route.h"
#include "TransportUnit.h"

class AssignedRoute {
private:
    Route route;                   // композиция: объект Route внутри
    TransportUnit* transport;      // агрегация: указатель на внешний объект

public:
    // Конструктор: маршрут создаётся прямо здесь (композиция),
    // транспорт передаётся извне (агрегация)
    AssignedRoute(string start, string end, double len, TransportUnit* tr);

    // Рассчитать полную стоимость проезда
    double calculateTotalCost() ;

    void printInfo();
};