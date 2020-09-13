#include "Item.h"

Item::Item(string pName, string pDesc, int pCostBuy, int pCostSell)
	: name(pName), description(pDesc), costBuy(pCostBuy), costSell(pCostSell)
{
	stats = new Stats;
}

ostream& operator<<(ostream& os, Item& item)
{
	os << "Item name: "<< item.name << "\nDescription: " << item.description << "\nBuy: " << item.costBuy << "\nSell: " << item.costSell << std::endl;
	return os;
}