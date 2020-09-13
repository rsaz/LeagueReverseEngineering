// LeagueReverseEngineering.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Inventory.h"
#include "Item.h"
#include "Champions.h"
#include "Tristana.h"

int main()
{
    // Creating inventory
    Inventory* inventory = new Inventory;

    Item* doransBlade = new Item("Doran's Blade", "+8 attack damage, +80 health, +3% life steal", 450, 180);
    doransBlade->GetStats()->SetPhysicalDamage(8);
    doransBlade->GetStats()->SetHealth(80);
    doransBlade->GetStats()->SetLifeSteal(3);

    Item* healthPotion = new Item("Health Potion", "Regenerates 5 health every half-second for + 15 seconds, restoring a total of 150 health", 50, 20);
    healthPotion->GetStats()->SetHealth(5);

    inventory->AddItem(*doransBlade); // Item 0
    inventory->AddItem(*healthPotion); // Item 1

    std::cout << "============ Items from Game Inventory\n";
    // Get all items inside of the inventory system
    for (Item i : inventory->GetItems())
    {
        std::cout << i << std::endl;
    }

    // Creating a champion
    Champions* tristana = new Tristana("Tristana", 500);

    // Printing tristana health stats before adding an item
    std::cout << "Tristana Health: " << tristana->GetStats()->GetHealth() << "\n\n";

    // Adding the item in the champion inventory
    tristana->BuyItem(inventory->GetItems()[0]);
    tristana->BuyItem(inventory->GetItems()[0]);
    tristana->BuyItem(inventory->GetItems()[1]);

    std::cout << "============ Items from Tristana Inventory\n";

    for (Item i : tristana->GetItems())
    {
        std::cout << i << std::endl;
    }

    // Working with champion stats
    std::cout << "Tristana Health: " << tristana->GetStats()->GetHealth();

    // Deallocating memory
    delete tristana;
    delete doransBlade;
    delete healthPotion;
    delete inventory;

    
    
}
