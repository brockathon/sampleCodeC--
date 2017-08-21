
#pragma once
#include <ostream>
using namespace std;
#include "PlayingCard.h"

const int FiveCardDrawCt = 5;

class Hand
{
	friend ostream& operator<<(ostream &os, const Hand& hand);

private:
	PlayingCard *handCards[FiveCardDrawCt];
	int nextCard;

public:
	Hand();
	~Hand();

	void Dealt(PlayingCard *newCard);
};

