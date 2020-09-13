#include "Tristana.h"

Tristana::Tristana(std::string name, int health) : Champions(name, health) {}

void Tristana::PassiveAbility() { std::cout << "Passive Ability\n"; }

void Tristana::Ability1() { std::cout << "Ability 1\n"; };
void Tristana::Ability2() { std::cout << "Ability 2\n"; };
void Tristana::Ability3() { std::cout << "Ability 3\n"; };
void Tristana::Ability4() { std::cout << "Ability 4\n"; };

// Speels generally used with D and F bind
void Tristana::Spells1() {};
void Tristana::Spells2() {};