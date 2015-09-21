/******************************************
*
* File Name: Muck.cpp
*
* Author: IhFisk <ihfisk42@gmail.com>
*
* Description: This is the muck, you can only put cards in.
*
*******************************************
*
* Last Correction:
* 	Author: IhFisk <ihfisk42@gmail.com>
*
*	Date: 17/09/2015
*
******************************************/


#include "Muck.h"


// Constructor

Muck::Muck()
{
	
}


// Destructor

Muck::~Muck()
{
	
}


// Add Card

void Muck::addCard(Card putCard)
{
	muckDeck.push_front(putCard);
}


// Remove card

Card Muck::removeCard()
{
	Card removedCard {muckDeck[51]};
	muckDeck.pop_back();

	return removedCard;
}
