#ifndef INCLUDE_POKE_DATA_HPP
#define INCLUDE_POKE_DATA_HPP

#include <array>
#include <map>
#include <string>

#include "BaseStats.hpp"
#include "Pokemon.hpp"
#include "Nature.hpp"

namespace PokeData {
    std::array<Pokemon, 663> createPokemons();
    std::map<std::string, int> createPokemonIndexes();
    const std::array<Pokemon,663> pokemons = createPokemons();
    const std::map<std::string,int> pokemonIndexes = createPokemonIndexes();
}

#endif

