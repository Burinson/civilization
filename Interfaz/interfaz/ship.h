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
};

#endif // SHIP_H
