#include "items.h"


class inventory
{
public:

	
	std::vector<item>items;
	int tileValue;
	int capacity;

	void addToinv(potato& Potato, sword& Sword);
	void checkInv();

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
				Sword.quantity ++;
				items.push_back(sword(Sword));
				
				break;
			case 2:
				Potato.quantity++;
				items.push_back(potato(Potato));
				break;
		}

	
		//std::cout << " " << std::endl;
	

	
	
}

void inventory::checkInv()
{
	
}
