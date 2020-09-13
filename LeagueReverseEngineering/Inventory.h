#pragma once
#include <vector>

#include "Item.h"

using std::vector;

class Inventory
{
private:
    vector<Item> items;

public:
    vector<Item> GetItems() const;
    void AddItem(Item& item);
};