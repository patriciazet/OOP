#include "Shape.hpp"

//konstruktor bezparametrowy - moze byc pusty
//potrzebny, zeby utworzyc obiekt Rectangle rect
//gdybysmy nie mieli konstruktora parametryzowanego - ten by sie sam wygenerowal
Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int a, int b)
{
    this->a = a;
    this->b = b;
}

void Rectangle::setDimensions(int x, int y)
{
    a = x;
    b = y;
}

int Rectangle::getField()
{
    return a * b;
}

int Rectangle::getCircuit()
{
    return (2 * a) + (2 * b);
}
