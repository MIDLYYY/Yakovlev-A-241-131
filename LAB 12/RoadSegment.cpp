#include "RoadSegment.h"

RoadSegment::RoadSegment(double len, double maxSpd)
    : length(len), maxSpeed(maxSpd) {
}

double RoadSegment::getMaxSpeed() const  {
    return maxSpeed;
}

double RoadSegment::getLength() const  {
    return length;
}