#pragma once

class RoadSegment {
private:
    double length;      // длина участка (м)
    double maxSpeed;    // максимальная скорость на участке (м/с)
public:
    RoadSegment(double len, double maxSpd);
    double getMaxSpeed() const  ;
    double getLength() const ;
};