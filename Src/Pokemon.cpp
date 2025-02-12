#include "pokemon.h"
#include <iostream>

// Initialize all base stats and set default in-game properties.
Pokemon::Pokemon(int id, const std::string& name, const std::string& type1, const std::string& type2,
                 int total, int hp, int attack, int defense, int spAtk, int spDef, int speed)
    : id(id), name(name), type1(type1), type2(type2), total(total),
      hp(hp), attack(attack), defense(defense), spAtk(spAtk), spDef(spDef), speed(speed),
      level(1), exp(0), caught(false) {}

// Example implementation: Gain XP, level up, and check evolution.
void Pokemon::gainExp(int amount) {
    exp += amount;
    // Simplified leveling logic: level up every 10 XP for demonstration
    while (exp >= level * 10) {
        exp -= level * 10;
        level++;
        std::cout << name << " leveled up to level " << level << "!\n";
        checkEvolution();
    }
}

bool Pokemon::checkEvolution() {
    // For now, a simple check (later, you can use your evolutionData map)
    if (level >= 16) {
        std::cout << name << " evolved! (Placeholder evolution logic)\n";
        return true;
    }
    return false;
}