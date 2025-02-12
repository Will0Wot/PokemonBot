#ifndef EVOLUTION_H
#define EVOLUTION_H

#include <map>
#include <string>
#include <utility>

// Evolution Data: {Base Pokémon -> (Evolved Form, Required Level)}
extern std::map<std::string, std::pair<std::string, int>> evolutionMap;

// Function to check if a Pokémon can evolve
std::string canEvolve(const std::string& name, int level);

#endif // EVOLUTION_H