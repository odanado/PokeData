#include <cassert>
#include <PokeData.hpp>

int main() {
    for(auto &e: PokeData::pokemonIndexes) {
        int idx=e.second;
        assert(PokeData::pokemons[idx].getName() == e.first);
    }

    return 0;
}
