#include <iostream>
#include <memory>
#include "Car.h"
#include "Truck.h"
#include "RoadSegment.h"
#include "TrafficFlow.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // Участок дороги: длина 1000 м, ограничение 20 м/с 
    RoadSegment road(1000.0, 20.0);

    // Создаём поток
    TrafficFlow flow;

    // Добавляем разные машины 
    flow.addVehicle(make_unique<Car>("Lada", 25.0));     // макс. 25 м/с (>20)
    flow.addVehicle(make_unique<Truck>("Kamaz", 18.0));  // макс. 18 м/с (<20)
    flow.addVehicle(make_unique<Car>("BMW", 30.0));      // макс. 30 м/с

    // Задаем 10 секунд с шагом 1 секунда
    double timeStep = 1.0;
    double totalTime = 10.0;

    cout << "Начало симуляции (шаг 1 с, всего " << totalTime << " с)\n" << endl;

    for (double t = 0; t <= totalTime; t += timeStep) {
        cout << "Время: " << t << " с" << endl;
        flow.report();
        cout << endl;
        flow.simulate(timeStep, road);
    }

    cout << "Симуляция завершена." << endl;
    return 0;
}