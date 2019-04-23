#ifndef VILLAGER_H
#define VILLAGER_H
#include <iostream>
using namespace std;

class Villager
{
    string nombre;
    int edad;
    string gender;
    int health;
public:
    Villager();
    string getNombre() const;
    void setNombre(const string &value);
    int getEdad() const;
    void setEdad(int value);
    string getGender() const;
    void setGender(const string &value);
    int getHealth() const;
    void setHealth(int value);

    bool operator<(Villager &v) {
        return  nombre < v.getNombre();
    }

};

#endif // VILLAGER_H
