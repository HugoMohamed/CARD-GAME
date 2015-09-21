/******************************************
*
* File Name: Card.cpp
*
* Author: IhFisk <ihfisk42@gmail.com>
*
* Description: The card class just create card, which contains a number (between 1 and 13) and a family (Heart, Club, Diamond, Spade)
*
*******************************************
*
* Last Correction:
* 	Author: IhFisk <ihfisk42@gmail.com>
*
*	Date: 17/09/2015
*
******************************************/


#include "Card.h"

//constructor

Card::Card ()
{
	cdNumber = 0;
	family = "";
}

Card::Card (int value, std::string familyValue)
{
	cdNumber = value;
	family = familyValue;
}

//destructor

Card::~Card()
{

}

//get list

int Card::getCdNumber ()
{
	return cdNumber;
}

std::string Card::getFamily ()
{
	return family;
}
