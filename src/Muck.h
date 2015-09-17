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
