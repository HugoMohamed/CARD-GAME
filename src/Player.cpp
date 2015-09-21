/******************************************
*
* File Name: Player.cpp
*
* Author: IhFisk <ihfisk42@gmail.com>
*
* Description: This is the player class, it contains his hand.
*
*******************************************
*
* Last Correction:
* 	Author: IhFisk <ihfisk42@gmail.com>
*
*	Date: 21/09/2015
*
******************************************/


#include "Player.h"


// Contructor

Player::Player()
{
	
}


// Destructor

Player::~Player()
{
	//I'm Terminator's son <3

}


// Get card

Card Player::getCard(int cardNumber)
{
	return playerDeck[cardNumber];
}
