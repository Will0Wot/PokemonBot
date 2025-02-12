#pragma once
#include <string>

class Pokemon {
public:
    int id;
    std::string name;
    std::string type1;
    std::string type2;
    int total;
    int hp;
    int attack;
    int defense;
    int spAtk;
    int spDef;
    int speed;
    
    // In-game properties (for battle, leveling, etc.)
    int level;
    int exp;
    bool caught;
    
    // Constructor to initialize all the base stats from the CSV.
    Pokemon(int id, const std::string& name, const std::string& type1, const std::string& type2,
            int total, int hp, int attack, int defense, int spAtk, int spDef, int speed);
    
    // In-game methods
    void gainExp(int amount);
    bool checkEvolution();
};