#pragma once

#include <vector>
using namespace std;

// Шаблонный класс Warehouse
template <typename T>
class Warehouse {
private:
    vector<T> items;   // вектор для хранения элементов типа T

public:
    // Добавить элемент (константная ссылка – чтобы не копировать лишний раз)
    void addItem(const T& item) {
        items.push_back(item);
    }

    // Получить элемент по индексу
    T getItem(int index) {
        // Простая проверка на выход за границы
        if (index >= 0 && index < (int)items.size()) {
            return items[index];
        }
        else {
            // В реальном коде лучше бросать исключение, но для простоты вернём T()
            return T();
        }
    }

    // Получить общее количество элементов
    int getTotalItems() {
        return (int)items.size();
    }
};