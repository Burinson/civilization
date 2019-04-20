#include "videogame.h"
#include <fstream>
#include <iomanip>
#include <algorithm>

string VideoGame::getUsername() const
{
    return username;
}

void VideoGame::setUsername(const string &value)
{
    username = value;
}

void VideoGame::addCivilization(const Civilization &obj, size_t n)
{
    auto it = civilizations.begin();
    civilizations.insert(it+n, obj);
}

void VideoGame::createCivilizations(const Civilization &obj, size_t n)
{
    civilizations = vector<Civilization>(n, obj);
}

Civilization VideoGame::firstCivilization()
{
    return civilizations.front();
}

Civilization VideoGame::lastCivilization()
{
    return civilizations.back();
}

void VideoGame::sortCivilizations()
{
    sort(civilizations.begin(), civilizations.end());
}

bool VideoGame::deleteCivilization(const string target)
{
    bool found = false;
    for (size_t i = 0; i < total(); ++i) {
        if (civilizations[i].getName() == target) {
            auto it = civilizations.begin();
            civilizations.erase(it+int(i));
            found = true;
            break;
        }
    }
    return found;
}

size_t VideoGame::total()
{
    return civilizations.size();
}

Civilization* VideoGame::searchCivilization(string target)
{
    Civilization* found;
    for (size_t i = 0; i < total(); ++i) {
        if (civilizations[i].getName() == target) {
            found = &civilizations[i];
            break;
        }
    }
    return found;
}

bool VideoGame::civilizationExists(string target)
{
    bool found = false;
    for (size_t i = 0; i < total(); ++i) {
        if (civilizations[i].getName() == target) {
            found = true;
            break;
        }
    }
    return found;
}

VideoGame::VideoGame()
{
    username = "undefined";
}
