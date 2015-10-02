/******************************************
*
* File Name: Board.h
*
* Author: IhFisk <ihfisk42@gmail.com>
*
* Description: Board.cpp header
*
*******************************************
*
* Last Correction:
* 	Author: IhFisk <ihfisk42@gmail.com>
*
*	Date: 17/09/2015
*
******************************************/


#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include "Deck.h"

class Board
{
	public :
	
	Board();
	~Board();
	
	void addCard(Card);
	Card removeCard();
	Card getCard(int);

	private :

	std::deque <Card> boardDeck;
	Card putCard;
};



#endif
