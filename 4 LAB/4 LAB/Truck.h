#pragma once
#include "TransportUnit.h"
class Truck   // Производный класс "Грузовик"

{ 
public:
     virtual double calculateToll(double distance) const override;
  
};

