#pragma once

#include <vector>
#include <string>
#include "Stats.h"
#include "Item.h"

using std::string;
using std::vector;

class Champions
{
private:
    string name;
    int economy;
    short level; // max level 18
    // stats
    Stats *stats;
    vector<Item> miniInventory;

public:
    Champions() {} // Initialize the stats object
    Champions(string pName, int health);

    // Abilities generally binded to QWER
    void virtual PassiveAbility() = 0;
    void virtual Ability1() = 0;
    void virtual Ability2() = 0;
    void virtual Ability3() = 0;
    void virtual Ability4() = 0;

    // Speels generally used with D and F bind
    void virtual Spells1() = 0;
    void virtual Spells2() = 0;

    // Recall
    void Recall();

    Stats* GetStats();

    // Buy items to the mini inventory
    void BuyItem(Item item);

    vector<Item> GetItems() const;

};