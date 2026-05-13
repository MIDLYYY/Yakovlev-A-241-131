#include <iostream>
#include <memory>   // для std::make_unique
#include "Car.h"
#include "Truck.h"
#include "AssignedRoute.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // Создаём транспорт через умные указатели 
    auto carPtr = make_unique<Car>();
    auto truckPtr = make_unique<Truck>();

    // Создаём назначенные маршруты, передавая владение unique_ptr
    AssignedRoute route1("Москва", "Тверь", 170.0, std::move(carPtr));
    AssignedRoute route2("Санкт-Петербург", "Новгород", 200.0, std::move(truckPtr));

    // Выводим информацию
    cout << "=== Легковой автомобиль ===" << endl;
    route1.printInfo();

    cout << "\n=== Грузовик ===" << endl;
    route2.printInfo();
    return 0;
}