/******************************************
*
* File Name: Board.cpp
*
* Author: IhFisk <ihfisk42@gmail.com>
*
* Description: This is the Board of the game, it contains cards, and possibility to add and remove cards
*
*******************************************
*
* Last Correction:
* 	Author: IhFisk <ihfisk42@gmail.com>
*
*	Date: 17/09/2015
*
******************************************/


#include "Board.h"


// Constructor

Board::Board()
{
	
}


// Destructor

Board::~Board()
{
	
}


// Add Card

void Board::addCard(Card putCard)
{
	boardDeck.push_front(putCard);
}


// Remove card

Card Board::removeCard()
{
	Card removedCard {boardDeck[51]};
	boardDeck.pop_back();

	return removedCard;
}


// Get card

Card Board::getCard(int cardNumber)
{
	return boardDeck[cardNumber];
}
