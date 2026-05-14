#include <iostream>
#include <string>
#include "Warehouse.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // 1. Склад с номерами грузов (int)
    Warehouse<int> intWarehouse;

    intWarehouse.addItem(100);
    intWarehouse.addItem(200);
    intWarehouse.addItem(300);

    cout << "Склад int: всего " << intWarehouse.getTotalItems() << " грузов" << endl;
    cout << "Груз под индексом 0: " << intWarehouse.getItem(0) << endl;
    cout << "Груз под индексом 1: " << intWarehouse.getItem(1) << endl;
    cout << "Груз под индексом 2: " << intWarehouse.getItem(2) << endl;

    cout << endl;

    // 2. Склад с названиями грузов (string)
    Warehouse<string> stringWarehouse;

    stringWarehouse.addItem("Яблоки");
    stringWarehouse.addItem("Апельсины");
    stringWarehouse.addItem("Бананы");

    cout << "Склад string: всего " << stringWarehouse.getTotalItems() << " грузов" << endl;
    cout << "Груз под индексом 0: " << stringWarehouse.getItem(0) << endl;
    cout << "Груз под индексом 1: " << stringWarehouse.getItem(1) << endl;
    cout << "Груз под индексом 2: " << stringWarehouse.getItem(2) << endl;

    return 0;
}