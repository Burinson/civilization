#include "ship.h"

string Ship::getId() const
{
    return id;
}

void Ship::setId(const string &value)
{
    id = value;
}

double Ship::getFuel() const
{
    return fuel;
}

void Ship::setFuel(double value)
{
    fuel = value;
}

double Ship::getSpeed() const
{
    return speed;
}

void Ship::setSpeed(double value)
{
    speed = value;
}

double Ship::getShield() const
{
    return shield;
}

void Ship::setShield(double value)
{
    shield = value;
}

void Ship::addWarrior(Warrior &warrior)
{
    warriors.push(warrior);
}

void Ship::deleteWarrior()
{
    warriors.pop();
}

Warrior Ship::top() const
{
    return warriors.top();
}

Ship::Ship()
{
    this->speed = 0;
    this->shield = 100;
}