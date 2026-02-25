#pragma once

// Шаблонный класс для хранения двух предметов (например, оружие в левой и правой руке)
template <typename TLeft, typename TRight>
class ArmsHolder
{
private:
    TLeft leftHand;
    TRight rightHand;

public:
    // Конструктор
    ArmsHolder(const TLeft& left, const TRight& right);

    // Геттеры
    TLeft getLeft() const;
    TRight getRight() const;

    // Сеттеры
    void setLeft(const TLeft& left);
    void setRight(const TRight& right);
};

// Реализация шаблонных методов 
template <typename TLeft, typename TRight>
ArmsHolder<TLeft, TRight>::ArmsHolder(const TLeft& left, const TRight& right)
    : leftHand(left), rightHand(right)
{
}

template <typename TLeft, typename TRight>
TLeft ArmsHolder<TLeft, TRight>::getLeft() const
{
    return leftHand;
}

template <typename TLeft, typename TRight>
TRight ArmsHolder<TLeft, TRight>::getRight() const
{
    return rightHand;
}

template <typename TLeft, typename TRight>
void ArmsHolder<TLeft, TRight>::setLeft(const TLeft& left)
{
    leftHand = left;
}

template <typename TLeft, typename TRight>
void ArmsHolder<TLeft, TRight>::setRight(const TRight& right)
{
    rightHand = right;
}
