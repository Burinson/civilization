#ifndef CIVILIZATION_H
#define CIVILIZATION_H
#include <iostream>
using namespace std;

class Civilization
{
    string name;
    int x;
    int y;

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
};

#endif // CIVILIZACION_H
