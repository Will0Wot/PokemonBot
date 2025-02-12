#include "Evolution.h"

// Define the evolution map
std::map<std::string, std::pair<std::string, int>> evolutionMap = {
    {"Bulbasaur", {"Ivysaur", 16}},
    {"Ivysaur", {"Venusaur", 32}},
    {"Charmander", {"Charmeleon", 16}},
    {"Charmeleon", {"Charizard", 36}},
    {"Squirtle", {"Wartortle", 16}},
    {"Wartortle", {"Blastoise", 36}},
    {"Caterpie", {"Metapod", 7}},
    {"Metapod", {"Butterfree", 10}},
    {"Weedle", {"Kakuna", 7}},
    {"Kakuna", {"Beedrill", 10}},
    {"Pidgey", {"Pidgeotto", 18}},
    {"Pidgeotto", {"Pidgeot", 36}},
    {"Rattata", {"Raticate", 20}},
    {"Spearow", {"Fearow", 20}},
    {"Ekans", {"Arbok", 22}},
    {"Pikachu", {"Raichu", -1}}, // Evolution by Thunder Stone
    {"Sandshrew", {"Sandslash", 22}},
    {"Nidoran♀", {"Nidorina", 16}},
    {"Nidorina", {"Nidoqueen", -1}}, // Evolution by Moon Stone
    {"Nidoran♂", {"Nidorino", 16}},
    {"Nidorino", {"Nidoking", -1}}, // Evolution by Moon Stone
    {"Clefairy", {"Clefable", -1}},   // Evolution by Moon Stone
    {"Vulpix", {"Ninetales", -1}},    // Evolution by Fire Stone
    {"Jigglypuff", {"Wigglytuff", -1}},// Evolution by Moon Stone
    {"Zubat", {"Golbat", 22}},
    {"Oddish", {"Gloom", 21}},
    {"Gloom", {"Vileplume", -1}},     // Evolution by Leaf Stone
    {"Paras", {"Parasect", 24}},
    {"Venonat", {"Venomoth", 31}},
    {"Diglett", {"Dugtrio", 26}},
    {"Meowth", {"Persian", 28}},
    {"Psyduck", {"Golduck", 33}},
    {"Mankey", {"Primeape", 28}},
    {"Growlithe", {"Arcanine", -1}},  // Evolution by Fire Stone
    {"Poliwag", {"Poliwhirl", 25}},
    {"Poliwhirl", {"Poliwrath", -1}},  // Evolution by Water Stone
    {"Abra", {"Kadabra", 16}},
    {"Kadabra", {"Alakazam", -2}},    // Evolution by Trading
    {"Machop", {"Machoke", 28}},
    {"Machoke", {"Machamp", -2}},     // Evolution by Trading
    {"Bellsprout", {"Weepinbell", 21}},
    {"Weepinbell", {"Victreebel", -1}},// Evolution by Leaf Stone
    {"Tentacool", {"Tentacruel", 30}},
    {"Geodude", {"Graveler", 25}},
    {"Graveler", {"Golem", -2}},       // Evolution by Trading
    {"Ponyta", {"Rapidash", 40}},
    {"Slowpoke", {"Slowbro", 37}},
    {"Magnemite", {"Magneton", 30}},
    {"Doduo", {"Dodrio", 31}},
    {"Seel", {"Dewgong", 34}},
    {"Grimer", {"Muk", 38}},
    {"Shellder", {"Cloyster", -1}},    // Evolution by Water Stone
    {"Gastly", {"Haunter", 25}},
    {"Haunter", {"Gengar", -2}},       // Evolution by Trading
    {"Onix", {"Steelix", -2}},         // Evolution by Trading + Metal Coat (Gen 2)
    {"Drowzee", {"Hypno", 26}},
    {"Krabby", {"Kingler", 28}},
    {"Voltorb", {"Electrode", 30}},
    {"Exeggcute", {"Exeggutor", -1}},   // Evolution by Leaf Stone
    {"Cubone", {"Marowak", 28}},
    {"Koffing", {"Weezing", 35}},
    {"Rhyhorn", {"Rhydon", 42}},
    {"Horsea", {"Seadra", 32}},
    {"Goldeen", {"Seaking", 33}},
    {"Staryu", {"Starmie", -1}},       // Evolution by Water Stone
    {"Magikarp", {"Gyarados", 20}},
    {"Eevee", {"Vaporeon", -1}},        // Evolution by Water Stone
    {"Eevee", {"Jolteon", -1}},         // Evolution by Thunder Stone
    {"Eevee", {"Flareon", -1}},         // Evolution by Fire Stone
    {"Omanyte", {"Omastar", 40}},
    {"Kabuto", {"Kabutops", 40}},
    {"Dratini", {"Dragonair", 30}},
    {"Dragonair", {"Dragonite", 55}}
};

std::string canEvolve(const std::string& name, int level) {
    // Check if the Pokémon is in the evolution map
    if (evolutionMap.find(name) != evolutionMap.end()) {
        // Retrieve the evolution data pair for this Pokémon
        std::pair<std::string, int> evolutionData = evolutionMap[name];
        // If the current level meets or exceeds the required level, return the evolved form's name
        if (level >= evolutionData.second) {
            return evolutionData.first;
        }
    }
    return ""; // Return an empty string if no evolution is possible
}