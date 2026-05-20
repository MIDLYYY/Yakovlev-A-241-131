#include <iostream>
#include <algorithm>   // для sort
#include "Vehicle.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    Vehicle park[] = {
        Vehicle("Lada",    150),
        Vehicle("BMW",     250),
        Vehicle("Chery",   200),
        Vehicle("Honda",   190),
        Vehicle("Bus",     100)
    };

    cout << "=== До сортировки ===" << endl;
    for (int i = 0; i < 5; i++) {
        park[i].getStatus();
    }

    // Сортируем массив (используется operator< в Vehicle)
    sort(park, park + 5);

    cout << "\n=== После сортировки (по макс. скорости, от меньшей к большей) ===" << endl;
    for (int i = 0; i < 5; i++) {
        park[i].getStatus();
    }

    return 0;
}