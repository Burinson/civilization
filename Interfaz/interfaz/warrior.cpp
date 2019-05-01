#include "warrior.h"

string Warrior::getId() const
{
    return id;
}

void Warrior::setId(const string &value)
{
    id = value;
}

size_t Warrior::getHealth() const
{
    return health;
}

void Warrior::setHealth(const size_t &value)
{
    health = value;
}

double Warrior::getStrength() const
{
    return strength;
}

void Warrior::setStrength(double value)
{
    strength = value;
}

double Warrior::getShield() const
{
    return shield;
}

void Warrior::setShield(double value)
{
    shield = value;
}

string Warrior::getType() const
{
    return type;
}

void Warrior::setType(const string &value)
{
    type = value;
}

Warrior::Warrior()
{

}
