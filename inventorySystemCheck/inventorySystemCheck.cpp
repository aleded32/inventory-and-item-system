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
	//std::cin >> Inventory.tileValue;
	Inventory.addToinv(Potato, Sword);

	

	std::getchar();
	return 0;
}
