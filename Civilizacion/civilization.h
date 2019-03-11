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
    string getName() const;
    void setName(const string &value);
    int getX() const;
    void setX(int value);
    int getY() const;
    void setY(int value);
};

#endif // CIVILIZACION_H
