#include "Player.h"

// Contructor

Player::Player()
{
	chips = 1000;
}


// Destructor

Player::~Player()
{
	//I'm Terminator's son <3

}


// Change chips

void Player::changeChips(int changedChips)
{
	chips += changedChips;
}
