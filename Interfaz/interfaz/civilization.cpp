#include "civilization.h"

string Civilization::getName() const
{
    return name;
}

void Civilization::setName(const string &value)
{
    name = value;
}

int Civilization::getX() const
{
    return x;
}

void Civilization::setX(int value)
{
    x = value;
}

int Civilization::getY() const
{
    return y;
}

void Civilization::setY(int value)
{
    y = value;
}

Civilization::Civilization()
{

}

Civilization::Civilization(const string &name, int x, int y)
{
    this->name = name;
    this->x = x;
    this->y = y;
}
