#include "Card.h"

//constructor

Card::Card ()
{
	number = 0;
	family = "";
}

Card::Card (int number, std::string family)
{
	this->number = number;
	this->family = family;
}

//destructor

Card::~Card()
{

}

//get list

int Card::getNumber ()
{
	return number;
}

std::string Card::getFamily ()
{
	return family;
}
