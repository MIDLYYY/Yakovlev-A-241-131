#pragma once
using namespace std;

class TransportUnit
{
    public:
        // Чисто виртуальная функция для расчёта платы за проезд
        virtual double calculateToll(double distance) const = 0;

        // Виртуальный деструктор (для корректного удаления через указатель на базовый класс)
        virtual ~TransportUnit() {}
    };
};

