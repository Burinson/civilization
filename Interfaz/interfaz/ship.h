#ifndef SHIP_H
#define SHIP_H
#include <iostream>
#include <stack>
#include "warrior.h"
using namespace std;

class Ship
{
private:
    string id;
    double fuel;
    double speed;
    double shield;
    stack<Warrior> warriors;

public:
    Ship();
    string getId() const;
    void setId(const string &value);
    double getFuel() const;
    void setFuel(double value);
    double getSpeed() const;
    void setSpeed(double value);
    double getShield() const;
    void setShield(double value);

    void addWarrior(Warrior &warrior);
    void deleteWarrior();
    Warrior top() const;
    size_t size() const;
    stack<Warrior> getWarriors() const;

    struct comp {
        bool operator()(Ship *s1, Ship *s2) {
            return s1->getSpeed() < s2->getSpeed();
        }
    };
};

#endif // SHIP_H
