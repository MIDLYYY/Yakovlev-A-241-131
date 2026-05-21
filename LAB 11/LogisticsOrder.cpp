#include "LogisticsOrder.h"
#include "FreightVehicle.h"
#include <iostream>
#include <stdexcept>
using namespace std;

LogisticsOrder::LogisticsOrder(double w) {
    weight = w;
}

double LogisticsOrder::getWeight() {
    return weight;
}

void LogisticsOrder::assignVehicle(Vehicle& v) {
    // Проверка на отрицательный вес
    if (weight < 0) {
        throw invalid_argument("Отрицательный вес заказа!");
    }

    // Пытаемся привести к грузовому транспорту
    FreightVehicle* fv = dynamic_cast<FreightVehicle*>(&v);
    if (fv == nullptr) {
        throw invalid_argument("Транспорт не является грузовым!");
    }

    // Проверка грузоподъемности
    if (weight > fv->getCargoCapacity()) {
        throw invalid_argument("Вес заказа превышает грузоподъемность!");
    }

    // Если всё хорошо
    cout << "Заказ весом " << weight << " т назначен на транспорт." << endl;
}