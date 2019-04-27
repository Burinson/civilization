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
    Civilization firstCivilization();
    Civilization lastCivilization();
    void sortCivilizations();
    bool deleteCivilization(const string target);
    size_t total();
    Civilization *searchCivilization(string target);
    bool civilizationExists(string target);
    void save();
    void recover();

    Civilization& operator[](size_t n) {
        return civilizations[n];
    }
};

#endif // VIDEOGAME_H
