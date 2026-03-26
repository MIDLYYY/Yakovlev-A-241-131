#include <iostream>
#include "TransportUnit.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main() {
    // Массив указателей на базовый класс
    TransportUnit* vehicles[4];

    // Создаём объекты
    vehicles[0] = new Car();
    vehicles[1] = new Truck();
    vehicles[2] = new Car();
    vehicles[3] = new Truck();

    double distance = 100.0;

    cout << "Расчёт платы за проезд (" << distance << " км):" << endl;

   
    for (int i = 0; i < 4; i++) {
        double toll = vehicles[i]->calculateToll(distance);
        cout << "Транспорт " << i + 1 << ": " << toll << " у.е." << endl;
    }

    // Освобождаем память
    for (int i = 0; i < 4; i++) {
        delete vehicles[i];
    }

    return 0;
}