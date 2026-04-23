#pragma once
#include <iostream>
using namespace std;

class DispatchCenter {
private:
    static int totalVehiclesDispatched;   // (общее количество обслуженных транспортных средств)

public:
    // Статический метод – можно вызывать без объекта
    static void report() {
        cout << "Всего обслужено транспортных средств: " << totalVehiclesDispatched << endl;
    }

    // Дружественный метод для регистрации (доступ к статическому полю)
    static void registerVehicle() {
        totalVehiclesDispatched++;
    }
};