#include <cassert>
#include <PokeData.hpp>

int main() {
    for(auto &e: PokeData::pokemonIndexes) {
        int idx=e.second;
        assert(PokeData::pokemons[idx].getName() == e.first);
    }

    for(auto &e: PokeData::natureIndexes) {
        int idx=e.second;
        assert(PokeData::natures[idx].getName() == e.first);
    }

    return 0;
}
