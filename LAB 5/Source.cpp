#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "AssignedRoute.h"
using namespace std;

int main() {
    // Создаём объекты транспортных средств
    Car myCar;
    Truck myTruck;

    // Назначаем маршруты для разных транспортных средств
    // Используем композицию: маршрут создаётся внутри AssignedRoute
    AssignedRoute route1("Москва", "Тверь", 170.0, &myCar);
    AssignedRoute route2("Санкт-Петербург", "Новгород", 200.0, &myTruck);

    
    cout << "=== Легковой автомобиль ===" << endl;
    route1.printInfo();

    cout << "\n=== Грузовик ===" << endl;
    route2.printInfo();

    return 0;
}