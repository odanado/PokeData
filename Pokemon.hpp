#ifndef INCLUDE_POKEMON_HPP
#define INCLUDE_POKEMON_HPP

#include <string>
#include <map>
#include <array>
#include "BaseStats.hpp"

namespace PokeData {

class Pokemon {
    const std::string name;
    const BaseStats baseStats;
public:
    Pokemon(const std::string &name="",const BaseStats &baseStats=BaseStats());
    std::string getName() const;
    BaseStats getBaseStats() const;
};

extern const std::array<Pokemon,663> pokemons;
extern const std::map<std::string,int> pokemonIndexes;

}

#endif

