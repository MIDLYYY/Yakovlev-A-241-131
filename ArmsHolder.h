#pragma once

// Шаблонный класс для хранения двух предметов 
template <typename TLeft, typename TRight>
class ArmsHolder
{
private:
    TLeft leftHand;
    TRight rightHand;

public:
    // Конструктор 
    ArmsHolder(TLeft left, TRight right);

    // Геттеры 
    TLeft getLeft();
    TRight getRight();

    // Сеттеры 
    void setLeft(TLeft left);
    void setRight(TRight right);
};

// Реализация шаблонных методов
template <typename TLeft, typename TRight>
ArmsHolder<TLeft, TRight>::ArmsHolder(TLeft left, TRight right)
    : leftHand(left), rightHand(right)
{
}

template <typename TLeft, typename TRight>
TLeft ArmsHolder<TLeft, TRight>::getLeft()
{
    return leftHand;
}

template <typename TLeft, typename TRight>
TRight ArmsHolder<TLeft, TRight>::getRight()
{
    return rightHand;
}

template <typename TLeft, typename TRight>
void ArmsHolder<TLeft, TRight>::setLeft(TLeft left)
{
    leftHand = left;
}

template <typename TLeft, typename TRight>
void ArmsHolder<TLeft, TRight>::setRight(TRight right)
{
    rightHand = right;
}
