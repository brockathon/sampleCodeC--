#include <iostream>
#include <time.h>//need this to seed the random number generator
#include "Deck.h"
using namespace std;

Deck::Deck()
{
	// create the deck of 52 cards
	int deckIndex = 0;
	for (int suitIndex = CardSuit::Club; suitIndex <= CardSuit::Spade; ++suitIndex)
	{
		for (int rankIndex = CardRank::Two; rankIndex <= CardRank::Ace; ++rankIndex)
		{
			cards[deckIndex++] = new PlayingCard(suitIndex, rankIndex);
		}
	}

	topCardIndex = 0;
}

Deck::~Deck()
{
	for (int i = 0; i < 52; ++i)
	{
		delete cards[i];
		cout << endl << PlayingCard::getCardCounter();
	}
}

PlayingCard* Deck::Deal()
{
	return cards[topCardIndex++];
}

ostream& operator<<(ostream &os, const Deck& deck)
{
	// output the deck of cards
	int deckIndex = 0;
	for (int suitIndex = CardSuit::Club; suitIndex <= CardSuit::Spade; ++suitIndex)
	{
		for (int rankIndex = CardRank::Two; rankIndex <= CardRank::Ace; ++rankIndex)
		{
			os << *deck.cards[deckIndex++] << " ";
		}
	}
	return os;
}

void Deck::Shuffle(int iter)
{
	srand((unsigned int)time(NULL));//seed the random number generator
	// shuffle the deck of cards
		for (int i = 0; i < iter; i++) {
		int randIndex2, randIndex1 = rand() % CardCount;
		do {
			randIndex2 = rand() % CardCount;
		} while (randIndex1 == randIndex2);

		PlayingCard *tmp = cards[randIndex1];
		cards[randIndex1]= cards[randIndex2];
		cards[randIndex2] = tmp;

	}
	topCardIndex = 0;
}