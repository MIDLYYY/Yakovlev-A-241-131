#include "Tram.h"
#include <iostream>
using namespace std;

Tram::Tram(int route, int capacity, int voltage)
    : PublicTransport(route, capacity), electricLineVoltage(voltage) {
}

void Tram::getTramInfo() {
    PublicTransport::getInfo();
    cout << ", напряжение сети: " << electricLineVoltage << " В" << endl;
}