#pragma once

#include <iostream>
#include <string>
using namespace std;

struct Player
{
    int id;
    string login;
    string password;

    void printInfo(); // функция вывода
};
