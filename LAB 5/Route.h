#pragma once
#include <string>
using namespace std;

class Route
{
private:
	string startPoint;
	string endPoint;
	int length;

public:
	Route(string start, string end, double len);
	void printInfo();
	double getLength();    



};

