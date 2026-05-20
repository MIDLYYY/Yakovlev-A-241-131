#include <iostream>
#include "Bus.h"
#include "Tram.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // Автобус (наследник PublicTransport и Vehicle)
    Bus bus(12, 60, "ЛиАЗ", 120, "Дизель");
    cout << "Автобус: ";
    bus.getBusInfo();

    // Трамвай (наследник только PublicTransport)
    Tram tram(5, 100, 600);
    cout << "Трамвай: ";
    tram.getTramInfo();

    // Дополнительно: покажем ускорение автобуса
    cout << "\nРазгоняем автобус на 30 км/ч..." << endl;
    bus.accelerate(30);
    bus.getBusInfo();

    return 0;
}