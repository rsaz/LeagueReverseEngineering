#pragma once
#include <iostream>
#include "Stats.h"

using std::string;
using std::ostream;

class Item
{
private:
    // Create item ID, create active and passive item
    // Create timer for active item
    // when champion die, active items get refreshed
    string name;
    string description;
    int costBuy;
    int costSell;
    Stats *stats;

public:
    Item() {};
    Item(string pName, string pDesc, int pCostBuy, int pCostSell);

    Stats* GetStats() const { return stats; };

    friend ostream& operator<<(ostream& os, Item& item);

};

