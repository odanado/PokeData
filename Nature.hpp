#ifndef INCLUDE_NATURE_HPP
#define INCLUDE_NATURE_HPP

#include <string>
#include <array>
#include <map>

namespace PokeData {
class Nature {
    const std::string name;
    const int attack,defense,spAtk,spDef,speed;
public:
    Nature(const std::string &name="",int attack=10,int defense=10,int spAtk=10,int spDef=10, int speed=10);
    std::string getName() const;
    int getAttackMod() const;
    int getDefenseMod() const;
    int getSpAtkMod() const;
    int getSpDefMod() const;
    int getSpeedMod() const;
};
extern const std::array<Nature, 25> natures;
extern const std::map<std::string, int> natureIndexes;
}

#endif

