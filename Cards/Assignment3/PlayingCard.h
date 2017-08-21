
#pragma once
#include <ostream>
using namespace std;

enum CardSuit { Club, Diamond, Heart, Spade };
enum CardRank { Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace };

class PlayingCard
{
	friend ostream& operator<<(ostream &os, const PlayingCard &c);
private:
	CardSuit suit;
	CardRank rank;
	static int cardCounter;
	static string RankStr(CardRank r);
	static string SuitStr(CardSuit s);

public:
	//PlayingCard();
	PlayingCard(int s, int r);
	static int getCardCounter();
	~PlayingCard();
};

