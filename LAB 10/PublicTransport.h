#pragma once
#include <string>
using namespace std;

class PublicTransport {
protected:
    int routeNumber;        // номер маршрута
    int passengerCapacity;  // вместимость 
public:
    PublicTransport(int route, int capacity);
    void getInfo();         
};