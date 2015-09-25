#ifndef INCLUDE_POKEMON_HPP
#define INCLUDE_POKEMON_HPP

#include <string>
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

}

#endif

