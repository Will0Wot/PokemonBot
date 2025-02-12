#include "pokemon.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <iostream>
#include <string>

// Helper function: trim leading and trailing whitespace (optional)
std::string trim(const std::string& str) {
    const char* whitespace = " \t\n\r";
    size_t start = str.find_first_not_of(whitespace);
    size_t end = str.find_last_not_of(whitespace);
    return (start == std::string::npos) ? "" : str.substr(start, end - start + 1);
}

// Function to load Pokémon data from a CSV file.
std::vector<Pokemon> loadPokemonData(const std::string& filename) {
    std::vector<Pokemon> pokemonList;
    std::ifstream file(filename);
    
    if (!file.is_open()) {
        std::cerr << "Error: Could not open CSV file " << filename << std::endl;
        return pokemonList;
    }
    
    std::string line;
    // Read and discard the header line (first line)
    if (!std::getline(file, line)) {
        std::cerr << "Error: File is empty: " << filename << std::endl;
        return pokemonList;
    }
    
    // Process each subsequent line.
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string token;
        std::vector<std::string> tokens;
        
        // Split the line by commas.
        while (std::getline(ss, token, ',')) {
            tokens.push_back(trim(token));
        }
        
        // Ensure there are at least 11 columns (ID, Name, Type1, Type2, Total, HP, Attack, Defense, Sp. Atk, Sp. Def, Speed)
        if (tokens.size() < 11)
            continue;
        
        // Convert tokens to the appropriate types.
        int id = std::stoi(tokens[0]);
        std::string name = tokens[1];
        std::string type1 = tokens[2];
        std::string type2 = tokens[3];
        int total = std::stoi(tokens[4]);
        int hp = std::stoi(tokens[5]);
        int attack = std::stoi(tokens[6]);
        int defense = std::stoi(tokens[7]);
        int spAtk = std::stoi(tokens[8]);
        int spDef = std::stoi(tokens[9]);
        int speed = std::stoi(tokens[10]);
        
        // Create a Pokemon object using a constructor that accepts all these parameters.
        Pokemon p(id, name, type1, type2, total, hp, attack, defense, spAtk, spDef, speed);
        pokemonList.push_back(p);
    }
    
    file.close();
    return pokemonList;
}