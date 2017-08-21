
#include <iostream>
using namespace std;
#include "PlayingCard.h"
int PlayingCard::cardCounter = 0;

//PlayingCard::PlayingCard()
//{ }

PlayingCard::PlayingCard(int s, int r)
	: suit(static_cast<CardSuit>(s)), rank(static_cast<CardRank>(r))
{
	++cardCounter;
}

PlayingCard::~PlayingCard()
{ 
	--cardCounter;
}

int PlayingCard::getCardCounter()
{
	return cardCounter;
}

string PlayingCard::RankStr(CardRank r)
{
	switch (r) {
	case CardRank::Two:   return string("Two"); 
	case CardRank::Three: return string("Three");
	case CardRank::Four:  return string("Four"); 
	case CardRank::Five:  return string("Five"); 
	case CardRank::Six:   return string("Six"); 
	case CardRank::Seven: return string("Seven"); 
	case CardRank::Eight: return string("Eight"); 
	case CardRank::Nine:  return string("Nine"); 
	case CardRank::Ten:   return string("Ten"); 
	case CardRank::Jack:  return string("Jack"); 
	case CardRank::Queen: return string("Queen"); 
	case CardRank::King:  return string("King"); 
	case CardRank::Ace:   return string("Ace"); 
	default: return string("..?..");
	}
}

string PlayingCard::SuitStr(CardSuit s)
{
	switch (s) {
	case CardSuit::Club:    return string("Club");
	case CardSuit::Diamond: return string("Diamond"); 
	case CardSuit::Heart:   return string ("Heart"); 
	case CardSuit::Spade:   return string("Spade");
	default: return string("..?..");
	}
}

ostream& operator<<(ostream& os, const PlayingCard& c) {
	// output a playing card
	cout << PlayingCard::RankStr(c.rank).c_str() << ":" << PlayingCard::SuitStr(c.suit).c_str();
	return os;
}