#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Deck.h"

class Player
{
	public :
	
	Player();
	~Player();
	
	int winChips();
	int bet();

	private :
	
	int chips {};
	std::deque playerDeck;
};


#endif
