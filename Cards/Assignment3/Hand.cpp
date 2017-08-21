#include <iostream>
#include <ostream>
using namespace std;
#include "Hand.h"

Hand::Hand()
{
	nextCard = 0;
}

Hand::~Hand() 
{ }

void Hand::Dealt(PlayingCard *newCard)
{
	if (nextCard >= FiveCardDrawCt)
	{
		exit(-1);
	}
	handCards[nextCard++] = newCard;
}

ostream& operator<<(ostream &os, const Hand& hand)
{
	// output the cards in a hand
	for (int i = 0; i < hand.nextCard; ++i)
	{
		os << *hand.handCards[i] << " ";
	}
	return os;
}