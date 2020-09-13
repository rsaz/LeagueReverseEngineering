#include "Champions.h"

Champions::Champions(string pName, int health)
	:name(pName), economy(500), level(1)
{
	stats = new Stats;
	stats->SetHealth(health);
	stats->SetMana(280);
}

void Champions::Recall()
{
	std::cout << "Recalling base ...\n";
}

void Champions::BuyItem(Item item)
{
	// Insert item in the champion inventory
	miniInventory.push_back(item);

	// Champion current stats
	int currentHealth = stats->GetHealth();

	// Change player stats
	currentHealth += item.GetStats()->GetHealth();

	// Set the player stats
	stats->SetHealth(currentHealth);
}

vector<Item> Champions::GetItems() const
{
	return miniInventory;
}

Stats* Champions::GetStats()
{
	return stats;
}


