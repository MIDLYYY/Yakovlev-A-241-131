#include "Route.h"
#include <iostream>
using namespace std;

Route::Route(string start, string end, double len)
    : startPoint(start), endPoint(end), length(len) {
}

void Route::printInfo()  {
    cout << "Маршрут: " << startPoint << " -> " << endPoint
        << ", длина: " << length << " км" << endl;
}

double Route::getLength()  {
    return length;
}