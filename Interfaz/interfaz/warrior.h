#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
using namespace std;


class Warrior
{
private:
    string id;
    size_t health;
    double strength;
    double shield;
    string type;
public:
    Warrior();
    string getId() const;
    void setId(const string &value);
    size_t getHealth() const;
    void setHealth(const size_t &value);
    double getStrength() const;
    void setStrength(double value);
    double getShield() const;
    void setShield(double value);
    string getType() const;
    void setType(const string &value);
};

#endif // WARRIOR_H
