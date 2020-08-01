#include "items.h"


class inventory
{
public:

	
	std::vector<item>items;
	int tileValue;
	int capacity;

	void addToinv(potato& Potato, sword& Sword);

	inventory();
	~inventory();

private:
};


inventory::inventory()
{
	capacity = 10;
	tileValue = 1;
}

inventory::~inventory()
{

}

void inventory::addToinv(potato& Potato, sword& Sword)
{
	switch (tileValue)
	{
		case 1:
			items.push_back(sword(Sword));
			break;
		case 2:
			items.push_back(potato(Potato));
			break;
	}

	for(int i = 0; i < items.size(); i++)
	{
		std::cout << items[i].id << std::endl; 
		std::cout << items[i].itemType << std::endl; 
		std::cout << items[i].name << std::endl;
	}
}

