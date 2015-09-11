#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED

#include <iostream>
#include <deque>
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
