#include "Deck.h"

// Constructor

Deck::Deck()
{
	srand(time(nullptr));

	for(std::string family : {"Heart", "Diamond", "Club", "Spade"})
	{
		for(int number {1}; number <= 13; number++)
		{
			deck.push_back(Card {number, family});
			//R.I.P index
		}
	}
}


// Destructor

Deck::~Deck()
{
	// Hello, i'm a destructor, don't hit me please <3
}


// Shuffle card

void Deck::shuffleCards()
{
	
	bool randTest [52] {false};

	std::deque <Card> temporaryDeck {52};
	temporaryDeck = deck;

	
	for(int i {51}; i >= 0; i--)
	{
		int random {};
		
		do
		{
			random = rand() % 52;
		}
		while(randTest [random]);
		
		deck[random] = temporaryDeck[i];
		randTest [random] = true;
	}	
	
}


// Display

void Deck::display()
{
	for(int i{0}; i < 52; i++)
	{
		std::cout << deck[i].getNumber() << " " << deck[i].getFamily() << std::endl;
	}
}


// Deal

Card Deck::deal()
{
	Card dealedCard {deck[51]};
	deck.pop_back();

	return dealedCard;
}


// Put a card in the deck

void Deck::putCard(Card card)
{
	deck.push_front(card);
}
