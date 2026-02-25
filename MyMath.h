#pragma once

class MyMath
{
private:
    static int callCount;  // статическое поле для подсчёта вызовов

public:
    // Статические методы
    static int Add(int a, int b);
    static int Sub(int a, int b);
    static int Mult(int a, int b);
    static double Div(int a, int b);  // возвращаем double для точности

    // Метод для получения значения счётчика
    static int GetCallCount();
};
