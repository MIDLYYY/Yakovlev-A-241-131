#include <iostream>
#include <clocale>
#include "Vehicle.h"
#include "DispatchCenter.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // Пока не создано ни одного Vehicle
    DispatchCenter::report();   // 0

    Vehicle car1("Lada", 150);
    Vehicle car2("BMW", 250);
    Vehicle truck("Kamaz", 120);

    // После создания трёх машин
    DispatchCenter::report();   // 3

    // Можно создавать и дальше
    Vehicle* bus = new Vehicle("Bus", 100);
    DispatchCenter::report();   // 4

    delete bus;
  
    return 0;
}