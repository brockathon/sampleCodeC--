
#pragma once

#include <iostream>
#include "PlayingCard.h"

const int CardCount = 52;
class Deck
{
	friend ostream& operator<<(ostream &os, const Deck& deck);

private:
	PlayingCard *cards[CardCount]; 
	int topCardIndex;

public:
	
	
	Deck();
	~Deck();

	PlayingCard* Deal();
	void Shuffle(int iter = 500);
};

