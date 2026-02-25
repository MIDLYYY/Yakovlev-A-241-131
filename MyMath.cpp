#include "MyMath.h"
#include <iostream>
using namespace std;

// Определение статического поля (инициализация нулём)
int MyMath::callCount = 0;

int MyMath::Add(int a, int b)
{
    callCount++;
    return a + b;
}

int MyMath::Sub(int a, int b)
{
    callCount++;
    return a - b;
}

int MyMath::Mult(int a, int b)
{
    callCount++;
    return a * b;
}

double MyMath::Div(int a, int b)
{
    callCount++;
    if (b == 0)
    {
        cout << "Ошибка: деление на ноль!" << endl;
        return 0;
    }
    return static_cast<double>(a) / b;
}

int MyMath::GetCallCount()
{
    return callCount;
}
