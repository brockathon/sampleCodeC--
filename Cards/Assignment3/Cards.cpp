
#include <iostream>

using namespace std;
#include "Deck.h"
#include "Hand.h"

int main(int argc, char *argv[]) {


	Deck theDeck; // initialize theDeck and populate with PlayingCards

	cout << "..." << endl;
	cout << theDeck << "..." << endl; // display the PlayingCards in theDeck
	theDeck.Shuffle(); // rearange the PlayingCards in theDeck
	cout << theDeck << "..." << endl; // display the PlayingCard in theDeck post Shuffle

	Hand hand[4]; // fill for Hands with PlayingCards from theDeck

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			hand[j].Dealt(theDeck.Deal());
		}
	}

	for (int i = 0; i < 4; i++) // display the handCards
	{
		cout << "hand " << i << ": " << hand[i] << endl;
	}

	cout << endl << "Number of playing cards at this time: " << PlayingCard::getCardCounter() << endl;//this is to keep track of the number of playing cards constructed I also count them down as they are destroyed

	return 0;
}

