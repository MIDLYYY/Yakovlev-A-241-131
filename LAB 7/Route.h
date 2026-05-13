#pragma once
#include <string>
using namespace std;

class Route {
private:
    string startPoint;
    string endPoint;
    double length;
public:
    Route(string start, string end, double len);
    void printInfo() ;
    double getLength() ;
};