#ifndef CIVILIZATION_H
#define CIVILIZATION_H
#include <iostream>
#include <list>
#include "villager.h"
#include "ship.h"
using namespace std;

class Civilization
{
    string name;
    int x;
    int y;
    list<Villager> villagers;
    list<Ship*> port;

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

    Ship *operator[](int n) {
        auto it = port.begin();
        advance(it, n);
        Ship *s = *it;
        return s;
    }

    void addShip(Ship *ship);
    size_t shipSize() const;
    Ship* getShip(string &id) const;
    bool shipExists(string &id) const;
    bool deleteShip(string &id);
    bool deleteShip(double fuel);
};

#endif // CIVILIZACION_H
//cins
