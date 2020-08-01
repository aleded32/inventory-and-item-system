#pragma once


class item 
{
public:

	int id;
	std::string name;
	std::string itemType;
	int quantity;


	item();
	~item();

private:

};





class potato : public item
{
public:

	potato();
	~potato();

private:

};


item::item()
{
	this->id =  id;
	this->name = name;
	this->itemType = itemType;
	this->quantity = quantity;
}

item::~item()
{

}



potato::potato()
{
	this->id = 1;
	this->name = "potato";
	this->itemType = "vegatation";
	this->quantity = 0;

}

potato::~potato()
{

}

class sword : public item
{
public:

	sword();
	~sword();

private:

};

sword::sword()
{
	this->id = 2;
	this->name = "sword";
	this->itemType = "weapon";
	this->quantity = 0;

}

sword::~sword()
{

}



