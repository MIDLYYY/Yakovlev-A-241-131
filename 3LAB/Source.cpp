#include <iostream>
#include "Vehicle.h"
#include "FreightVehicle.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru"); 

    // Пример работы с одним грузовиком
    FreightVehicle truck("Kamaz", 120, 10); 
    truck.accelerate(50);   
    truck.brake(20);       
    truck.getStatus();     

    cout << "-------------------" << endl;

    // Массив из трёх грузовиков
    FreightVehicle fleet[3] = {
        FreightVehicle("Volvo", 140, 18),
        FreightVehicle("MAN", 130, 15),
        FreightVehicle("Scania", 150, 20)
    };

    // Разгоняем каждый и выводим состояние
    for (int i = 0; i < 3; i++) {
        fleet[i].accelerate(30 * (i + 1));  
        fleet[i].getStatus();
    }

    return 0;
}