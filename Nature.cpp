#include "Nature.hpp"

namespace PokeData {
Nature::Nature(const std::string &name,int attack,int defense,int spAtk,int spDef, int speed) : name(name),attack(attack),defense(defense),spAtk(spAtk),spDef(spDef),speed(speed) {}

std::string Nature::getName() const {
    return name;
}

int Nature::getAttackMod() const {
    return attack;
}

int Nature::getDefenseMod() const {
    return defense;
}

int Nature::getSpAtkMod() const {
    return spAtk;
}

int Nature::getSpDefMod() const {
    return spDef;
}

int Nature::getSpeedMod() const {
    return speed;
}

const std::array<Nature, 25> natures = {{
    Nature("さみしがり", 11, 9, 10, 10, 10),
    Nature("いじっぱり", 11, 10, 9, 10, 10),
    Nature("やんちゃ", 11, 10, 10, 9, 10),
    Nature("ゆうかん", 11, 10, 10, 10, 9),
    Nature("ずぶとい", 9, 11, 10, 10, 10),
    Nature("わんぱく", 10, 11, 9, 10, 10),
    Nature("のうてんき", 10, 11, 10, 9, 10),
    Nature("のんき", 10, 11, 10, 10, 9),
    Nature("ひかえめ", 9, 10, 11, 10, 10),
    Nature("おっとり", 10, 9, 11, 10, 10),
    Nature("うっかりや", 10, 10, 11, 9, 10),
    Nature("れいせい", 10, 10, 11, 10, 9),
    Nature("おだやか", 9, 10, 10, 11, 10),
    Nature("おとなしい", 10, 9, 10, 11, 10),
    Nature("しんちょう", 10, 10, 9, 11, 10),
    Nature("なまいき", 10, 10, 10, 11, 9),
    Nature("おくびょう", 9, 10, 10, 10, 11),
    Nature("せっかち", 10, 9, 10, 10, 11),
    Nature("ようき", 10, 10, 9, 10, 11),
    Nature("むじゃき", 10, 10, 10, 9, 11),
    Nature("てれや", 10, 10, 10, 10, 10),
    Nature("がんばりや", 10, 10, 10, 10, 10),
    Nature("すなお", 10, 10, 10, 10, 10),
    Nature("きまぐれ", 10, 10, 10, 10, 10),
    Nature("まじめ", 10, 10, 10, 10, 10)
}};

const std::map<std::string, int> natureIndexes = {
    {"さみしがり", 0},{"いじっぱり", 1},{"やんちゃ", 2},{"ゆうかん", 3},{"ずぶとい", 4},
    {"わんぱく", 5},{"のうてんき", 6},{"のんき", 7},{"ひかえめ", 8},{"おっとり", 9},
    {"うっかりや", 10},{"れいせい", 11},{"おだやか", 12},{"おとなしい", 13},{"しんちょう", 14},
    {"なまいき", 15},{"おくびょう", 16},{"せっかち", 17},{"ようき", 18},{"むじゃき", 19},
    {"てれや", 20},{"がんばりや", 21},{"すなお", 22},{"きまぐれ", 23},{"まじめ", 24}
};

}

