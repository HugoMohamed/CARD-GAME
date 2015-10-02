/******************************************
*
* File Name: Muck.h
*
* Author: IhFisk <ihfisk42@gmail.com>
*
* Description: Muck.cpp header
*
*******************************************
*
* Last Correction:
* 	Author: IhFisk <ihfisk42@gmail.com>
*
*	Date: 17/09/2015
*
******************************************/


#ifndef MUCK_H_INCLUDED
#define MUCK_H_INCLUDED

#include "Deck.h"

class Muck
{
	public :
	
	Muck();
	~Muck();
	
	void addCard(Card);
	Card removeCard();

	private :

	std::deque <Card> muckDeck;
	Card putCard;
};



#endif
