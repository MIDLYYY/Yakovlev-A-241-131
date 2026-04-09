#include "AssignedRoute.h"
#include <iostream>
using namespace std;

// Конструктор: инициализируем объект route (композиция) и сохраняем указатель
AssignedRoute::AssignedRoute(string start, string end, double len, TransportUnit* tr)
    : route(start, end, len)   // создаём маршрут внутри
{
    transport = tr;            // просто запоминаем указатель
}

double AssignedRoute::calculateTotalCost()  {
    return transport->calculateToll(route.getLength());
}

void AssignedRoute::printInfo()  {
    route.printInfo();   
    cout << "Стоимость проезда: " << calculateTotalCost() << " у.е." << endl;
}