#ifndef VIDEOGAME_H
#define VIDEOGAME_H
#include <iostream>
#include "civilization.h"
#include <vector>
using namespace std;

class VideoGame
{
    string username;
    vector<Civilization> civilizations;
public:
    VideoGame();
    string getUsername() const;
    void setUsername(const string &value);
    void addCivilization(const Civilization &obj, size_t n);
    void createCivilizations(const Civilization &obj, size_t n);
    void firstCivilization();
    void lastCivilization();
    void sortCivilizations();
    void deleteCivilization(const string target);
    void total();
};

#endif // VIDEOGAME_H
