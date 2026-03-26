#pragma once
#include "TransportUnit.h"

class Car: public TransportUnit  //Производный класс
{
public:
	virtual double calculateToll(double distance) const override; //Реализация чисто виртуальной функции

};

