#include "civilization.h"
#include <algorithm>
#include <fstream>
#include <iomanip>

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

void Civilization::push_villager_front(Villager &v)
{
    villagers.push_front(v);
}

void Civilization::push_villager_back(Villager &v)
{
    villagers.push_back(v);
}

bool Civilization::delete_villager(const string &target)
{
    bool found = false;
    for (size_t i = 0; i < villagers.size(); ++i) {
        auto iter = villagers.begin();
        advance(iter, i);
        auto x = *iter;
        if (x.getNombre() == target) {
            villagers.erase(iter);
            found = true;
            break;
        }
    }
    return found;
}

bool Civilization::delete_villager_age()
{
    bool found = false;
    for(size_t i = 0; i < villager_size(); ++i) {
        auto iter = villagers.begin();
        advance(iter, i);
        auto x = *iter;
        if (x.getEdad() >= 60) {
            villagers.erase(iter);
            i--;
            found = true;
        }
    }
    return found;
}

void Civilization::sort_villagers_name()
{
    villagers.sort();
}

void Civilization::sort_villagers_age()
{
    villagers.sort([](const Villager &v1, const Villager &v2){return v1.getEdad() > v2.getEdad(); });
}

void Civilization::sort_villagers_health()
{
    villagers.sort([](const Villager &v1, const Villager &v2){return v1.getHealth() > v2.getHealth(); });
}

bool Civilization::delete_villagers(const int health)
{
    bool found = false;
    for(size_t i = 0; i < villager_size(); ++i) {
        auto iter = villagers.begin();
        advance(iter, i);
        auto x = *iter;
        if (x.getHealth() < health) {
            villagers.erase(iter);
            i--;
            found = true;
        }
    }
    return found;
}

size_t Civilization::villager_size()
{
    return villagers.size();
}

void Civilization::save()
{
    ofstream file(getName() + ".txt", ios::out);

    for(auto it = villagers.begin(); it != villagers.end(); ++it) {
        Villager &v = *it;
        file << v.getNombre() << endl;
        file << v.getEdad() << endl;
        file << v.getGender() << endl;
        file << v.getHealth() << endl;
    }
    file.close();
}

void Civilization::addShip(Ship *ship)
{
    port.push_back(ship);
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
