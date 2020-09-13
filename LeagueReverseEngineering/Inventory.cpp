#include "Inventory.h"

vector<Item> Inventory::GetItems() const
{
	return items;
}

void Inventory::AddItem(Item &item)
{
	items.push_back(item);
}