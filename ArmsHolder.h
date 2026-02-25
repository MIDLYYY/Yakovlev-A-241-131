#pragma once

// Шаблонный класс для хранения двух предметов (например, оружие в левой и правой руке)
template <typename TLeft, typename TRight>
class ArmsHolder
{
private:
    TLeft leftHand;
    TRight rightHand;

public:
    // Конструктор (теперь параметры передаются по значению, а не по константной ссылке)
    ArmsHolder(TLeft left, TRight right);

    // Геттеры (возвращают копии, не помечены const)
    TLeft getLeft();
    TRight getRight();

    // Сеттеры (принимают по значению)
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
