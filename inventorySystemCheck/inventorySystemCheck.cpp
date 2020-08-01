#include <vector>;
#include <string>
#include <iostream>;
#include "items.h";
#include "inventory.h";


int main()
{
	//items
	potato Potato;
	sword Sword;

	
	//inventory
	inventory Inventory;
	inventory *ptrInventory;

	ptrInventory = &Inventory;
	
	//ptrInventory->tileValue = 1;
	
	ptrInventory->addToinv(Potato, Sword);
	//ptrInventory->checkInv();

	ptrInventory->addToinv(Potato, Sword);
	//ptrInventory->checkInv();
	ptrInventory->addToinv(Potato, Sword);

	ptrInventory->addToinv(Potato, Sword);
	
	ptrInventory->tileValue = 2;

	ptrInventory->addToinv(Potato, Sword);

	ptrInventory->addToinv(Potato, Sword);


	std::cout << "  " << std::endl;	
	
	for(int i = 0; i < ptrInventory->items.size(); i++)
	{
		std::cout << "item id: " << ptrInventory->items[i].id << std::endl;
		std::cout << "item name: " << ptrInventory->items[i].name << std::endl;
		std::cout << "item type: " << ptrInventory->items[i].itemType << std::endl;
		std::cout << "item quantity: "  << ptrInventory->items[i].quantity << std::endl;
		std::cout << "  " << std::endl;
	}
	

	

	std::getchar();
	return 0;
}
