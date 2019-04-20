#include "villager.h"

string Villager::getNombre() const
{
    return nombre;
}

void Villager::setNombre(const string &value)
{
    nombre = value;
}

int Villager::getEdad() const
{
    return edad;
}

void Villager::setEdad(int value)
{
    edad = value;
}

string Villager::getGender() const
{
    return gender;
}

void Villager::setGender(const string &value)
{
    gender = value;
}

int Villager::getHealth() const
{
    return health;
}

void Villager::setHealth(int value)
{
    health = value;
}

Villager::Villager()
{

}
