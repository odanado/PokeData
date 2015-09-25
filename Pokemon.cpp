#include "Pokemon.hpp"

namespace PokeData {

Pokemon::Pokemon(const std::string &name,const BaseStats &baseStats) : name(name),baseStats(baseStats) { }

std::string Pokemon::getName() const {
    return name;
}

BaseStats Pokemon::getBaseStats() const {
    return baseStats;
}

}

