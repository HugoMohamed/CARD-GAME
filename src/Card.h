#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include <string>

class Card
{
	public :

	Card ();
	Card (int, std::string);
	~Card ();
	
	int getNumber ();
	std::string getFamily ();
	
	private :

	int number;

	std::string family;
};


#endif
