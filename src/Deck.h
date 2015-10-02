/******************************************
*
* File Name: Deck.h
*
* Author: IhFisk <ihfisk42@gmail.com>
*
* Description: Deck.cpp header
*
*******************************************
*
* Last Correction:
* 	Author: IhFisk <ihfisk42@gmail.com>
*
*	Date: 17/09/2015
*
******************************************/


#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED

#include <iostream>
#include <deque>
#include <cstdlib>
#include <ctime>
#include "Card.h"

class Deck
{
	public :
	
	Deck();
	~Deck();
	
	void display();
	void shuffleCards();
	void putCard(Card);
	Card deal();	
	
	private :

	std::deque <Card> deck;
};


#endif
