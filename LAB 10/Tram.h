#pragma once
#include "PublicTransport.h"

class Tram : public PublicTransport {
private:
    int electricLineVoltage;  // напряжение контактной сети 
public:
    Tram(int route, int capacity, int voltage);
    void getTramInfo();
};