#include "pokemon.h"
#include "Pokemon_cvs.cpp"
#include <vector>

// Global container for all Pokémon loaded from the CSV.
std::vector<Pokemon> pokemonDatabase;

// A function to initialize the database at startup.
void initializePokemonDatabase(const std::string& csvFile) {
    pokemonDatabase = loadPokemonData(csvFile);
}