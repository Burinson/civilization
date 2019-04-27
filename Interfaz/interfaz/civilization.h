#ifndef CIVILIZATION_H
#define CIVILIZATION_H
#include <iostream>
#include <list>
#include "villager.h"
using namespace std;

class Civilization
{
    string name;
    int x;
    int y;
    list<Villager> villagers;

public:
    Civilization();
    Civilization(const string &name, int x, int y);
    string getName() const;
    void setName(const string &value);
    int getX() const;
    void setX(int value);
    int getY() const;
    void setY(int value);

    bool operator<(Civilization &c) {
        return x < c.getX();
    }

    void push_villager_front(Villager &v);
    void push_villager_back(Villager &v);
    bool delete_villager(const string &target);
    bool delete_villagers(const int health);
    bool delete_villager_age();
    void sort_villagers_name();
    void sort_villagers_age();
    void sort_villagers_health();
    size_t villager_size();
    void save();

    Villager operator[](size_t n) {
        auto it = villagers.begin();
        advance(it, n);
        Villager v = *it;
        return v;
    }
};

#endif // CIVILIZACION_H
//cins
