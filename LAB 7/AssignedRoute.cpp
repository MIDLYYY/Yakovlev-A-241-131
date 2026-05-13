#include "AssignedRoute.h"
#include <iostream>
using namespace std;

// В списке инициализации: создаём route, а transport перемещаем
AssignedRoute::AssignedRoute(string start, string end, double len,
    std::unique_ptr<TransportUnit> tr)
    : route(start, end, len), transport(std::move(tr)) {
}

double AssignedRoute::calculateTotalCost()  {
    return transport->calculateToll(route.getLength());
}

void AssignedRoute::printInfo()  {
    route.printInfo();
    cout << "Стоимость проезда: " << calculateTotalCost() << " у.е." << endl;
}