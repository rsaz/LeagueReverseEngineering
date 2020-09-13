#pragma once
#include <string>
#include "Champions.h"
class Tristana :
    public Champions
{
public:
    Tristana() {} // Initialize the stats object
    Tristana(std::string pName, int health);

    // Abilities generally binded to QWER
    void PassiveAbility() override;
    void Ability1() override;
    void Ability2() override;
    void Ability3() override;
    void Ability4() override;

    // Speels generally used with D and F bind
    void Spells1() override;
    void Spells2() override;
};

