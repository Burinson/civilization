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

void VideoGame::save()
{
    ofstream file("civilizations.txt", ios::out);

    for(size_t i = 0; i < civilizations.size(); ++i) {
        Civilization &c = civilizations[i];
        file << c.getName() << endl;
        file << c.getX() << endl;
        file << c.getY() << endl;
        c.save();
    }
    file.close();
}

void VideoGame::recover()
{
    ifstream file("civilizations.txt");
    size_t pos(0);
    if(file.is_open()) {
        while(!file.eof()) {
            string line;
            Civilization c;

            getline(file, line);
            if (file.eof())
                break;
            c.setName(line);


            ifstream village(line + ".txt");
            if(village.is_open()) {
                while(!village.eof()) {
                    string vline;
                    Villager v;

                    getline(village, vline);
                    if (village.eof())
                        break;
                    v.setNombre(vline);

                    getline(village, vline);
                    v.setEdad(stoi(vline));

                    getline(village, vline);
                    v.setGender(vline);

                    getline(village, vline);
                    v.setHealth(stoi(vline));

                    c.push_villager_back(v);
                }
            }

            getline(file, line);
            c.setX(stoi(line));

            getline(file, line);
            c.setY(stoi(line));

            addCivilization(c, pos++);
        }
    }


}

VideoGame::VideoGame()
{
    username = "undefined";
}
