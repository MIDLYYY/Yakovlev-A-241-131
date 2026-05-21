#include <iostream>
#include <stdexcept>
#include "FreightVehicle.h"
#include "LogisticsOrder.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru"); 
    // Создаём грузовик
    FreightVehicle truck("Kamaz", 120, 10);  // грузоподъемность 10 тонн

    // Обычная машина (не грузовая)
    Vehicle car("Lada", 150);

    // Попробуем разные заказы
    LogisticsOrder order1(5);    // 5 тонн - должно пройти
    LogisticsOrder order2(12.5);   // 12 тонн - слишком много
    LogisticsOrder order3(-3);   // отрицательный вес
    LogisticsOrder order4(2);    // попробуем на обычной машине

    cout << "=== Тест 1: заказ 5 тонн на грузовике ===" << endl;
    try {
        order1.assignVehicle(truck);
    }
    catch (const invalid_argument& e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    cout << "\n=== Тест 2: заказ 12 тонн на грузовике ===" << endl;
    try {
        order2.assignVehicle(truck);
    }
    catch (const invalid_argument& e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    cout << "\n=== Тест 3: заказ с отрицательным весом ===" << endl;
    try {
        order3.assignVehicle(truck);
    }
    catch (const invalid_argument& e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    cout << "\n=== Тест 4: заказ на обычной машине ===" << endl;
    try {
        order4.assignVehicle(car);
    }
    catch (const invalid_argument& e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    return 0;
}