/******************************************
*
* File Name: Card.h
*
* Author: IhFisk <ihfisk42@gmail.com>
*
* Description: Card.cpp header
*
*******************************************
*
* Last Correction:
* 	Author: IhFisk <ihfisk42@gmail.com>
*
*	Date: 17/09/2015
*
******************************************/


#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include <string>


class Card
{
	public :

	Card ();
	Card (int, std::string);
	~Card ();
	
	int getCdNumber ();
	std::string getFamily ();
	
	private :

	int cdNumber;

	std::string family;
};


#endif
