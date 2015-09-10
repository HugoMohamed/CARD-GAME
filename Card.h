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
